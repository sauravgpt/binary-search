#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> arr){
  int start = 0;
  int end = arr.size()-1;

  while(start < end){
    int mid  = start + (end - start)/2;

    if(arr[mid] == arr[end]) //Handle duplicate values
      end--;

    else if(arr[mid] > arr[end]) //Minimum element will always found on non sorted part
      start = mid + 1;
    else
      end = mid;
  }
  return end;
}

int main(){
  vector<int> arr = {5,6,7,8,9,10,1,2,3,40};
  cout << "Index of minimum element is: " << findMin(arr);
}