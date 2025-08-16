#include<stdio.h>

int lcm(int a, int b){
    int greater = (a>b) ? a: b;
    int smallest = (a<b)? a: b;

    for(int i = greater; ; i+=greater){
        if(i % smallest == 0){
            return i;
        }
    }
}
int main(){
    int a = 10, b = 25;

    printf("LCM of %d & %d is %d", a, b, lcm(a,b));
    return 0;
}