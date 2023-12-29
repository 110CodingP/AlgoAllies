#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while(t--) {
    int len;
    cin>>len;
    vector<long long int> vec;
    for(int i=0;i<len;i++) {
      long long int element;
      cin>>element;
      vec.push_back(element);
    }
    sort(vec.begin(),vec.end());
    long long int max_prod=max(vec[0]*vec[1],vec[len-1]*vec[len-2]);
    // for (int i=0;i<len;i++) {
    //   if (vec[i]==0) continue;
    //   int curr_prod=vec[i];
    //   if (i+1<len) {
    //     if (vec[i+1]!=0) {
    //       curr_prod*=vec[i+1];
    //       if (curr_prod>max_prod) {
    //         max_prod=curr_prod;
    //       }
    //     }
    //     else  {
    //       if (i+2<len) {
    //         if (vec[i+2]!=0) {
    //         curr_prod*=vec[i+2];
    //         if (curr_prod>max_prod) {
    //           max_prod=curr_prod;
    //         }
    //         }
    //       }
    //     }
    //   }
    // }
  cout<<max_prod<<'\n';
  }

  return 0;
}