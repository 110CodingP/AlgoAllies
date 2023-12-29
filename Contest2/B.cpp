#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int n;
  cin>>n;
  vector<long> prefix(n+1);
  for (int i=0;i<n;i++) {
    int ele;
    cin>>ele;
    prefix[i+1]=prefix[i] +ele;
  }
  int count=0;
  for (int i=0;i<n-1;i++) {
    if (prefix[i+1]==(prefix[n]-prefix[i+1])){
      count++;
    }
  }
  cout<<count;
  return 0;
}