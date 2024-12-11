#include <stdio.h>

void func(int n){

    if(n != 1)
        func(n - 1);

    printf("%d ", n);
}

int main(){ 

    int a;

    printf("a = "); scanf("%d", &a);


    func(a);

    return 0;
}
