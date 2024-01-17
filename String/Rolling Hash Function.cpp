#include <bits/stdc++.h>
using namespace std;

long long compute_hash(const string& str) {
  long hash_value = 0;
  int p = 31;
  long long m = 1e9 + 9;
  long long p_pow = 1;
  for(char c: str) {
    hash_value = (hash_value + (c - 'a' + 1)*p_pow) % m;
    p_pow = (p_pow * p) % m;
  }
  return hash_value;
}

int main() {

  string s = "bbc";
  cout << compute_hash(s) << endl;


  return 0;
}