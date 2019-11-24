// C++ program for
// Smallest sum contiguous subarray
#include <stdio.h>

#define max(a, b)(((a) > (b)) ? (a) : (b))
void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
// function to find the smallest sum contiguous subarray
int smallestSumSubarr(int arr[], int n) {
  int i;
  // First invert the sign of the elements
  for (i = 0; i < n; i++) {
    arr[i] = -arr[i];
  }

  // Apply the normal Kadane algorithm But on the elements
  // Of the array having inverted sign
  int sum_here = arr[0], max_sum = arr[0];

  for (i = 1; i < n; i++) {

    sum_here = max(sum_here + arr[i], arr[i]);
    max_sum = max(max_sum, sum_here);
  }

  // Invert the answer to get minimum val
  return (-1) * max_sum;
}

// Driver Code
int main() {
  progname();
  int arr[50], i, n, res;
  printf("enter the value of n(numeber of elemnts): ");
  scanf("%d", & n);
  printf("enter the elements");
  for (i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }

  printf("Smallest sum: ");
  res = smallestSumSubarr(arr, n);
  printf("%d", res);
  return 0;
}