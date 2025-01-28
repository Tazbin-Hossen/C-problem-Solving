#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    ll count=0;
    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else
            {
                count++;
                if(count%2!=0)
                {
                    if(j==b){cout<<"#";}
                    else{cout<<".";}
                }
                else
                {
                    if(j==1){cout<<"#";}
                    else{cout<<".";}
                }
            }
        }
        cout<<endl;
    }
    return 0;
}