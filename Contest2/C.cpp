//Finding longest subarray with sum less than equal to t
#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);

  int n,t;
  cin>>n>>t;
  vector<int> vec(n); 
  for (auto &i:vec) {
    cin>>i;
  }
  vector<int> longest_subarr(n);
  int longest_sum=0;
  if (vec[0]<=t) {
    longest_subarr[0]=1;
    longest_sum=vec[0];
    }
  for (int i=1;i<n;i++) {
      if (vec[i]+sum<=t) {
        longest_subarr[i]=longest_subarr[i-1]+1;
        sum+=vec[i];
      }
      else {
        longest_subarr[i]=longest_subarr[i-1];
        sum+=
      }
  }
  return 0;
}