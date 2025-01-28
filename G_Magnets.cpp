#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    bool ans10=false;
    bool ans01=false;
    ll count=0;
    while(t--)
    {
        ll n; cin>>n;
        if(n==10)
        {
            ans10=true;
            if(ans01==true)
            {
                count++;
                ans01=false;
            }
        }
        else
        {
            ans01=true;
            if(ans10==true)
            {
                count++;
                ans10=false;
            }
        }
    }
    cout<<count+1;
    return 0;
}