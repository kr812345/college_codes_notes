#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Enter a value of n: ");
    scanf("%d",&n);
    int *arr;
    arr = (int*) malloc(n*sizeof(int));

    for (i = 0; i < n ; i++)
    {
        arr[i] = i-1;
    }
    for (i = 0; i>n;i++)
    {
        printf("%d\n",arr[i]);
    }

    //free(arr);
    return 0;
}