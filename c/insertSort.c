#include <stdio.h>
void insertSort(int arr[], int size);
int main(int argc, char *argv[])
{
    int arr[5] = {1, 6, 5, 4, 5};
    insertSort(arr, 5);
    for (int i = 0; i < 5; i++) { printf("%d\n", arr[i]); }
    return 0;
}

void insertSort(int arr[], int size)
{
    for (int i = 1; i < size; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                // swap
                arr[j] = arr[j] ^ arr[j - 1];
                arr[j - 1] = arr[j] ^ arr[j - 1];
                arr[j] = arr[j] ^ arr[j - 1];
            }
        }
    }
    return;
}
