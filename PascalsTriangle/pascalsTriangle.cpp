#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>>pascalsTriangle(int num){
    vector<vector<int>> a(num);
    for(int i=0;i<num;i++){
        a[i].resize(i+1);
        a[i][0]=a[i][i]=1;
        for(int j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    return a;
}

int main()
{
    vector<vector<int>>a;
    a=pascalsTriangle(10);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}