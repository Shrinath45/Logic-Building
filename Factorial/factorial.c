#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    int fact = 1;
    if (n>0)
    {
        for(int i = 1; i<=n; i++){
            fact = fact *i;
        }

        printf("The Factorial of %d is %d", n, fact);
    }else{
        printf("Enter a Positive Number.");
    }
    
    return 0;
}