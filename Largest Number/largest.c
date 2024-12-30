#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter Value of a: ");
    scanf("%d", &a);

    printf("Enter Value of b: ");
    scanf("%d", &b);

    printf("Enter Value of c: ");
    scanf("%d", &c);

    if(a>b & a>c){
        printf("%d is Larger than %d & %d", a, b, c);
    }else if (b>a & b>c)
    {
        printf("%d is Larger than %d & %d", b, a, c);
    }
    else{
        printf("%d is Larger than %d & %d", c, a, b);
    }
    
}