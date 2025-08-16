#include<stdio.h>

int summation(int n){
    int sum = 0;
    for(int i = 1; i<= n; i++){
        sum += (i*i);
        
    }
    return sum;
}
int main(){
    int n = 4;
    printf("%d", summation(n));
    return 0;
}