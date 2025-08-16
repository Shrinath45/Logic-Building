// #include <stdio.h>
// #include <stdlib.h>

// int isPalindrome(int n) {
//     // Negative numbers cannot be palindromes
//     if (n < 0) {
//         return 0;
//     }

//     int reverse = 0, temp = n;

//     while (temp != 0) {
//         reverse = (reverse * 10) + (temp % 10);
//         temp /= 10;
//     }

//     return (reverse == n);
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (isPalindrome(n)) {
//         printf("Yes\n");
//     } else {
//         printf("No\n");
//     }

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

int isPalindrome(int n){
    if (n<0)
    {
        return 0;
        /* code */
    }
    int reverse = 0, temp = n;
    while (temp != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
        /* code */
    }

    return(reverse == n);
}

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(isPalindrome(num)){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}