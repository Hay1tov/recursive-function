#include <stdio.h>

int fibonaci(int f){

    if(f == 0){
        return 0;
    }
    else if(f == 1){
        return 1;
    }


    return fibonaci(f - 1) + fibonaci(f - 2);
}

int main(){
    int n;

    printf("N = "); scanf("%d", &n);

    printf("%d\n", fibonaci(n));

    return 0;
}