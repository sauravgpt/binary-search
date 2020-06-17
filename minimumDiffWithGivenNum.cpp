/*

Input
ARR: 1, 3, 5, 8, 10, 15
KEY: 12
ANS: 10

Algo at end of BS low points to floor of key and 
high points to ceil of key if key is not present
else both points to key

*/

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> A, int K)
{
  int low = 0;
  int high = A.size() - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (A[mid] == K)
      return A[mid];

    else if (A[mid] < K)
      low = mid + 1;
    else
      high = mid - 1;
  }

  if(K - A[high] <= A[low] - K)
    return A[high];

  return A[low];

}

int main(){
  vector<int> A = {1,3,5,7,9,15};
  cout << BinarySearch(A, 12);
}