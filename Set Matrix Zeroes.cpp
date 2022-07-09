#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &mat)
{
	int n=mat.size();
    int m=mat[0].size();
     vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0)v.push_back({i,j});
        }
    }
     for(int i=0;i<v.size();i++)
    {
        int x=v[i][0];
        int y=v[i][1];
         for(int j=0;j<x;j++)mat[j][y]=0;
         for(int j=x;j<n;j++)mat[j][y]=0;
         for(int j=0;j<y;j++)mat[x][j]=0;
         for(int j=y;j<m;j++)mat[x][j]=0;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    setZeros(v);
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<' ';
        }
        cout<<endl;
    }
    
}