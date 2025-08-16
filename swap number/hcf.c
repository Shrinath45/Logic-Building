#include<stdio.h>

int hcf(int a, int b){
    while (b != 0)
    {
        int temp = b;
        b = a %b;
        a = temp;
        /* code */
    }
    return a;
    
}
int main(){
    int a = 4, b= 6;

    printf("HCF of %d & %d is %d\n", a, b, hcf(a,b));

    return 0;
}