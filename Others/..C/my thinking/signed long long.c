#include <stdio.h>
int main()
{
    signed long long int a,b;

    a = 4294967296;
   // b = 4294967296;                     /// problem ace ///
    ///a = -998877665544332211;
                     /// 0 theke 1.844674497e19 porjonto ///
                    /// etai signed long long er maximum range ///
  ///  scanf("%lls",&a);///   ////// 64 bits //////

    printf("%lls %lls\n",a,b); /// negative hobe na ///
    printf("Size %d",sizeof(a));

    return 0;
}

