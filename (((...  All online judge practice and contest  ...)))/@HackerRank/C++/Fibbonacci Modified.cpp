#include <sstream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>
#include <cmath>

int main()
{
    //using boost::multiprecision::cpp_int ;
//    const cpp_int ub = boost::multiprecision::pow( cpp_int(10), 999 ) ;

    {
        /////////// btute force /////////////////

        cpp_int a = 1 ;
        cpp_int b = 1 ;
        cpp_int fib ;

        int n = 2 ;
        while( fib < ub )
        {
            ++n ;
            fib = a + b ;
            a = b ;
            b = fib ;
        }

        std::cout << n << '\n' ; // 4782
    }

    {
        //////////// computation by rounding ////////////////
        // http://en.wikipedia.org/wiki/Fibonacci_number#Computation_by_rounding

        const double phi = ( std::sqrt(5.0) + 1 ) / 2.0 ; // golden ratio
        double n = std::ceil( ( std::log(10.0) * 999 + std::log(5.0) / 2 ) / std::log(phi) ) ;
        std::cout << n << '\n' ; // 4782
    }
}








//#include <iostream>
//#include <utility>
//#include <boost/multiprecision/cpp_int.hpp>
//
//using boost::multiprecision::cpp_int;
//
//cpp_int fib(cpp_int a, cpp_int b, unsigned int n)
//{
//    for(unsigned int i = 2; i < n; ++i)
//    {
//        cpp_int temp = a + b*b;
//        a = b;
//        b = temp;
//    }
//    return b;
//}
//
//int main()
//{
//    unsigned int a, b, n;
//
//    std::cin >> a >> b >> n;
//    std::cout << fib(a, b, n);
//}
//
