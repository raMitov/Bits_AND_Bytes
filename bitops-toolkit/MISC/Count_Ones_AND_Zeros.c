#include <stdio.h>
#include <stdio.h>

void count_Ones_And_Zeros(int a){
    int zeros = sizeof(a) * 8;
    int onecount = 0;
    while(a){
        if(a & 1) onecount++;
        a >>= 1;
    }
    zeros -= onecount;
    printf("The 0-bit count is %d, the 1-bit count is %d", zeros, onecount);
}

int main(){
    int a = 12;
    count_Ones_And_Zeros(a);
}