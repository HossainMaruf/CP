#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = {5,-10,6,-2,4,-10,1};
  int len = sizeof(arr) / sizeof(arr[0]);
  int sum[len];
  sum[0] = arr[0];
  int min = INT_MAX, max = -1;
  for(int i=1; i<len; i++) {
    sum[i] = arr[i] + sum[i-1];
    // if(sum[i-1] < min) min = sum[i-1];
    // if((sum[i] - min) > max) max = sum[i] - min;
  }
  for(int i=0; i<len; i++) {
    for(int j=i; j<len; j++) {
      
    }
  }
  // for(int i=0; i<len; i++) {
  //   cout << sum[i] << " ";
  // }

  // cout << endl << "Max: " << max << endl;

  return 0;
}