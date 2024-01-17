#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a;
  vector<long long> v;
  while(scanf("%lld", &a) != EOF) {
    v.push_back(a);
  }
  for(int i=v.size()-1; i>=0; i--) {
    printf("%.4lf\n", sqrt(v[i]);
  }
  return 0;
}