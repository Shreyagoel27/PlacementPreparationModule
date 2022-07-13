#include <bits/stdc++.h>
 using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &t)
{
    sort(t.begin(),t.end());
    vector<vector<int>>v;
    int i=0,j=0;
    v.push_back(t[0]);
    for(int i=1;i<t.size();i++)
    {
        if(v[j][1]>=t[i][0])
        {
            v[j][1]=max(v[j][1],t[i][1]);
        }
        else {
            v.push_back(t[i]);
            j++;
        }
    }
    return v;
}
int main()
{
    vector<vector<int>>v={{1,3},{3,4},{5,9}};
    v=mergeIntervals(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i][0]<<' '<<v[i][1]<<endl;
    }
    return 0;
}