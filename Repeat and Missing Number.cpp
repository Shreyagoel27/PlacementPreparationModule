#include <bits/stdc++.h> 
// 6
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int a=0,b;
    for(int i=0;i<n;i++)a+=arr[i];
	for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)continue;
        if(arr[i]!=i+1)
        {
            int x=arr[i];
            if(arr[x-1]==-1)
            {
                b=x;
                break;
            }
            arr[i]=arr[x-1];
            arr[x-1]=-1;
            i--;
        }
        else if(arr[i]==i+1)
        {
            arr[i]=-1;
        }
    }
    int sum=(n*(n+1))/2;
  //  cout<<sum<<" "<<a<<' ';
    a=sum+b-a;
    return {a,b};
    
        // 17-4 13
	    // 15
}
