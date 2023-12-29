#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while(t--) {
    int len;
    cin>>len;
    // cout<<len;
    vector<char> vec;
    for (int i=0;i<len;i++) {
      char ch;
      cin>>ch;
      vec.push_back(ch);
    }
    // for (auto i:vec) {
    //   cout<<i;
    // }
    vector< pair<char,char> > vec2(len-1);
    for (int i=0;i<len-1;i++) {
      vec2[i].first=vec[i];
      vec2[i].second=vec[i+1];
    }
    // for (auto i:vec2) {
    //   cout<<i.first<<' '<<i.second<<' ';
    // }
    int pairs=len-1;
    // cout<<pairs;
    for (auto i=vec2.begin();i!=vec2.end();i++) {
      for(auto j=i+1;j!=vec2.end();j++) {
        if (*i==*j) {
          pairs--;
          break;
        }
      }
      
    }
    cout<<pairs<<"\n";
  }

  return 0;
}