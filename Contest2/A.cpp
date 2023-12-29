#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while (t--) {
    int len;
    cin>>len;
    string s;
    cin>>s;
    int count=0;
    vector<string> str_vec;
    for (int i=0;i<len-1;i++) {
      string str = {s.substr(0,i)+s.substr(i+2,len-i-2)};
      str_vec.push_back(str);
    }
    map<string ,int> ct;
    for (auto str:str_vec) {
          ct[str]++;
    }
    for (auto pr:ct) {
      if (pr.second>0) {
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}