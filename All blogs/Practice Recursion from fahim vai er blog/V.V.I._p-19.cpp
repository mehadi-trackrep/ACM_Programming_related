/*

If you already solved the problem for finding the nth fibonacci number, then you must have a clear vision on how the program flow works. So now, in this problem, print the values of your fibonacci function in pre-order, in-order and post-order traversal. For example, when n = 5, your program calls 3 and 4 from it, from the call of 3, your program calls 1 and 2 again....... here is the picture:


Input:
5
Output:
Inorder: 1 3 2 5 2 4 1 3 2
Preorder: 5 3 1 2 4 2 3 1 2
Postorder: 1 2 3 2 1 2 3 4 5

*/

#include <bits/stdc++.h>
using namespace std;

int n;

void preorder(int x)
{
    if(x == 1 || x == 2)
    {
        printf("%d ",x);
        return ;
    }

    printf("%d ",x);

    preorder(x-2);
    preorder(x-1);

    //printf("=>%d ",x);
}


void postorder(int x)
{
    if(x == 1 || x == 2)
    {
        printf("%d ",x);
        return ;
    }

    postorder(x-2);
    postorder(x-1);

    printf("%d ",x);
    //printf("=>%d ",x);
}

void inorder(int x)
{
    if(x == 1 || x == 2)
    {
        printf("%d ",x);
        return ;
    }

    inorder(x-2);
    printf("%d ",x);
    inorder(x-1);

    //printf("=>%d ",x);
}

int main()
{
    while(cin >> n)
    {
        printf("preorder: ");
        preorder(n);
        printf("\n");
        printf("postorder: ");
        postorder(n);
        printf("\n");
        printf("inorder: ");
        inorder(n);
        printf("\n");
    }
    return 0;
}
