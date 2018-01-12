#include<stdio.h>
#include<string.h>
int main()
{
    char str[110],a[]="127",b[]="32767",c[]="2147483647",d[]="9223372036854775807",e[]="-128",f[]="-32768",g[]="-2147483648",h[]="-9223372036854775808";
    long long l,i,ret,j,x;
    scanf("%s",str);
    l=strlen(str);
    if(str[0]!='-')
    {
        if(l<=3)
        {
            if(l<3)
                printf("byte\n");
            else if(l==3)
            {
                ret=strcmp(str,a);
                if(ret<=0)
                    printf("byte\n");
                else
                    printf("short\n");
            }
        }
        else if(l>3 && l<=5)
        {
            if(l>3 && l<5)
                printf("short\n");
            else if(l==5)
            {
                ret=strcmp(str,b);
                if(ret<=0)
                    printf("short\n");
                else
                    printf("int\n");
            }
        }
        else if(l>5 && l<=10)
        {
            if(l>5 && l<10)
                printf("int\n");
            else if(l==10)
            {
                ret=strcmp(str,c);
                if(ret<=0)
                    printf("int\n");
                else
                    printf("long\n");
            }
        }
        else if(l>10 && l<=19)
        {
            if(l>10 && l<19)
                printf("long\n");
            else if(l==19)
            {
                ret=strcmp(str,d);
                if(ret<=0)
                    printf("long\n");
                else
                    printf("BigInteger\n");
            }
        }
        else if(l>19)
            printf("BigInteger\n");
    }
    else if(str[0]=='-')
    {
        if(l<=4)
        {
            if(l<4)
                printf("byte\n");
            else if(l==4)
            {
                ret=strcmp(str,e);
                if(ret<=0)
                    printf("byte\n");
                else
                    printf("short\n");
            }
        }
        else if(l>4 && l<=6)
        {
            if(l>4 && l<6)
                printf("short\n");
            else if(l==6)
            {
                ret=strcmp(str,f);
                if(ret<=0)
                    printf("short\n");
                else
                    printf("int\n");
            }
        }
        else if(l>6 && l<=11)
        {
            if(l>5 && l<11)
                printf("int\n");
            else if(l==11)
            {
                ret=strcmp(str,g);
                if(ret<=0)
                    printf("int\n");
                else
                    printf("long\n");
            }
        }
        else if(l>11 && l<=20)
        {
            if(l>11 && l<20)
                printf("long\n");
            else if(l==20)
            {
                ret=strcmp(str,h);
                if(ret<=0)
                    printf("long\n");
                else
                    printf("BigInteger\n");
            }
        }
        else if(l>20)
            printf("BigInteger\n");
    }
}

