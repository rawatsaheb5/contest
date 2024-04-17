

#include <bits/stdc++.h>
using namespace std;



int maximumBooks(int n, vector<int> &v) {

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == 0 || v[i] == 1 || v[i] == 2) {
      continue;
    }
    ans += v[i] - 2;
    v[i] = 2;
  }
  for (int i = 0; i < n; i++) {
    if (v[i] == 0 || v[i] == 1) {
      return -1;
    }
  }
  return ans;
}