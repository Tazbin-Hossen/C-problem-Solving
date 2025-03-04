#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    int n,cnt=0; cin>>n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        vec.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if(vec[i]==4||sqrt(vec[i])>10){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}