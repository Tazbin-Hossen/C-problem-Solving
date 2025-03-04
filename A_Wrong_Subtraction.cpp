#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    while(b--)
    {
        ll xx=a%10;
        if(xx==0){a=a/10;}
        else{a=a-1;}
    }
    cout<<a;
    return 0;
}