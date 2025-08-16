#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int e = n % 2;

    if(e == 0){
        printf("The given number %d is Even.", n);
    }else{
        printf("The given number %d is Odd.", n);
    }

}