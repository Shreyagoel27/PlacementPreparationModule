#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int t) {
    // Write your code here.
  //    int m=mat.size(),n=mat[0].size();
        int a=0;
        int l=0,h=m;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(mat[mid][0]==t)return true;
            if(mat[mid][0]>t)h=mid;
            else{
                a=mid;
                l=mid+1;
            }
        }
        l=0;h=n;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(mat[a][mid]==t)return true;
            if(mat[a][mid]>t)h=mid;
            else{
                l=mid+1;
            }
        }
        return false;
}