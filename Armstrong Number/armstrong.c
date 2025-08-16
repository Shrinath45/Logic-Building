#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int original = n, sum = 0, digits = 0;

    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
        /* code */
    }

    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
        /* code */
    }

    return (sum == original);
    
}
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (armstrong(num))
    {
        printf("%d is armstrong number", num);
        /* code */
    }else{
        printf("%d is not armstrong number", num);
    }
    
    return 0;
}