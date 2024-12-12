#include <stdio.h>

int degree(int x, int y){

    if(y == 0){
        return 1;
    }
    return  x * degree(x, y - 1);
}
int main(){
    
    int a, b;

    printf("N = "); scanf("%d", &a);
    printf("M = "); scanf("%d", &b);

    printf("%d ning %d - darajasi  %d ga teng\n", a, b, degree(a, b));

    return 0;
}