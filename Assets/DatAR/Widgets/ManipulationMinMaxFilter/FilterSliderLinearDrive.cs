////======= copyright (c) valve corporation, all rights reserved. ===============
////
//// purpose: drives a linear mapping based on position between 2 positions
////
////=============================================================================
//// modified by datar research group

//using unityengine;
//using valve.vr.interactionsystem;

//namespace _main.widgets.manipulationminmaxfilter
//{
//    public enum handleposition
//    {
//        upper,
//        lower
//    };

//    //-------------------------------------------------------------------------
//    [requirecomponent(typeof(interactable))]
//    public class filtersliderlineardrive : monobehaviour
//    {
//        public transform startposition;
//        public transform endposition;
//        public bool repositiongameobject = true;
//        public bool maintainmomemntum = true;
//        public float momemtumdampenrate = 5.0f;

//        protected hand.attachmentflags attachmentflags = hand.attachmentflags.detachfromotherhand;

//        protected float initialmappingoffset;
//        protected int nummappingchangesamples = 5;
//        protected float[] mappingchangesamples;
//        protected float prevmapping = 0.0f;
//        protected float mappingchangerate;
//        protected int samplecount = 0;

//        protected interactable interactable;

//        [serializefield] private filterslidercontrollercomponent filterslidercontroller;
//        [serializefield] private handleposition handleposition;

//        protected virtual void awake()
//        {
//            mappingchangesamples = new float[nummappingchangesamples];
//            interactable = getcomponent<interactable>();
//        }

//        private void setcontrollervalue(float value)
//        {
//            if (handleposition == handleposition.lower)
//            {
//                filterslidercontroller.setminvalue(value);
//            }
//            else
//            {
//                filterslidercontroller.setmaxvalue(value);
//            }
//        }

//        private float getcontrollervalue()
//        {
//            if (handleposition == handleposition.lower)
//            {
//                return filterslidercontroller.selectedrange.value.x;
//            }
//            else
//            {
//                return filterslidercontroller.selectedrange.value.y;
//            }
//        }

//        protected virtual void start()
//        {
//            initialmappingoffset = getcontrollervalue();

//            if (repositiongameobject)
//            {
//                updatelinearmapping(transform);
//            }
//        }

//        protected virtual void handhoverupdate(hand hand)
//        {
//            grabtypes startinggrabtype = hand.getgrabstarting();

//            if (interactable.attachedtohand == null && startinggrabtype != grabtypes.none)
//            {
//                initialmappingoffset = getcontrollervalue() - calculatelinearmapping(hand.transform);
//                samplecount = 0;
//                mappingchangerate = 0.0f;

//                hand.attachobject(gameobject, startinggrabtype, attachmentflags);
//            }
//        }

//        protected virtual void handattachedupdate(hand hand)
//        {
//            updatelinearmapping(hand.transform);

//            if (hand.isgrabending(this.gameobject))
//            {
//                hand.detachobject(gameobject);
//            }
//        }

//        protected virtual void ondetachedfromhand(hand hand)
//        {
//            calculatemappingchangerate();
//        }


//        protected void calculatemappingchangerate()
//        {
//            //compute the mapping change rate
//            mappingchangerate = 0.0f;
//            int mappingsamplescount = mathf.min(samplecount, mappingchangesamples.length);
//            if (mappingsamplescount != 0)
//            {
//                for (int i = 0; i < mappingsamplescount; ++i)
//                {
//                    mappingchangerate += mappingchangesamples[i];
//                }
//                mappingchangerate /= mappingsamplescount;
//            }
//        }

//        public void onmetaengage(transform handtransform)
//        {
//            initialmappingoffset = getcontrollervalue() - calculatelinearmapping(handtransform);
//            samplecount = 0;
//            mappingchangerate = 0.0f;
//        }

//        public void updatelinearmapping(transform updatetransform)
//        {
//            prevmapping = getcontrollervalue();

//            setcontrollervalue(mathf.clamp01(initialmappingoffset + calculatelinearmapping(updatetransform)));

//            mappingchangesamples[samplecount % mappingchangesamples.length] = (1.0f / time.deltatime) * (getcontrollervalue() - prevmapping);
//            samplecount++;

//            if (repositiongameobject)
//            {
//                transform.position = vector3.lerp(startposition.position, endposition.position, getcontrollervalue());
//            }
//        }

//        protected float calculatelinearmapping(transform updatetransform)
//        {
//            vector3 direction = endposition.position - startposition.position;
//            float length = direction.magnitude;
//            direction.normalize();

//            vector3 displacement = updatetransform.position - startposition.position;

//            return vector3.dot(displacement, direction) / length;
//        }


//        protected virtual void update()
//        {
//            if (maintainmomemntum && mappingchangerate != 0.0f)
//            {
//                //dampen the mapping change rate and apply it to the mapping
//                mappingchangerate = mathf.lerp(mappingchangerate, 0.0f, momemtumdampenrate * time.deltatime);
//                setcontrollervalue(mathf.clamp01(getcontrollervalue() + (mappingchangerate * time.deltatime)));

//                if (repositiongameobject)
//                {
//                    transform.position = vector3.lerp(startposition.position, endposition.position, getcontrollervalue());
//                }
//            }
//        }
//    }
//}