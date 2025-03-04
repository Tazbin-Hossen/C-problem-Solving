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
        if(str.length()>10){cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;}
        else{cout<<str<<endl;}
    }
    return 0;
}