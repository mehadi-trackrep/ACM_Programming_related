#include <stdio.h>
int main()
{
    long int i,j,max,min,k,l,count = 1,max_count = 0;
    scanf("%ld%ld",&i,&j);
    if(i>j){
        max = i;
        min = j;
    }
    else {
        max = j;
        min = i;
    }
    for(k=min;k<=max;k++){
      ///  if(k%3==0 || k%7==0)
            l = k;
     ///   else ;
        for(l=k;l>1; ){
            if(l==1){
                count++;
                break;
            }
            if(l&1)
                l = 3*l+1;
            else l /= 2;

            count++;
        }
        if(count > max_count)
            max_count = count;
        else ;
        /// printf("%d\n",p);
    }
    printf("%ld %ld %ld",i,j,max_count);

    return 0;
}

