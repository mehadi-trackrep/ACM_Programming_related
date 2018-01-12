#include <stdio.h>
#include <string.h>
int main()
{
    int a = 10,b = 4,c = 17,d = 8,i;
    a = a | (1 << 4);
   // printf("%d",a);
   if((d >> 3) & 1){
    for(i = 1;i <= 3;i++){
        printf("a = %d,c = %d\n",a,c);  /// a << b = a*2^b
                                        /// and a>>b = a/(2^b)
        a = a^c;
        c = c^i;
    }
   }
   if((d >> 2)%4 == 0 || (a%3 == 0 && c%4 != 3))
    printf("a|c = %d\n",a|c);
   printf("a = %d\a",a&(a<<b));

    return 0;
}

