#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,c,y,x;
    char s[10000];
    scanf("%s",s);

    l=strlen(s);
    x=0;

    if(l%2==0)
        x=l/2-1;
    else
        x=l/2;


    for(i=0,j=l-1; i<x; i++,j--)
    {
        
        if(s[i]>s[j])
        {
            c=1;
            s[j]=s[i];
        }
        else
        {
            c=0;
            s[j]=s[i];
        }
    }

    if(c==0)
    {
        if(l%2==0)
        {
            if(s[x]<=s[x+1])
            {
                s[x]++;
                s[x+1]=s[x];
            }
            else
            {
                s[j]=s[i];
            }

        }
        else
            s[x]++;
    }
    if(l%2==0)
    {
        if(s[x+1]>s[x])
            s[x]=s[x+1];
        else
            s[x+1]=s[x];
    }

    if((s[x]-48)==10) /// orthat 9 hole...
    {
        if(l%2==0)
        {
            s[x]='0',s[x+1]='0';
            for(i=x-1,j=x+2; i>=0; i--,j++)
            {
                s[i]++;
                s[j]++;
                if((s[i]-48)==10)
                {
                    s[i]='0',s[j]='0';
                }
                else
                    break;
            }
        }
        else
        {
            s[x]='0';
            for(i=x-1,j=x+1; i>=0; i--,j++)
            {
                s[i]++;
                s[j]++;
                if((s[i]-48)==10)
                {
                    s[i]='0',s[j]='0';
                }
                else
                    break;
            }
        }
    }
    printf("%s\n",s);

    return 0;
}


