#include <bits/stdc++.h>
using namespace std;
int main() {
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
  cout<<max_prod<<'\n';
  }
 
  return 0;
}