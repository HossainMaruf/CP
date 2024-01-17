#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  int max = INT_MIN;
  cin >> t;
  while (t--)
  {
    cin >> n;
    vector<int> a(n), b, c;
    // TAKING INPUT
    for(int i=0; i<n; i++) {
      cin >> a[i];
      max = max < a[i] ? a[i] : max;
    }

    for (int i = 0; i < n; i++)
    {
      if (a[i] == max)
      {
        c.push_back(a[i]);
      }
      else
      {
        b.push_back(a[i]);
      }
    }
    if (b.size() == 0)
      cout << -1 << endl;
    else
    {
      cout << b.size() << " " << c.size() << endl;
      for (int i = 0; i < b.size(); i++)
      {
        cout << b[i] << " ";
      }
      cout << endl;
      for (int i = 0; i < c.size(); i++)
      {
        cout << c[i] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}