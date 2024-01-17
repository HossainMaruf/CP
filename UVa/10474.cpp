#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,q, test=1;
  while(1) {
    cin>>n>>q;
    if(n == 0 && q == 0) return 0;
    int arr[n], query[q];
    for(int i=0; i<n; i++) {
      cin>>arr[i];
    }
    sort(arr, arr+n);
    int value;
    cout << "CASE# " << test++ << ":\n";
    for(int i=0; i<q; i++) {
      cin>>value;
      auto itr = lower_bound(arr, arr+n, value);
      if(itr != (arr+n) && *itr == value) {
        printf("%d found at %d\n", value, (itr-arr+1));
      } else {
        printf("%d not found\n", value);
      }
    }
  }

  return 0;
}