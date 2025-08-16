#include<stdio.h>

int fibonaci(int n){
    if(n<1){
        printf("Invalid number of terms");
        return 0;
    }

    int prev1 = 1;
    int prev2 = 0;

    printf("%d ", prev2);

    if(n==1){
        return 1;
    }
    printf("%d ", prev1);

    for(int i = 3; i<=n; i++){
        int cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
        printf("%d ", cur);
    }

}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibonaci(n);
    return 0;
}