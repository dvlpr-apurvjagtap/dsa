#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i; j < n; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  // selection sort
  int n = 6;
  int arr[] = {4, 3, 5, 2, 6, 1};

  selection_sort(arr, n);

  // printitng sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  return 0;
}