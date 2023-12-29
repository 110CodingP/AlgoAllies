#include <bits/stdc++.h>
using namespace std;
void solve() {
  int N,Q;
  cin>>N>>Q;
  vector<int> prefix1(N+1);
  vector<int> prefix2(N+1);
  vector<int> prefix3(N+1);
  int i=0;
  while (N--) {
    prefix1[i+1]=prefix1[i];
    prefix2[i+1]=prefix2[i];
    prefix3[i+1]=prefix3[i];
    
    int type;
    cin>>type;
    if (type==1) {prefix1[i+1]++;}
    else if (type==2) {prefix2[i+1]++;}
    else {prefix3[i+1]++;}
    i++;
  }
  // int n1=prefix1.size();
  // cout<<n1;
  while (Q--) {
    int l,r;
    cin>>l>>r;
    cout<<(prefix1[r]-prefix1[l-1])<<' '<<(prefix2[r]-prefix2[l-1]);
    cout<<' '<<(prefix3[r]-prefix3[l-1])<<endl;
  }
  return;
}
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  solve();
  return 0;
}
