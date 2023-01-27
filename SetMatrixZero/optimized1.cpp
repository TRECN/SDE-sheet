#include<bits/stdc++.h>
using namespace std;
#define ll long long


void setMatrixZero(vector<vector<int>>&arr){
    int r=arr.size(),c=arr[0].size();
    vector<int>dummy(r,-1),dummy2(c,-1);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                dummy[i]=0;
                dummy2[j]=0;
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(dummy[i]==0||dummy2[j]==0){
                arr[i][j]=0;
            }
        }
    }
}

int main()
{
    vector<vector<int>>arr;
    arr={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setMatrixZero(arr);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}