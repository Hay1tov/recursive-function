#include <stdio.h>

void func(int x, int y){
    
    if(y != 1){
        func(x, y - 1);
    }
    
    int result = x * y;
    printf("%d * %2d = %2d\n", x, y, result); 
    
}
int main(){

    int a;
    int b;

    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
 
    func(a, b);

    return 0;
}