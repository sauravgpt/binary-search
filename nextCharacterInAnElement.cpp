#include <bits/stdc++.h>
using namespace std;

int bs(char *arr, int n, int x)
{
  int start = 0;
  int end = n - 1;
  int res;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
      start = mid + 1;
    else if (arr[mid] < x)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
      res = mid;
    }
  }
  return res;
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
    char arr[n];
    for (char &i : arr)
      cin >> i;
    cout << bs(arr, n, x) << "\n";
  }
  return 0;
}