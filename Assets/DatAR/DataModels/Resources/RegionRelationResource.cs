using DatAR.DataModels.Misc;
using DatAR.DataModels.Resources;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace DatAR.DataModels.Resources
{
    public sealed class RegionRelationResource : DynamicResource
    {
        public RegionRelationResource(List<string> types, int appearTimes, DynamicResource concept, DynamicResource region)
        {
            Types = types;
            AppearTimes = appearTimes;
            Concept = concept;
            Region = region;
        }

        public object this[string propertyName]
        {
            get => GetType().GetProperty(propertyName)?.GetValue(this, null);
            set => GetType().GetProperty(propertyName)?.SetValue(this, value, null);
        }

        [JsonProperty("datar:appearTimes")]
        public int AppearTimes { get; set; }

        [JsonProperty("datar:concept")]
        public DynamicResource Concept { get; set; }

        [JsonProperty("datar:Region")]
        public DynamicResource Region { get; set; }

        //[OnDeserializing]
        //internal void OnDeserializingMethod(StreamingContext context)
        //{
        //    if(context.Context)
        //}

        [OnDeserialized]
        internal new void OnDeserializedMethod(StreamingContext context)
        {
            base.OnDeserializedMethod(context);
            //FilterSelectionState = FilterSelectionStateType.InRange;
        }
    }
}
