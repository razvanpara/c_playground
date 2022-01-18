namespace Meh
{
    public class Flow
    {
        private string _value;

        private Flow(string value)
        {
            _value = value;
        }

        public static Flow FREE_WEEKEND => new Flow("free-weekend");

        public static Flow ULC_REDEEM => new Flow("ulc-redeem");

        public override string ToString() => _value;
    }
}
