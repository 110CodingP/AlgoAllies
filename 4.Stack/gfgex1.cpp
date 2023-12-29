#include <bits/stdc++.h>
using namespace std;
void show_stack(stack<int> s) {
  while (!s.empty()) {
     cout<<s.top()<<' ';
     s.pop();
  }
}
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  stack<int> tower;
  tower.push(2);
  tower.push(3);
  tower.push(4);
  
  stack<int> column;
  for (int i=0;i<10;i++) {
    column.push(i);
  }
  tower.swap(column);
  show_stack(tower);
  cout<<"Hi\n";
  show_stack(column);
  return 0;
}