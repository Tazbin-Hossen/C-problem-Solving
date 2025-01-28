#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n,m;
       ll sum=0;
    while( cin>>n>>m)
    {
        if(m<=0 or n<=0){break;}
        for(ll i=min(n,m);i<=max(n,m);i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
        sum=0;
    }
    return 0;
}