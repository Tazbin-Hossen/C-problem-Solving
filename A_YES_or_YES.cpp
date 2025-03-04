#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    ll count=0;
    while(t--)
    {
        string str; cin>>str;
        if(str[0]=='Y'||str[0]=='y'){count++;}
        if(str[1]=='E'||str[1]=='e'){count++;}
        if(str[2]=='S'||str[2]=='s'){count++;}
        if(count==3){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        count=0;
    }
    return 0;
}