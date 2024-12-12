#include <stdio.h>

int factorial(int a){

    if(a == 1){
        return 1;
    }

    return a * factorial(a - 1);
}

int main(){

    int f;

    printf("Sonni kiriting: "); scanf("%d", &f);
    
    printf("Javob = %d\n", factorial(f));

    return 0;
}