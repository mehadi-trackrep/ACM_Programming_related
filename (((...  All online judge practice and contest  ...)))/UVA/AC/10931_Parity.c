#include <stdio.h>
#include <string.h>
char bi[100],copy_bi[100];
void dec_to_bi(int n);
int main()
{
    int I,count;
    int i,len,j;

    while(scanf("%d",&I)){  /// v.v.i. strrev function use korle  kisu kisu khettere problem kore

        if(I == 0)
            break;

        dec_to_bi(I);

        count = 0;
        len = strlen(bi);

        for(i = len-1;i >= 0;i--)
            copy_bi[len-i-1] = bi[i];

        copy_bi[len-i-1] = '\0';

        for(i = 0;i < len;i++){
            if((int)copy_bi[i] - 48 == 1)
                count++;
        }

        printf("The parity of %s is %d (mod 2).\n",copy_bi,count);
    }

    return 0;
}

void dec_to_bi(int n)
{

    int rem;
    int i = 0;
    while(n >= 1){

        rem = n - 2 *(n/2);
        bi[i++] = rem + 48;
        n /= 2;
    }

    bi[i] = '\0';

}
