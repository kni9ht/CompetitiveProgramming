#include<bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
    vector<pair<int,int>> tr(n,{0,0});
    for(int i = 0; i < trust.size(); i++) {
        tr[trust[i][0]].first++;
        tr[trust[i][1]].second++;
    }

    for(int i = 1; i < n; i++) {
        if(tr[i].first == 0 && tr[i].second == n - 1) {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<vector<int>> trust={{1,3},{2,3},{3,1}};
    printf("%d", findJudge(4, trust));
    return 0;
}