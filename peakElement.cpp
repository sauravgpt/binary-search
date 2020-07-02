#include <bits/stdc++.h>
using namespace std;

/*
PEAK ELEMENT: Element which is greater from both neighbour
*/

int peak(vector<int> &A)
{ // Return index of peak element
  int start = 0;
  int end = A.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (mid > 0 && mid < A.size() - 1)
    {
      if (A[mid - 1] < A[mid] && A[mid + 1] < A[mid])
        return mid;

      else if (A[mid - 1] > A[mid])
        end = mid - 1;
      else
        start = mid + 1;
    }
    if (mid == 0)
    {
      if (A[mid] > A[mid + 1])
        return mid;
      else
        start = mid + 1;
    }
    if (mid == n - 1)
    {
      if (A[mid] > A[mid - 1])
        return mid;
      else
        end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> A = {2, 4};
  cout << peak(A);
}