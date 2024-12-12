#include <stdio.h>

int func(char c[], int f){
    if(c[f] == '\0'){
        return 0;
    }

    func(c, f + 1);
    printf("%c", c[f]);
    
}

int main(){

    char c[] = "uzbekiston";

    func(c, 0);

    return 0;

}

