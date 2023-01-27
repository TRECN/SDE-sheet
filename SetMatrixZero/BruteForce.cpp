#include<bits/stdc++.h>
using namespace std;
#define ll long long


void setMatrixZero(vector<vector<int>>&arr){
    int r=arr.size(),c=arr[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                int a=i-1;
                while(a>=0){
                    if(arr[a][j]!=0){
                        arr[a][j]=-1;
                    }
                    a--;
                }
                a=i+1;
                while(a<r){
                    if(arr[a][j]!=0){
                        arr[a][j]=-1;
                    }
                    a++;
                }
                int b=j-1;
                while(b>=0){
                    if(arr[i][b]!=0){
                        arr[i][b]=-1;
                    }
                    b--;
                }
                b=j+1;
                while(b<c){
                    if(arr[i][b]!=0){
                        arr[i][b]=-1;
                    }
                    b++;
                }


            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<=0){
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