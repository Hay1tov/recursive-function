#include <stdio.h>

int function(int n){

    if(n != 1){
        function(n - 1);
    }

    return printf("Hello world\n");
}
int main(){

    int a;

    printf("nechchi marta chiqarsin: "); scanf("%d", &a);

    function(a);

    return 0;
}