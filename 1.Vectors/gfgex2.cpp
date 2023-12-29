#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  vector<int> vec;
  for(int i=0;i<5;i++) {
    vec.push_back(i);}
  cout<<vec.size();
  cout<<'\n';
  cout<<vec.capacity();
  cout<<'\n';
  cout<<vec.max_size();
  vec.resize(10);
  cout<<'\n';
  cout<<vec.size();
  cout<<'\n';
  cout<<vec.empty();
  cout<<'\n';
  vec.shrink_to_fit();
  for(auto i:vec) {
    cout<<i<<' ';
  }
  return 0;
}
