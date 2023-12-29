#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  vector<int> vec;
  for(int i=0;i<10;i++) {
    vec.push_back(i);
  }
  cout<<vec.size()<<'\n';
  vec.assign(3,2);//Even size changes after this
  for (int i:vec) {
    cout<<i<<' ';
  }
  cout<<'\n'<<vec.size();
  vec.insert(vec.begin(),12);
  cout<<'\n';
  for(int i:vec) {
    cout<<i<<' ';
  }
  vec.insert(vec.begin()+3,34);
  cout<<'\n';
  for(int i:vec) {
    cout<<i<<' ';
  }
  vec.erase(vec.begin()+3);
  cout<<'\n';
  for(int i:vec) {
    cout<<i<<' ';
  }
  vec.emplace(vec.begin()+3,34);
  cout<<'\n';
  for(int i:vec) {
    cout<<i<<' ';
  }
  vec.emplace_back(3);
  cout<<'\n';
  for(int i:vec) {
    cout<<i<<' ';
  }
  vec.clear();
  cout<<'\n';
  for(int i:vec) {
    cout<<i<<' ';
  }
  cout<<'\n';
  bool isEmpty=vec.empty();
  cout<<isEmpty;
  return 0;
}
