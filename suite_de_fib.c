#include <stdio.h>
#include <stdlib.h>

int fib_ite (int n ) ;
int fibo (int n ) ;

int main () {
int i , nb = 5 ;
for (i=0 ; i<=nb ; i++) {
    printf ("\n |%4d| %4d " , i ,fib_ite(i) ) ;
    printf ("|%4d|" , fibo(i)) ;
}
    return 0 ;
}

int fib_ite (int n ) {
    int i , T[n+1] ;
    if (n==0 || n==1)
    return 1 ;
    T[0] = T[1] = 1 ;
    for (i=2 ; i<=n ; i++ )
    return T[n] ;
}

int fibo (int n ) {
    if (n==0 || n==1 )
    return 1 ;
    else return (fibo(n-1) + fibo(n-1)) ;
}

//int fibo (int n ) {
  //  return (n==0 || n==1 ) ?1 : fibo(n-1) + fibo(n-2) ;
//}                        
//condition ? value_if_true : value_if_false