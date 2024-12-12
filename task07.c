#include <stdio.h>

int EKUB(int x, int y){ 
    if(x < y){ 
        if(y % x == 0){  
            return x; 
        }else{
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
int EKUK(int x, int y){ 
    
    return (x * y) / EKUB(x, y);
}
int main(){
    
    int a, b;

    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    printf("EKUK = %d ", EKUK(a,b));

    return 0;
}