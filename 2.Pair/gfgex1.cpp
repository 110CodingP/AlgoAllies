#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  pair<int,int> num;
  num.first=2;
  num.second=2;
  cout<<num.first<<' '<<num.second;

  pair<string,int> age("Zvarv",15);
  cout<<'\n';
  cout<<age.first<<' '<<age.second;
  cout<<'\n';
  pair<int,int> p;
  cout<<p.first<<' '<<p.second;

  pair<string,int> boolean = make_pair("yes",1);
  cout<<'\n';
  cout<<boolean.first<<' '<<boolean.second;
  age.swap(boolean);
  cout<<'\n';
  cout<<age.first<<' '<<age.second;
  cout<<'\n';
  cout<<boolean.first<<' '<<boolean.second;
  cout<<'\n';
  pair<string,int> happy(age);
  cout<<happy.first<<' '<<happy.second;
  // Can't do the following
  happy.first="hello";
  happy.second=2;
  cout<<'\n';
  cout<<happy.first<<' '<<happy.second;
  age.first="ShinChan";
  age.second=5;
  return 0;
}