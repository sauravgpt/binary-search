#include <bits/stdc++.h>
using namespace std;

/*

BITONIC ARRAY: Monotonic increasing then monotonic decreasing
A: 1, 3, 8, 12, 4, 2

*/

int maxElement(vector<int> &A)
{
  int low = 0;
  int high = A.size() - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (mid > 0 && mid < A.size() - 1)
    {
      if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1])
        return A[mid];
      else if (A[mid] < A[mid - 1])
        high = mid - 1;
      else
        low = mid + 1;
    }
    else if ((mid == 0 && A[mid + 1] < A[mid]) ||
     (mid == A.size() - 1 && A[mid - 1] < A[mid]))
      return A[mid];
  }
  return -1;
}

int main()
{
  vector<int> A = {1,
                   3,
                   8,
                   12,
                   4,
                   2};

  cout << maxElement(A);
}