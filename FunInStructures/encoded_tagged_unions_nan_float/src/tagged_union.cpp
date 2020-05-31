/*
- The example here is a tagged union representing a value that can be rounded.
- `bool is_rounded` serves as the tag.
- If `is_rounded` is true, we know not to access `raw_value`
*/

class round_number
{
   public:
       double access_value();
       void   round();
   private:
      bool is_rounded;
      union
      {
         int    rounded_value;
         double raw_value;
      };
};