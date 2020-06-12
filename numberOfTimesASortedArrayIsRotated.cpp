#include <bits/stdc++.h>
using namespace std;

int Find(vector<int> &arr)
{
  int start = 0;
  int end = arr.size() - 1;
  int N = arr.size();
  int res = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    int left = (mid + N - 1) % N;
    int right = (N + 1) % N;

    if (arr[mid] <= arr[mid - 1] && arr[mid] <= arr[mid + 1])
      return res = mid;

    else if (arr[start] <= arr[mid])
      start = mid + 1;
    else if (arr[mid] <= arr[end])
      end = mid - 1;
  }
  return res;
}

int main()
{


}