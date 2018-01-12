#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
 
    char grid1[5][5],grid2[5][5];   /// AC
    int j,r1,c1,r2,c2;
    char str1[5],str2[5];
    
    for(int i=0; i<2 ; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%c",&grid1[i][j]);
            if(grid1[i][j] == 'A')
            {
                r1 = i;
                c1 = j;
            }
        }
        grid1[i][j] = '\0';
        getchar();
    }
    
    //getchar();
    
    for(int i=0; i<2 ; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%c",&grid2[i][j]);
            if(grid2[i][j] == 'A')
            {
                r2 = i;
                c2 = j;
            }
        }
        grid2[i][j] = '\0';
        getchar();
    }
    
    int k = 0;
    
    if(r1 == 0 && c1 == 0)
    {
        str1[k++] = 'A';
        
        if(grid1[0][1] != 'X')
            str1[k++] = grid1[0][1];

        if(grid1[1][1] != 'X')
            str1[k++] = grid1[1][1];
        
        if(grid1[1][0] != 'X')
            str1[k++] = grid1[1][0];
       
    }
    
    else if(r1 == 0 && c1 == 1)
    {
        str1[k++] = 'A';
        
        if(grid1[1][1] != 'X')
            str1[k++] = grid1[1][1];

        if(grid1[1][0] != 'X')
            str1[k++] = grid1[1][0];
        
        if(grid1[0][0] != 'X')
            str1[k++] = grid1[0][0];
       
    }
    
    else if(r1 == 1 && c1 == 1)
    {
        str1[k++] = 'A';
        
        if(grid1[1][0] != 'X')
            str1[k++] = grid1[1][0];

        if(grid1[0][0] != 'X')
            str1[k++] = grid1[0][0];
        
        if(grid1[0][1] != 'X')
            str1[k++] = grid1[0][1];
       
    }
    
    else if(r1 == 1 && c1 == 0)
    {
        str1[k++] = 'A';

        if(grid1[0][0] != 'X')
            str1[k++] = grid1[0][0];
        
        if(grid1[0][1] != 'X')
            str1[k++] = grid1[0][1];
       
        if(grid1[1][1] != 'X')
            str1[k++] = grid1[1][1];
    }
    str1[k] = '\0';
    k = 0;
    if(r2 == 0 && c2 == 0)
    {
        str2[k++] = 'A';
        
        if(grid2[0][1] != 'X')
            str2[k++] = grid2[0][1];

        if(grid2[1][1] != 'X')
            str2[k++] = grid2[1][1];
        
        if(grid2[1][0] != 'X')
            str2[k++] = grid2[1][0];
       
    }
    
    else if(r2 == 0 && c2 == 1)
    {
        str2[k++] = 'A';
        
        if(grid2[1][1] != 'X')
            str2[k++] = grid2[1][1];

        if(grid2[1][0] != 'X')
            str2[k++] = grid2[1][0];
        
        if(grid2[0][0] != 'X')
            str2[k++] = grid2[0][0];
       
    }
    
    else if(r2 == 1 && c2 == 1)
    {
        str2[k++] = 'A';
        
        if(grid2[1][0] != 'X')
            str2[k++] = grid2[1][0];

        if(grid2[0][0] != 'X')
            str2[k++] = grid2[0][0];
        
        if(grid2[0][1] != 'X')
            str2[k++] = grid2[0][1];
       
    }
    
    else if(r2 == 1 && c2 == 0)
    {
        str2[k++] = 'A';

        if(grid2[0][0] != 'X')
            str2[k++] = grid2[0][0];
        
        if(grid2[0][1] != 'X')
            str2[k++] = grid2[0][1];
       
        if(grid2[1][1] != 'X')
            str2[k++] = grid2[1][1];
    }
    str2[k] = '\0';
    
    if(strcmp(str1,str2) == 0)
        printf("YES\n");
    else
        printf("NO\n");
    
    //cout << grid1[0] << ' ' << grid1[1] << endl;
    //cout << grid2[0] << ' ' << grid2[1] << endl;
    
    return 0;
    
}