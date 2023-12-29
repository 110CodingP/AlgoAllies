#include <bits/stdc++.h>
using namespace std;
int luck(int n) {
  vector<int> v;
  while (n) {
    v.push_back(n%10);
    n/=10;
  }
  // for (int i: v) {
  //   cout<<i;
  // }
  sort(v.begin(),v.end());
  // for (int i: v) {
  //   cout<<i;
  // }
  return *(v.end()-1)-*(v.begin());
}
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while(t--) {
    int l,r;
    cin>>l;
    cin>>r;
    int max_luck=l;
    for (int i=l;i<=r;i++) {
     if(luck(i)==9) {
      max_luck=i;
      break;
     }
     else {
      if (luck(i)>luck(max_luck)) {
        max_luck=i;
      }
     }
    }
    // cout<<luck(59)<<' '<<luck(60);
    cout<<max_luck<<'\n';

  }
  // cout<<luck(59);
  return 0;
}