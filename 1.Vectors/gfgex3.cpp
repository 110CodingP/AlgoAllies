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
  cout<<vec.at(3)<<'\n';
  cout<<vec.front()<<'\n';
  cout<<vec.back();
  cout<<'\n'<<*(vec.data()+3);
  return 0;
}
