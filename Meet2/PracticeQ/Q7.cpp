#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
    int n;
    cin>>n;
    vector<long long> arr(n);
    for (auto &i: arr) {
        cin>>i;
    }
    vector<long long> prefix(n+1);
    for (int i=0;i<n;i++) {
        prefix[i+1]=prefix[i]+arr[i];
    }
    prefix.erase(prefix.begin());
    for (auto i: prefix) {
        cout<<i<<' ';
    }
    cout<<endl;
    unordered_map<int,int> ct;
    vector<int> same_pre(n+1);
    for (int i=n-1;i>=0;i--) {
      ct[prefix[i]]++;
      if (ct[prefix[i]]>1) {
        same_pre[i]=same_pre[i+1] +1;
      }
      else {
        same_pre[i]=same_pre[i+1];
      }
    }
    for (auto i: same_pre) {
        cout<<i<<' ';
    }
    cout<<endl;
    int count=0;
    for (int i=0;i<n;i++) {
            if (same_pre[i]!=same_pre[i+1]) {
                count++;
            }
    }
    cout<<count;
    
    return 0;
}