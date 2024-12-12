#include <stdio.h>

void func(int n){
    if(n != 1){
        func(n - 1);
    }
    if(n % 2 == 0){
        printf("%d ", n - 1);
    }
}

int main(){ 

    int a;

    printf("a = "); scanf("%d", &a);


    func(a);

    return 0;
}
