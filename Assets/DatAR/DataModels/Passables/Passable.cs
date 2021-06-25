using DatAR.DataModels.Resources;
using Newtonsoft.Json;

namespace DatAR.DataModels.Passables
{
    public class Passable
    {
    }

    public class Passable<T> : Passable where T : IResource
    {
        public T data { get; set; }

        public Passable<T> DeepCopy()
        {
            var intermediary = JsonConvert.SerializeObject(this);
            return JsonConvert.DeserializeObject<Passable<T>>(intermediary);
        }
    }
}