#include <stdio.h>

int func(int n){
    int count = 0;

    if(n != 0){
        int qoldiq = n % 10;
        count += qoldiq;
    }

    return func(count);
}

int main(){

    func(9876);
    
    return 0;
}