   /// input

/*

5
MARGARITA
AAAAAAMMRRTITIGGRRRRRRRR
AMARGITA
BOLOGNESACAPRICHOSATOMATERA
ABCDEFGHIJKLMNOPQRSTUVWXYZ

*/


#include <stdio.h>
#include <string.h>

int min(int x,int y){   /// AC
    if(x<y)
        return x;
    else
        return y;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--){
        int M=0,A=0,R=0,G=0,I=0,T=0,i=0,z=0;
        char str[600];
        scanf("%s",str);
        z=strlen(str);
        for(i=0;i<z;i++){
            if(str[i]=='M')
                M++;
            else if(str[i]=='A')
                A++;
            else if(str[i]=='R')
                R++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='I')
                I++;
            else if(str[i]=='T')
                T++;
        }

        int answer=min(min(min(min(min(M,A/3),R/2),G),I),T);
        /// or, int answer=min(min(min(min(min(M,A/3),R/2),I),T),G);
    /// or,
    /*
        a/=3;
        r/=2;
        if(m<min)
        min=m;
        if(a<min)
        min=a;
        if(r<min)
        min=r;
        if(g<min)
        min=g;
        if(i<min)
        min=i;
        if(t<min)
        min=t;

        printf(“%d\n”,min);
    */

        printf("%d\n",answer);
    }

    return 0;
}
