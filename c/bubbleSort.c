#include <stdio.h>
void bubbleSort(int arr[], int size);

int main(int argc, char *argv[])
{
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++) { printf("%d\n", arr[i]); }
    return 0;
}

// Do Not Use sizeof For Array Parameters in C
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSort2(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
