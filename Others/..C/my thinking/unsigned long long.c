#include <stdio.h>
int main()
{
    unsigned long long int a;

    a = 998877665544332211;
                     /// 0 theke 1.844674497e19 porjonto ///
                    /// etai unsigned long long er maximum range ///
  ///  scanf("%llu",&a);///   ////// 64 bits //////

    printf("%llu\n",a);
    printf("Size %d",sizeof(a));

    return 0;
}
