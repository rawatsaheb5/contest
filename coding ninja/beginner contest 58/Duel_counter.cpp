

#include <bits/stdc++.h>
using namespace std;

long long countDuels(int n, vector<int> a) {
    // Write your code here.

    unordered_map<int ,int> mp;
    long long ans =0;
    for(auto it: a){
        int cnt = mp[-it];
        ans+=cnt;
        mp[it]++;
    }
    
    return ans;
}
