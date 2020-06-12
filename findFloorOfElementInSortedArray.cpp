#include <bits/stdc++.h>
using namespace std;

int bs(int *arr, int n, int x)
{
  int start = 0;
  int end = n - 1;
  int res = INT_MIN;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
      return mid;
    else if (arr[mid] < x)
    {
      res = mid;
      start = mid + 1;
    }
    else
      end = mid - 1;
  }
  return res != INT_MIN ? res : -1;
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
    int arr[n];
    for (int &i : arr)
      cin >> i;
    cout << bs(arr, n, x) << "\n";
  }

  return 0;
}