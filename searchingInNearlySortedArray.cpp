/*
Search in an almost sorted array
Given an array which is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1]. Write an efficient function to search an element in this array. Basically the element arr[i] can only be swapped with either arr[i+1] or arr[i-1].
*/

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int x, int n)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == x)
      return mid;
    else if (mid > 0 && arr[mid - 1] == x)
      return mid - 1;
    else if (mid < n && arr[mid + 1] == x)
      return mid + 1;

    else if (arr[mid] > x)
      end = mid - 2;
    else
      start = mid + 2;
  }

  return -1;
}

int main()
{

  int arr[] = {10, 3, 40, 20, 50, 80, 70};
  int key = 50;

  cout << search(arr, key, 7);

  return 0;
}
