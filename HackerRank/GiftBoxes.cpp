#include <bits/stdc++.h>
#include <string.h>
using namespace std;

long long compute_hash(const string& str) {
  int p = 31;
  long long p_pow = 1;
  long long m = 1e9 + 9;
  long long hash_value = 0;
  for(const char& c: str) {
    hash_value = (hash_value + (c - 'a' + 1)*p_pow) % m;
    p_pow = (p_pow*p) % m;
  }
  return hash_value;
}

int main() {
  int t, count;
  string belt, gift;
  cin >> t;
  while(t--) {
    cin>>gift>>belt;
    count = 0;
    long long hash_gift = compute_hash(gift);
    int len_belt = belt.length(), len_gift = gift.length();
    for(int i=0; i<len_belt; i++) {
      string sub = belt.substr(i, len_gift);
      long long hash_belt = compute_hash(sub);
      if((hash_belt == hash_gift) && (gift == sub)) {
        count++;
        belt = belt.substr(0, i) + belt.substr(i+len_gift); 
        len_belt = belt.length();
        i = -1;
      }
    }
    cout << count << endl;
  }


  return 0;
}