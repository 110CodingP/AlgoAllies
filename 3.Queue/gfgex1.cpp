#include <bits/stdc++.h>
using namespace std;
void showq(queue<int> q) {
  queue<int> line=q;
  while (!line.empty()) {
    cout<<line.front()<<'\n';
    line.pop();
  }
}
void seeq(queue<int> line) {
  while (!line.empty()) {
    cout<<line.front()<<'\n';
    line.pop();
  }
}
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  queue<int> q1;
  for (int i=0;i<2;i++) {
    q1.push(i);
  }
  cout<<q1.size()<<'\n';
  showq(q1);
  cout<<"Hi\n";
  // // The following shows that queue is 
  // // preserved
  // while (!q1.empty()) {
  //   cout<<q1.front()<<'\n';
  //   q1.pop();
  // }
  // seeq(q1);
  // cout<<"smile\n";
  // //The following shows that queue is 
  // //preserved
  // while (!q1.empty()) {
  //   cout<<q1.front()<<'\n';
  //   q1.pop();
  // }
  return 0;
}