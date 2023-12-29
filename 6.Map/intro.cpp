#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  //Creating a  map
  map<string,int> dict;
  dict["age"]=15;
  dict["rollno."]=10;
  dict["happy"]=1;
  for (auto i:dict) {
    cout<<i.first<<' '<<i.second<<'\n';
  }
  return 0;
}