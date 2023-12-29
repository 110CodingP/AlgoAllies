#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  //Creating a set with name sack
  set<int> sack;
  //For adding elements to set
  sack.insert(4);
  sack.insert(5);
  //Copying sack into sack2
  set<int> sack2(sack.begin(),sack.end());
  for (int i: sack2) {
    cout<<i<<' ';
  }
  for (int i=0;i<=10;i++) {
    sack2.insert(i);
  }
  //Removing elements less than 9
  sack2.erase(sack2.begin(),sack2.find(9));
  // cout<<"\n"<<sack2.size()<<"\n";
  cout<<"\n";
  for (int i:sack2) {
    cout<<i<<' ';
  }
  cout<<"\n"<<*sack2.lower_bound(*sack2.begin())<<"\n"<<*sack2.upper_bound(*sack2.begin());
  return 0;
}