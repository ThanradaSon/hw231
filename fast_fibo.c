#include <stdio.h>

int fibo(int n){
    
        unsigned long long a = 1, b = 0, i, c = 0;
        for ( i = 0; i < n; i++)
        {
            printf("%llu\n", c);
            c = a + b;
            a = b;
            b = c;
        }
    
}

int main(){
    int n;
    scanf("%d", &n);
    fibo(n);
}