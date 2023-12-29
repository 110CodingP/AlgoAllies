#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  string s1,s2;
  cin>>s1>>s2;
  int num_plus1=0;
  int num_plus2=0;
  int num_minus1=0;
  int num_minus2=0;

  for(auto i: s1) {
    if (i=='+') {
      num_plus1++;
    }
    else if (i=='-') {
      num_minus1++;
    }
  }
  for(auto i: s1) {
    if (i=='+') {
      num_plus2++;
    }
    else if (i=='-') {
      num_minus2++;
    }
  }
  if (num_plus2>num_plus1||num_minus2>num_minus1) {
    cout<<0;
  }
  else {
    int size=s2.size();
    int unknowns=size-num_plus2-num_minus2;
    float res=pow(0.5,unknowns);
    cout<<res;
  }
  return 0;
}