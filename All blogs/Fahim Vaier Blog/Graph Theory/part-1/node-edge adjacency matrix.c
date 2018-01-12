#include <stdio.h>
//#include <vector>
//using namespace std;
#define MAX 1000
int main()
{
    int Node,Edge;
    int matrix[100][100],i;

    scanf("%d%d",&Node,&Edge);

    for(i=0;i<Edge;i++){

    int n1,n2,cost;

    scanf("%d%d%d",&n1,&n2,&cost);

    matrix[n1][n2] = cost;
    matrix[n2][n1] = cost;
    }
    return 0;
}
