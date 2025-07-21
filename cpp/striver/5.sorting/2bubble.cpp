#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    bool swaped = false;
    int key = arr[i];
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        swaped = true;
      }
    }

    if (!swaped)
      break;
  }
}

int main() {
  // bubble sort
  int n = 6;
  int arr[] = {4, 3, 5, 2, 6, 1};

  bubble_sort(arr, n);

  // printitng sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  return 0;
}