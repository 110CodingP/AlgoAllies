#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vect;
    // cout << vect.size() << '\n';

    // vector<int> vect2(3,-2);
    // cout << vect2.size() << '\n';

    // vect.push_back(12);
    // vect.push_back(23);
    // cout << vect.size() << '\n';
    // for (int i = 0; i < vect.size(); i++)
    // {
    //     cout << vect[i] << ' ';
    // }
    // cout << '\n';

    // for (int i = 0; i < vect2.size(); i++)
    // {
    //     cout << vect2[i] << ' ';
    // }
    // cout << '\n';
    // vect2.push_back(4);

    // // vect2.pop_back();
    // // vect2.pop_back();

    //  cout << vect2.size() << '\n';

    // // for (int i = 0; i < vect2.size(); i++)
    // // {
    // //     cout << vect2[i] << ' ';
    // // }
    //  for(auto it=vect2.begin();it!=vect2.end();it++)
    //  {
    //     cout<<*it<<' ';
    //  }
    // cout << '\n';
    // //vect2[0],
    // cout<<vect2.front()<<' '<<vect2.back()<<'\n';
    //  cout << vect2.size() << '\n';

    //     for (int i = 0; i < vect2.size(); i++)
    //     {
    //         cout << vect2[i] << ' ';
    //     }
    //     cout << '\n';
    // vector<int> vect3 = {1, 3, 5, 9, 2};
    // sort(vect3.begin(), vect3.end(),greater<int>());
    // for (int i = 0; i < vect3.size(); i++)
    // {
    //     cout << vect3[i] << ' ';
    // }
    // cout << '\n';
    // pair<int,int> p={2,3};
    // cout<<p.first<<' '<<p.second<<'\n';

    // first in first out
    // 2 1 3
    // queue<int> q;
    // q.push(3);
    // q.push(1);
    // q.push(2);
    // cout << q.front() << '\n';
    // q.pop();
    // cout << q.front() << '\n';
    // q.pop();
    // cout << q.front() << '\n'<<'\n';

    // // stack first in last out
    // //3 1 2
    // stack<int> s;
    // s.push(3);
    // s.push(1);
    // s.push(2);
    // cout<<s.top()<<' ';
    // s.pop();
    // cout<<s.top()<<' ';
    // s.pop();
    // cout<<s.top()<<' ';

    //     set<int, greater<int>> SET = {1, 3, 4, 5, 6, 3, 2, 1};
    //     for (auto i : SET)
    //     {
    //         cout << i << ' ';
    //     }
    //     cout << '\n';
    //     SET.insert(10);
    //     SET.erase(5);

    //     for (auto i : SET)
    //     {
    //         cout << i << ' ';
    //     }
    //     cout << '\n';
    //     SET.erase(SET.begin());
    //     for (auto i : SET)
    //     {
    //         cout << i << ' ';
    //     }
    //     cout << '\n';
    //    auto it= SET.upper_bound(5);

    // map<string, int> mp;
    // mp["apple"]=2;
    // mp["banana"]=4;
    // mp["lichi"]=3;
    // for(auto j:mp)
    // {
    //     cout<<j.first<<' '<<j.second<<'\n';
    // }
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int curr = 0, max_zeros_yet = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == 0)
            {
                curr++;
                max_zeros_yet=max(max_zeros_yet,curr);
            }
            else{
                curr=0;
            }
        }
        cout<<max_zeros_yet<<'\n';
    }
}
// }