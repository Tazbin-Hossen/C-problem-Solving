#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
        }

    }
    cout<<endl;
    return 0;
}