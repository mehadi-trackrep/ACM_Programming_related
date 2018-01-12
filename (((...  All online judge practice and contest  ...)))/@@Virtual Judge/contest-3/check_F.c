#include <stdio.h>
#include <string.h>

char s[3000];

void add()
{
    int l = strlen(s);
    int i, j, k;
    if(l % 2 == 1)
    {
        i = l/2;
        j = l/2;
    }
    else
    {
        i = (l/2) - 1;
        j = l/2;
    }
    for(; i>= 0; i--,j++)
    {
        k = (int)s[i];
        k += 1;
        if(k == 58)
        {
            s[i] = '0';
            s[j] = '0';
        }
        else
        {
            s[i] = (char)k;
            s[j] = (char)k;
            break;
        }
    }
}

int main()
{
    int i, j, k=0;
    scanf("%s", s);
    j = strlen(s);
    for(i = 0; i < j/2; i++)
    {
        if(s[i] != s[j-i-1])
        {
            if(s[i] > s[j-i-1])
            {
                k = 0;
            }

            if(s[i] < s[j-i-1])
            {
                k++;
            }
            s[j-i-1] = s[i];
        }
    }
    if(k)
    {
        add();
    }

    printf("%s\n", s);

    return 0;
}
