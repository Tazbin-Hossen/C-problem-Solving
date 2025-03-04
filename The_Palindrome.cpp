#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n; cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        string temp=str;
        reverse(str.begin(),str.end());
        if(temp==str){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    return 0;
}