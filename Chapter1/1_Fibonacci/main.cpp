# include <ctime>
#include <iostream>

using namespace std;

#include "Fib.h"

__int64 fibI( int n);//迭代
__int64 fib( int n);//二分递归
__int64 fib( int n, __int64 &f);//线性递归

int main(){
    int n;
    cout<<"inputFibonacci order n =";
    cin >> n;
    printf("n = %d\n",n);
    if (2 > n) { printf("n is too small\n"); }
    printf ( "\n------------- class Fib -------------\n" );
    Fib f(0);
    for (int i = 0; i < n; i++, f.next()) {
        printf( "fib(%2d) = %d\n", i,f.get());
    }
    for (int i = 0; i < n; ++i) {
        printf ("fib(%2d) = %d\n", n-i, f.get());
    }

    printf ( "\n------------- Iteration -------------\n" );
    for (int i = 0; i < n; ++i) {
        printf ("fib(%2d) = %lld\n", i, fibI ( i ));
    }

    printf ( "\n------------- Liner Recursion -------------\n" );
    __int64 f0;
    for (int i = 0; i < n; ++i) {
        printf ("fib(%2d) = %lld\n", i, fib(i,f0));
    }

    printf ( "\n------------- Binary Recursion -------------\n" );
    for (int i = 0; i < n; ++i) {
        printf("fib(%2d) = %lld\n", i, fib(i));
    }
    return 0;
}