#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  int t;
  cin>>t;
  while(t--) {
  //   int n;
  //   int k;
  //   cin>>n;
  //   cin>>k;
  //   vector<pair <int,int> > vec;
  //   for (int i=0;i<n;i++) {
  //     int element;
  //     cin>>element;
  //     pair<int,int> p;
  //     p.first=element;
  //     p.second=i;
  //     vec.push_back(p);
  //   }
  //   vector<int> vec2;
  //   for (int i=0;i<n;i++) {
  //     int element;
  //     cin>>element;
  //     vec2.push_back(element);
  //   }
  //   sort(vec.begin(),vec.end());
  //   sort(vec2.begin(),vec2.end()); 
  //   vector<int> vec3(n);
  //   for (int i=0;i<n;i++) {
  //     vec3[vec[i].second]=vec2[i];
  //   }
  //   for (int i:vec3) {
  //     cout<<i<<' ';
  //   }
  int n;
  cin>>n;
  // cout<<n<<',';
  string s;
  cin>>s;
  // cout<<s;
  set<string> melody;
  for (int i=0;i<n-1;i+=1) {
    melody.insert(s.substr(i,1)+s.substr(i+1,1));
  }
  cout<<melody.size()<<'\n';
  }

  return 0;
}