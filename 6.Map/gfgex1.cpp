#include <bits/stdc++.h>
using namespace std; 
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  //Creating a  map
  map<string,int> num;
  num["one"]=1;
  num["two"]=2;
  num["three"]=3;
  cout<<num.size()<<'\n';
  auto it=num.begin();
  while (it!=num.end()) {
    cout<<it->first<<' '<<it->second<<'\n';
    it++;
  }
  pair<string,int> twin("four",4);
  num.insert(twin);
  num.insert(pair<string,int>("five",5));
  cout<<num.size();
  it=num.begin();
  cout<<'\n';
  while (it!=num.end()) {
    cout<<it->first<<' '<<it->second<<'\n';
    it++;
  }
  map<string,int> speak(num);
  //Remove all elements with key upto "one"
  speak.erase(speak.begin(),speak.find("one"));
  for (auto i:speak) {
    cout<<i.first<<" "<<i.second<<"\n";
  }
  //Remove entry with key "one"
  speak.erase("one");
  for (auto i:speak) {
    cout<<i.first<<" "<<i.second<<"\n";
  }
  cout<<num.upper_bound("three")->first<<"\n"<<num.lower_bound("three")->first;
  cout<<'\n'<<speak["two"]<<'\n';
  // cout<<speak[2]; //Gives error
  if (num.count("five")) {
    cout<<num["five"];
  }
  else {
    cout<<"five is not there in count";
  }
  cout<<'\n';
  if (speak.count("five")) {
    cout<<speak["five"];
  }
  else {
    cout<<"five is not there in speak";
  }
  num.swap(speak);
  it=num.begin();
  cout<<'\n';
  while (it!=num.end()) {
    cout<<it->first<<' '<<it->second<<'\n';
    it++;
  }
  it=speak.begin();
  cout<<'\n';
  while (it!=speak.end()) {
    cout<<it->first<<' '<<it->second<<'\n';
    it++;
  }
  cout<<speak.at("one")<<'\n';
  speak.clear();
  cout<<speak.size();
  return 0;
}