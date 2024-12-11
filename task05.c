#include <stdio.h>

void func(int n, int m){

    printf("%d ", n);

    if(n != m){
        if(n < m)
            func(n + 1, m);
        else
            func(n - 1, m);
    }
}

int main(){ 

    int a, b;

    printf("nechchidan boshlanishi kerak: "); scanf("%d", &a);
    printf("nechchida tugashi kerak: "); scanf("%d", &b);

    func(a, b);

    return 0;
}