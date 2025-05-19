#include <stdio.h>

void dec_To_Bin(int a){
    char hex[20];
    int index = 0;
    if(a == 0){printf("0"); return;}
    while(a){
        int reminder = a % 16;
        if(reminder < 10){
            hex[index] = reminder - '0';
        }
        else{
            hex[index] = reminder - 10 + 'A';
        }
        index++;
        a /= 16;
    }

}


int main(){

}