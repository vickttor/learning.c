#include <stdio.h>

// Bubble Sort O(n^2)
void sort(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main() {

  int array[] = {9,3,1,6,2,8,4,5,0,7};
  int size = sizeof(array)/sizeof(array[0]);

  sort(array, size);

  for(int i = 0; i < size; i++) {
    printf("N[%d] = %d\n", i, array[i]);
  }

  return 0;
}