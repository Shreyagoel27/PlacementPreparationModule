#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &v, int n)
{
    //  Write your code here.
    int x=-1;
    for(int i=n-1;i>=1;i--)
    {
        if(v[i-1]<v[i])
        {
            x=i-1;
            break;
        }
    }
    if(x==-1){
        sort(v.begin(),v.end());
        return v;
    }
    int m=x+1;
    for(int i=x+1;i<n;i++)
    {
        if(v[m]>v[i] && v[i]>v[x])m=i;
    }
    int a=v[x];
    v[x]=v[m];
    v[m]=a;
    sort(v.begin()+x+1,v.end());
    
    return v;
}
// 6 5 3 7 2 4 3 1
// 6 5 3 7 3 1 2 4
// 6 5 3 7 4 1 2 3
// 6 5 3 4 0 1 2 4