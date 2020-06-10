#include <iostream>
#include <vector>
using namespace std;

int last(vector<int> &arr, int n, int x)
{
  int res = -1;
  int start = 0, end = n - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
    {
      res = mid;
      start = mid + 1;
    }
    else if (arr[mid] > x)
      end = mid - 1;
    else
      start = mid + 1;
  }
  return res;
}

int first(vector<int> &arr, int n, int x)
{
  int res = -1;
  int start = 0, end = n - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
    {
      res = mid;
      end = mid - 1;
    }
    else if (arr[mid] > x)
      end = mid - 1;
    else
      start = mid + 1;
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
    int n;
    cin >> n;
    vector<int> arr(n);
    int x;
    cin >> x;
    for (int &i : arr)
      cin >> i;

    cout << first(arr, n, x) << " " << last(arr, n, x) << "\n";
  }
  return 0;
}