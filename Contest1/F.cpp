#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  string s;
  cin>>s;
  int n=s.length();
  // cout<<s.substr(6,10);
  int num=0;
  for (int i=0;i<n-3;i++) {
    bool isBear=false;
    for (int j=i;j<n-3;j++) {
      // cout<<i;
      // if(j==6&&i==1) {
      //   cout<<"hi";
      // }
      if (isBear||s.substr(j,4)=="bear") {
        isBear=true;
        // cout<<i;
        // cout<<j<<"\n";
        num++;
      }
    }
    //cout<<i;
  }
  cout<<num<<'\n';
  return 0;
}