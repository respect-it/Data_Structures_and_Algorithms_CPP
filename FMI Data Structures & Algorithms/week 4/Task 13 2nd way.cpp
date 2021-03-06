#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

auto inp(int n)
{
    vector<int> v;
    vector<pair<int,int>> pos;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
        pos.emplace_back(t, i);
    }
    return make_pair(v, pos);
}

void chooseAt(vector<int>& v, vector<pair<int,int>>& pos, int k, int ind, int team)
{
    auto chooseHelp = [&v, &pos, team](int i){
        pos[v[i]-1].first = 0;
        v[i] = -team;
    };
    chooseHelp(ind);
    int c = 0;
    for(int i=ind-1; i>=0 && c<k; i--)
    {
        if(v[i] < 0) continue;
        chooseHelp(i);
        c++;
    }
    c = 0;
    for(int i=ind+1; i<v.size() && c<k; i++)
    {
        if(v[i] < 0) continue;
        chooseHelp(i);
        c++;
    }
}

void solve(vector<int>& v, vector<pair<int,int>>& pos, int k)
{
    int team = 1;
    for(int i=pos.size()-1; i>=0; i--)
        if(pos[i].first)
        {
        //cout << "pos[i].first: " << pos[i].first << endl;
            chooseAt(v, pos, k, pos[i].second, team);
        /*for(int x: v)
        cout << x << ' ';
        cout << endl;*/
            team ^= 3;
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    auto p = inp(n);

    sort(p.second.begin(), p.second.end());
    solve(p.first, p.second, k);

    for(int x: p.first)
        cout << -x;
    cout << endl;
}
