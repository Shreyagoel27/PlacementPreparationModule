#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)continue;
        if(arr[i]!=i+1)
        {
            int x=arr[i];
            if(arr[x-1]==-1)return x;
            arr[i]=arr[x-1];
            arr[x-1]=-1;
            i--;
        }
        else if(arr[i]==i+1)
        {
            arr[i]=-1;
        }
    }
    return 1;
}
