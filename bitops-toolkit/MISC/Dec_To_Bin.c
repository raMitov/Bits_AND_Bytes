#include <stdio.h>

void decToBin(int a){
    if(a == 0){
        printf("0");
        return;
    }
    int bits = sizeof(a) * 8;
    int arr[bits];
    int i = 0;

    while (a > 0) {
        arr[i++] = a % 2;
        a /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
}

int main(){
    int a = 12;
    decToBin(a);
}