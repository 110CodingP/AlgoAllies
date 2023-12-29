#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  // cout<<n;
  vector<int> vec(n);
  for (int &i:vec) {
    cin>>i;
  }
  sort(vec.begin(),vec.end());
  if (vec[0]%2) {
    cout<<"yes"<<endl;
    return;
  }
  for (int i: vec) {
    if (i%2) {
      cout<<"no"<<endl;
      return;
    }
  }
  cout<<"yes"<<endl;
}
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while (t--) {
    solve();
  }
  return 0;
}