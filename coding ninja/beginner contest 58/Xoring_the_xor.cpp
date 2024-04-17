

#include<bits/stdc++.h>
using namespace std;

vector<int> xoRage(vector<int> &a, vector<vector<int>> &q){
   
    int n = a.size();
    vector<int> pref(n);
    pref[0] = a[0];
    pref[1] = a[1];
    for(int i=2; i<n; i++){
        pref[i] = pref[i-2]^a[i];
    }

    int m = q.size();
    vector<int> ans(m, 0);
    
    for(int i=0; i<m; i++){

        int l = q[i][0]-1;
        int r = q[i][1]-1;
        int len = r-l+1;
        if(len%2 == 1){
            ans[i] = pref[r];
            if(l-2>=0){
                ans[i]^=pref[l-2];
            }
        }

        
    }
    return ans;


   
}