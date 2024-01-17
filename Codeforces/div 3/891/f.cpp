#include <bits/stdc++.h>
using namespace std;

int binary_search(int& target, vector<int>& v) {
  int l=0, h=v.size()-1;
  while(l<=h) {
    int mid = (l+h) / 2;
    if(v[mid] == target) return 1;
    if(v[mid] < target) {
      l = mid+1;
    } else h = mid-1;
  }
  return -1;
}
int find_first_occurance(int& target, vector<int>& v) {
  int l=0, h=v.size()-1, result = -1;
  while(l<=h) {
    int mid = (l+h) / 2;
    if(v[mid] == target) {
      result = mid;
      h = mid-1;
    }
    if(v[mid] < target) {
      l = mid+1;
    } else h = mid-1;
  }
  return result;
}
int find_last_occurance(int& target, vector<int>& v) {
  int l=0, h=v.size()-1, result = -1;
  while(l<=h) {
    int mid = (l+h) / 2;
    if(v[mid] == target) {
      result = mid;
      l = mid + 1;
    }
    if(v[mid] < target) {
      l = mid+1;
    } else h = mid-1;
  }
  return result;
}
int frequency(int& target, vector<int>& v) {
  int f = find_first_occurance(target, v);
  int l = find_last_occurance(target, v);
  if(f == -1 || l == -1) return 0;
  return l - f + 1;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
      cin>>v[i];
    }
    sort(v.begin(), v.end());
    int x,y,count, req;
    cin >> req;
    for(int k=0; k<req; k++) {
      cin >> x >> y;
      count = 0;
      int ai = int(x + sqrt(x*x - 4*y)) / 2;
      int aj = int(x - sqrt(x*x - 4*y)) / 2;
      int freq_ai = frequency(ai, v);
      int freq_aj = frequency(aj, v);
      cout << (freq_ai * freq_aj) << " ";
    }
    cout<<endl;
  }

  return 0;
}