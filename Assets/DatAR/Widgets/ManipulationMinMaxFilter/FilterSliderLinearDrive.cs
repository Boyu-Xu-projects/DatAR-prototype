////======= Copyright (c) Valve Corporation, All rights reserved. ===============
////
//// Purpose: Drives a linear mapping based on position between 2 positions
////
////=============================================================================
//// Modified by DatAR Research group

//using UnityEngine;
//using Valve.VR.InteractionSystem;

//namespace _main.Widgets.ManipulationMinMaxFilter
//{
//	public enum HandlePosition
//	{
//		Upper,
//		Lower
//	};

////-------------------------------------------------------------------------
//	[RequireComponent( typeof( Interactable ) )]
//	public class FilterSliderLinearDrive : MonoBehaviour
//	{
//		public Transform startPosition;
//		public Transform endPosition;
//		public bool repositionGameObject = true;
//		public bool maintainMomemntum = true;
//		public float momemtumDampenRate = 5.0f;

//		protected Hand.AttachmentFlags attachmentFlags = Hand.AttachmentFlags.DetachFromOtherHand;

//		protected float initialMappingOffset;
//		protected int numMappingChangeSamples = 5;
//		protected float[] mappingChangeSamples;
//		protected float prevMapping = 0.0f;
//		protected float mappingChangeRate;
//		protected int sampleCount = 0;

//		protected Interactable interactable;

//		[SerializeField] private FilterSliderControllerComponent filterSliderController;
//		[SerializeField] private HandlePosition handlePosition;

//		protected virtual void Awake()
//		{
//			mappingChangeSamples = new float[numMappingChangeSamples];
//			interactable = GetComponent<Interactable>();
//		}

//		private void SetControllerValue(float value)
//		{
//			if (handlePosition == HandlePosition.Lower)
//			{
//				filterSliderController.SetMinValue(value);
//			}
//			else
//			{
//				filterSliderController.SetMaxValue(value);
//			}
//		}

//		private float GetControllerValue()
//		{
//			if (handlePosition == HandlePosition.Lower)
//			{
//				return filterSliderController.selectedRange.Value.x;
//			}
//			else
//			{
//				return filterSliderController.selectedRange.Value.y;
//			}
//		}

//		protected virtual void Start()
//		{
//			initialMappingOffset = GetControllerValue();

//			if ( repositionGameObject )
//			{
//				UpdateLinearMapping( transform );
//			}
//		}

//		protected virtual void HandHoverUpdate( Hand hand )
//		{
//			GrabTypes startingGrabType = hand.GetGrabStarting();

//			if (interactable.attachedToHand == null && startingGrabType != GrabTypes.None)
//			{
//				initialMappingOffset = GetControllerValue() - CalculateLinearMapping( hand.transform );
//				sampleCount = 0;
//				mappingChangeRate = 0.0f;

//				hand.AttachObject(gameObject, startingGrabType, attachmentFlags);
//			}
//		}

//		protected virtual void HandAttachedUpdate(Hand hand)
//		{
//			UpdateLinearMapping(hand.transform);

//			if (hand.IsGrabEnding(this.gameObject))
//			{
//				hand.DetachObject(gameObject);
//			}
//		}

//		protected virtual void OnDetachedFromHand(Hand hand)
//		{
//			CalculateMappingChangeRate();
//		}


//		protected void CalculateMappingChangeRate()
//		{
//			//Compute the mapping change rate
//			mappingChangeRate = 0.0f;
//			int mappingSamplesCount = Mathf.Min( sampleCount, mappingChangeSamples.Length );
//			if ( mappingSamplesCount != 0 )
//			{
//				for ( int i = 0; i < mappingSamplesCount; ++i )
//				{
//					mappingChangeRate += mappingChangeSamples[i];
//				}
//				mappingChangeRate /= mappingSamplesCount;
//			}
//		}

//		public void OnMetaEngage(Transform handTransform)
//		{
//			initialMappingOffset = GetControllerValue() - CalculateLinearMapping( handTransform );
//			sampleCount = 0;
//			mappingChangeRate = 0.0f;
//		}

//		public void UpdateLinearMapping( Transform updateTransform )
//		{
//			prevMapping = GetControllerValue();

//			SetControllerValue(Mathf.Clamp01(initialMappingOffset + CalculateLinearMapping(updateTransform)));

//			mappingChangeSamples[sampleCount % mappingChangeSamples.Length] = ( 1.0f / Time.deltaTime ) * ( GetControllerValue() - prevMapping );
//			sampleCount++;

//			if ( repositionGameObject )
//			{
//				transform.position = Vector3.Lerp( startPosition.position, endPosition.position, GetControllerValue() );
//			}
//		}

//		protected float CalculateLinearMapping( Transform updateTransform )
//		{
//			Vector3 direction = endPosition.position - startPosition.position;
//			float length = direction.magnitude;
//			direction.Normalize();

//			Vector3 displacement = updateTransform.position - startPosition.position;

//			return Vector3.Dot( displacement, direction ) / length;
//		}


//		protected virtual void Update()
//		{
//			if ( maintainMomemntum && mappingChangeRate != 0.0f )
//			{
//				//Dampen the mapping change rate and apply it to the mapping
//				mappingChangeRate = Mathf.Lerp( mappingChangeRate, 0.0f, momemtumDampenRate * Time.deltaTime );
//				SetControllerValue(Mathf.Clamp01( GetControllerValue() + ( mappingChangeRate * Time.deltaTime ) ));

//				if ( repositionGameObject )
//				{
//					transform.position = Vector3.Lerp( startPosition.position, endPosition.position, GetControllerValue() );
//				}
//			}
//		}
//	}
//}