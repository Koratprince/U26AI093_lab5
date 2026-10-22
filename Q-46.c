#include <stdio.h>

int main() {
    int n,max,sec_max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Please enter at least 2 elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        max = arr[0];
        sec_max = arr[1];
    } else {
        max = arr[1];
        sec_max = arr[0];
    }
    for(int i = 2; i < n; i++) {
        if(arr[i] > max) {
            sec_max = max; 
            max = arr[i];
        } 
        
    }

        printf("Max: %d, Second Max: %d\n", max, sec_max);

    return 0;
}