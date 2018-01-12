#include <bits/stdc++.h>
using namespace std;

int hist[2000][2010],N;

int getMaxArea(int hist[], int n)
{
    
    stack<int> s;
 
    int max_area = 0; 
    int tp;  
    int area_with_top; 
 
   
    int i = 0;
    while (i < n)
    {
        
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
 
        
        else
        {
            tp = s.top();  
            s.pop();  
 
            
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
 
          
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
 
   
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
 
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
 
    return max_area;
}
 
int main()
{
    
    int tcas,r,c;
    cin >> tcas;
    while(tcas--)
    {
        cin >> r >> c;
        int k = 0,len;
        string str;
        for(int i=1; i<=r; i++)
        {
            cin >> str;
            len = str.length();
            int m,count=1,ck=0;
            for(int j=0; j<str.size(); j++)
            {
                if(str[j] == '0' && j != 0 && str[j-1] == '0')
                {   
                    count = 1;
                    m = j;
                    while(str[j] == '0' && j != 0 && str[j-1] == '0')
                    {
                        count++;
                        ck = 1;
                        j++;
                    }
                }
                else if(str[j] == '0' && str[j+1] != '0')
                {
                    histo[
                }
                if(maxm < count)
                    maxm = count;
            }
            cerr << "check: maxm-> " << maxm << endl;
            if(ck==1)
            {
                hist[k++] = maxm;
            }
                
            
        }
        //cout << getMaxArea(hist, N) << endl;
        
        cout << "\n\n";
    }
    
    return 0;
}