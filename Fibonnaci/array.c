#include<stdio.h>

int main(){
    int n, j, temp, i;

    printf("Enter a size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        /* code */
    }

    for(int i = 0; i < n -1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    for(int i = 0; i<n-1; i++){
        for(int j=0; j< n-i-1; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array in descending order: ");
    for(i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
    
}