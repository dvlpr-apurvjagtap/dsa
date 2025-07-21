#include <bits/stdc++.h>
using namespace std;

// void insertion_sort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     for (int j = i; j > 0; j--) {
//       if (arr[j - 1] > arr[j]) {
//         int temp = arr[j];
//         arr[j] = arr[j - 1];
//         arr[j - 1] = temp;
//       }
//     }
//   }
// }

void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  // insertion sort
  int n = 6;
  int arr[] = {4, 3, 5, 2, 6, 1};

  insertion_sort(arr, n);

  // printitng sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  return 0;
}