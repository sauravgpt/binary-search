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
    else if ((mid == 0 && A[mid + 1] < A[mid]) || (mid == A.size() - 1 && A[mid - 1] < A[mid]))
      return mid;
  }
  return -1;
}

int main()
{
  vector<int> A = {1, 3, 5, 7, 8, 8, 9, 10};
  cout << peak(A);
}