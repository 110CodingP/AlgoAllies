#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    // cout<<n;
    vector<int> vec;
    for (int i=0;i<n;i++) {
      int element;
      cin>>element;
      vec.push_back(element);
    }
    int n_eve=0;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++) {
      if (vec[i]%2==0) {
        n_eve++;
      }
    }
    if (n_eve==n) {
      cout<<"yes"<<'\n';
    }
    else if (n_eve==0) {
      // cout<<"Hello";
      cout<<"yes"<<'\n';
    }
    else {
      // cout<<"H...";
      int flag=0;
      int i=0;
      int eve_small;
      while(!flag) {
        if (vec[i]%2==0) {
          eve_small=vec[i];
          flag=1;
        }
        i++;
      }
      flag=0;
      i=0;
      int odd_small;
      while(!flag) {
        if (vec[i]%2==1) {
          odd_small=vec[i];
          flag=1;
        }
        i++;
      }
      if (eve_small>odd_small) {
        cout<<"yes"<<'\n';
      }
      else {
        cout<<"no"<<'\n';
      }
  }
  }
  return 0;
}