/*
Number of occurrence 
Given a sorted array A of size N and a number X, you need to find the number of occurrences of X in A.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input: The first line contains N and X(element whose occurrence needs to be counted). The second line contains the elements of the array separated by spaces.

Output:
For each testcase, print the count of the occurrences of X in the array, if count is zero then print -1.

Example:
Input:
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
Output:
4
-1
*/

#include <bits/stdc++.h>
using namespace std;

int last(vector<int> &arr, int n, int x)
{
  int start = 0;
  int end = n - 1;

  int res = -1;

  while (start <= end)
  {

    int mid = start + (end - start) / 2;

    if (arr[mid] == x)
    {
      res = mid;
      start = mid + 1;
    }
    else if (x < arr[mid])
      end = mid - 1;
    else
      start = mid + 1;
  }
  return start;
}

int first(vector<int> &arr, int n, int x)
{
  int start = 0;
  int end = n - 1;

  int res = -1;

  while (start <= end)
  {

    int mid = start + (end - start) / 2;

    if (arr[mid] == x)
    {
      res = mid;
      end = mid - 1;
    }
    else if (x < arr[mid])
      end = mid - 1;
    else
      start = mid + 1;
  }
  return start;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int &i : arr)
      cin >> i;

    int rs = last(arr, n, x) - first(arr, n, x);
    rs != 0 ? cout << rs : cout << -1;
    cout << "\n";
  }

  return 0;
}