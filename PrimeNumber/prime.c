#include<stdio.h>

int main(){
    int num, i;
    

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num<=1){
        printf("%d is not a prime Number.", num);
        return 0;
    }

    for(i=2; i<num; i++){
        if(num%1 == 0){
            printf("%d is not a prime number. ", num);
            return 0;
        }
    }

    printf("%d is a prime number. ", num);
    return 0;
}