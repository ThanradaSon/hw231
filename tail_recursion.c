#include <stdio.h>
//Tail recursion function
int a(int n, int sum){
    if (n == 1)
    {
        return sum;
    }else
    {
        return a(n-1, sum+3);
    }
}
int main(){
    printf("%d", a(5,2));
}
//6410406649 ธัญรดา สอนนาคงเจริญ