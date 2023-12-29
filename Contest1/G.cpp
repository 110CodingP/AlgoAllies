#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int k,a,b;
  cin>>k>>a>>b;
  string s;
  cin>>s;
  int n=s.length();
  // cout<<s
  // cout<<letter;
  if (k*a>n||k*b<n) {
    cout<<"No solution";
  }
  else {
    int rem= n-k*a;
    int idx=0;
    //This loop controls the number of lines
    //Not a correct solution see discord 
    //contest-1 discussion to know correct 
    //solution
    for (int i=0;i<k;i++) {
       int len=a;
       if (rem) {
          len=len+ rem%k + rem/k;
          rem-=rem%k;
       }
       while (len--) {
          cout<<s[idx];
          idx++;
       }
       cout<<'\n';
    }
  }
  return 0;
}