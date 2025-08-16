#include<stdio.h>

int main(){
    int x, y, sum = 0;
    printf("Enter value of x:");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    for (int i = x; i <= y; i++)
    {
        if(i%2==1){
            sum += i;
        }
        /* code */
    }
    printf("%d", sum);
    return 0;
    
}