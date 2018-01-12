#include <stdio.h>
int GCD(int a,int b);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = GCD(a,b);
    printf("%d",c);

    return 0;
}

int GCD(int a,int b){

    int i,min,max,res; /// এখানে a and b পুনরায় declare করা যাবে না ///
    if(a>b){
        min = b;
        max = a;
    }
    else {
        min = a;
        max = b;
    }

    for(i=min-1;;i--){
        if(min%i==0 && max%i==0){
            res = i;
            break;
        }
    }

    return res;
}
