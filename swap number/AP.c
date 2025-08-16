#include<stdio.h>

int nthTermOfAP(int a1, int a2, int n){
    int nthTerm = a1, d = a2 - a1;
    for (int i = 1; i < n; i++)
    {
        nthTerm += d;
        /* code */
    }
    return nthTerm;
    
}

int main(){
    int a1 = 2, a2 = 4;

    int n = 10;
    printf("%d", nthTermOfAP(a1, a2, n));
    return 0;
}