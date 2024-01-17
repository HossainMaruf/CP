#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, count = 0;
  string str;
  cin >> t;
  while(t--) {
    cin >> str;
    int len = str.length();
    bool got = true;
    int i = 1;
    for(i=1; i<=len; i++) {
      if(len%i !=0) continue;
      for(int j=i; j<len; j++) {
        if(str[j] != str[j%i]) {
          got = false;
          break;
        }
      }
      if(got) break;
      got = true;
    }
    cout << i << endl;
    if(t) cout << endl;
  }
  return 0;
}