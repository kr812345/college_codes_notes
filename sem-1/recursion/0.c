#include <stdio.h>

int binary_search(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l = (r-l)/2;
    printf("l.r.mid - (%d,%d,%d)\n",l,r,mid);

    if (arr[mid] == x)
        return mid;

    if (arr[mid] > x)
        return binary_search(arr,l,mid - 1, x);

    return binary_search(arr, mid + 1, r, x);
    }
    return -1;
}

int main(){
    int arr[] = {2,3,4,10,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    int result = binary_search(arr, 0, n - 1, x);

    // Element found or not
    (result == -1) ? printf("Nahin mila!")
                    : printf("mila gaya!! Index %d par baitha hai!", result);
    return 0;
}