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
  queue<int> q2;
  for (int i=0;i<3;i++) {
    q2.push(i+1);
  }
  q1.swap(q2);
  showq(q1);
  cout<<"Hi\n";
  showq(q2);
  return 0;
}