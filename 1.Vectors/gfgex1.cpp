#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  vector<int> vec;
  for(int i=0;i<5;i++) {
    vec.push_back(i);
  }
  // cout<<'\n';
  for (auto it=vec.begin(); it!=vec.end(); it++) {
    cout<<*it<<' ';
  }
  cout<<'\n';
  for (auto it=vec.rbegin();it!=vec.rend();it++){
    cout<<*it<<' ';
  }
  cout<<'\n';
  for (auto it=vec.cbegin();it!=vec.cend();it++){
    cout<<*it<<' ';
  }
  cout<<'\n';
  for (auto it=vec.crbegin();it!=vec.crend();it++){
    cout<<*it<<' ';
  }
  return 0;
}
