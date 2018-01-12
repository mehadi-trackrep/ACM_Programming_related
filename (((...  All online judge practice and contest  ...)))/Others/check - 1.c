#include <stdio.h>
#include <string.h>
int main()
{ int i,j,k,l,n,c=0;
scanf("%d",&n);
    char a[100][11],b[11];
for(i=0;i<n;i++){
    gets(a[i]);
getchar();
}
    gets(b);
    getchar();
    l=strlen(b);
    /*for(i=0;i<n;i++){

        for(j=0;j<l;j++){
            if(a[i][j]!=b[j])
                c++;

        }
        if(c==1)
            puts(a[i]);
    }*/
for(i=0;i<n;i++){
    for(j=0;j<l;j++){
        printf("%c",a[i][j]);
    }
    printf("\n");
}

    return 0;
}

