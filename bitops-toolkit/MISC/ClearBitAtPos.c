#include <stdio.h>

int clearBitAtPos(int a, int pos){
    a &= ~(1 << pos);
    return a;
}

int main(){
    int res = clearBitAtPos(12, 2);
    printf("%d", res);
}