#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  // //Creating a set with name sack
  // set<int> sack;
  // //For adding elements to set
  // sack.insert(4);
  // sack.insert(5);
  // //Another way of initializing set
  // set<int> sack2={2,3,4,5};
  // sack2.insert(8);
  // for(auto i:sack) {
  //   cout<<i<<' ';
  // }
  // cout<<'\n';
  // sack.insert(4);
  // //The following proves that a set stores only unique values
  // for (int i: sack) {
  //   cout<<i<<' ';
  // }
  // //Deleting element from array
  // sack.erase(4);
  // cout<<'\n';
  // for (int i: sack) {
  //   cout<<i<<' ';
  // }
  // sack.insert(2);
  // //Following proves that the elements of a set are arranged in 
  // //increasing order
  // cout<<'\n';
  // for (int i: sack) {
  //   cout<<i<<' ';
  // }
  //To create set with elements arranged in decreasing order
  set<int,greater<int>> sack3={4,5,6,7,3,4};
  cout<<'\n';
  for (int i: sack3) {
    cout<<i<<' ';
  }
  //Can also give iterators as arguments to erase and insert
  sack3.erase(sack3.begin());
  cout<<'\n';
  for (int i: sack3) {
    cout<<i<<' ';
  }
  //upper_bound is used to return iterator of element of set
  //just greater than argument
  cout<<'\n';
  auto it1=sack3.upper_bound(3);
  auto it2=sack3.upper_bound(2);
  auto it3=sack3.upper_bound(7);
  auto it4=sack3.upper_bound(5);
  cout<<*it1<<' '<<*it2<<' '<<*it3<<' '<<*it4;
  return 0;
}