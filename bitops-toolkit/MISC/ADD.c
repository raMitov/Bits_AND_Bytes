#include <stdio.h>

int add_Without_Arithmetic(int a, int b){
    while(b!=0){
        int sum = a ^ b;
        int carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    return a;
}

int main(){
    int sum = add_Without_Arithmetic(5, 6);
    printf("Sum is %d", sum);
}