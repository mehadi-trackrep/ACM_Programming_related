/*
    There are various  relational operators supported by C++  language  like  < , > , <= , >= , == , etc.
    which can be used  to compare C++ built-in data  types.
    You can overload any of  these operators,  which can be used  to compare  the objects of a class.

*/

#include <iostream>
using namespace std;
class  Distance
{
private:
    int  feet ;              // 0 t o in fin it e
    int  inches ;            // 0 t o 12
public:
// requ ired con s t ru ct ors
    Distance( )
    {
        feet  = 0;
        inches  = 0;
    }
    Distance( int  f, int  i)
    {
        feet  = f;
        inches  = i;
    }
// m et h od t o dis pla y dis t a n ce
    void displayDistance( )
    {
        cout  << "F :  " << feet  << " I : " << inches  <<endl;
    }
// overloa ded m in u s  ( -)  opera t or
    Distance operator- ( )
    {
        feet  = -feet ;
        inches  = -inches ;
        return  Distance( feet , inches ) ;
    }
// overloa ded < opera t or
    bool operator <( const  Distance& d)
    {
        if( feet  < d. feet )
        {
            return  true;
        }
        if( feet  == d.feet  && inches  < d.inches )
        {
            return  true;
        }
        return  false;
    }
} ;

int main()
{
    Distance D1(5,10),D2(15,10);
    if(D1 < D2) cout << "D1 less than D2\n";
    else if(D2 < D1) cout << "D2 less than D1\n";
    return 0;
}
