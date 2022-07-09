#include <bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>v;
        v.push_back({1});
    for(int i=1;i<n;i++)
    {
        vector<long long int>x;
        x.push_back(1);
     //   cout<<1<<' ';
        for(int j=1;j<i;j++)
        {
            long long z=v[i-1][j]+v[i-1][j-1];
           // cout<<z<<' ';
            x.push_back(z);
        }
        x.push_back(1);
       // cout<<1<<endl;
        v.push_back(x);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<long long int>>v=printPascal(n);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}