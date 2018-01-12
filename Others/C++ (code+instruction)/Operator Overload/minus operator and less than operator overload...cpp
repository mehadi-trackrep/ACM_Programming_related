#include <bits/stdc++.h>
using namespace std;

class distance
{
    private:
        int feet;
        int inches;
    public: /// required constructors :
        distance()
        {
            feet = 0;
            inches = 0;
        }
        distance(int f,int i)
        {
            feet = f;
            inches = i;
        }
    // m et h od t o dis pla y dis t a n ce
        void displayDistance( )
        {
            cout  << "F :  " << feet  << " I : " << inches  <<endl;
        }
        /// minus (-1) operator overload:
        distance operator - ()
        {
            feet = -feet;
            inches = -inches;
            return distance(feet,inches);
        }
        /// less than (<) operator overload:
        bool operator < (const distance &d)
        {
            if(feet < d.feet) return true;
            if(feet == d.feet && inches < d.inches) return true;
            return false;
        }
};

int main()
{
    distance D1(5,10),D2(15,10);
    if(D1 < D2) cout << "D1 less than D2\n";
    else if(D2 < D1) cout << "D2 less than D1\n";
    return 0;
}
