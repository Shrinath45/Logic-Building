#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int fact = 1;
    if (n>0)
    {
        for (int i = 0; i <=n; i++)
        {
            fact = fact * i;
        }
        printf("The Factorial is: %d", &fact);
        
    }else{
        printf("0's Factorial is 0");
    }
    
}