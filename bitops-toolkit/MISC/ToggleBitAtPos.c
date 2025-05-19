#include <stdio.h>

int toggleBitAt(int a, int pos){
    a ^= (1 << pos);
    return a;
}

int main(){
    int a = 12;
    int b = toggleBitAt(a, 1);
    printf("%d", b);
}