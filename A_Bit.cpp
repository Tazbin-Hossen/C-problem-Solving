#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll ans=0;
    while(n--)
    {
        string s; cin>>s;
        if(s=="X++" || s=="++X" )
        {
            ans+=1;
        }
        else
        {
            ans-=1;
        }
    }
    cout<<ans;

    return 0;
}