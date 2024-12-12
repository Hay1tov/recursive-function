#include <stdio.h>

int EKUB(int x, int y){

    if(x < y){ 
        if(y % x == 0){  
            return x;
        }
        else{
            return EKUB(x, y % x);
        }
    }else{
        if(x % y == 0){  
            return y;
        }else{
            return EKUB(x % y, y);
        }
    }
}
int main(){
    
    int a, b;

    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    printf("EKUB = %d ", EKUB(a,b));

    return 0;
}