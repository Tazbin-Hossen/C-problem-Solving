#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll t; cin>>t;
     while(t--)
     {
        string str; cin>>str;
        if(str.find("010")!=-1||str.find("101")!=-1){cout<<"Good"<<endl;}
        else{cout<<"Bad"<<endl;}

     }
    return 0;
}