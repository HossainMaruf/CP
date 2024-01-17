#include <bits/stdc++.h>
using namespace std;


int main() {
  int arr[] = {2, 6, 6, 16, 19, 43};
  int len = sizeof(arr) / sizeof(arr[0]);
  int item = 16;
  auto itr = upper_bound(arr, arr+len, item);
  
  if(itr != &arr[len]) {
    cout << (itr - arr) << endl;
  } else {
    cout << "Not Found" << endl;
  }


  return 0;
}