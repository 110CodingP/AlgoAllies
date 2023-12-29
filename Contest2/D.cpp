#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while (t--) {
    int n,s,r;
    cin>>n>>s>>r;
    int a_max=s-r;
    cout<<a_max<<" ";
    int rem=r-(n-1);
    for (int i=1;i<=n-1;i++) {
       int len=1;
       if (rem) {
          len=len+ rem;
          len=min(len,a_max);
          rem=rem-(len-1);
       }
       cout<<len<<" ";
    }
    cout<<endl;
  }
  return 0;
}