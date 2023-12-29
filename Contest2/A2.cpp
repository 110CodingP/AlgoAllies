#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while (t--) {
    int len;
    cin>>len;
    string s;
    cin>>s;
    int count=0;
    for (int i=1;i<len-1;i++) {
      if (s[i-1]==s[i+1]) {
        count++;
      }
    }
    cout<<len-1-count<<endl;
  }
  return 0;
}