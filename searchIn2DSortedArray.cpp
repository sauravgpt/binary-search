#include <bits/stdc++.h>
using namespace std;

string search(vector<vector<int>> &A, int k)
{
  int start = 0;
  int n = A.size();
  int m = A[0].size();
  int end = m - 1;

  while ((start >= 0 && start < n) && (end >= 0 && end < m))
  {
    if (A[start][end] == k)
      return "Found";
    else if (A[start][end] < k)
      start++;
    else
      end--;
  }
  return "Not Found";
}

int main()
{
  vector<vector<int>> A = {{10, 20, 30, 40},
                           {15, 25, 35, 45},
                           {27, 29, 37, 48},
                           {32, 33, 39, 50}};

  int k = 48;
  cout << search(A, k);
}