#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll a,b,sum=0;
    while(cin>>a>>b)
    {
       if(a<=0||b<=0){break;}
       else{
        for(ll i=min(a,b);i<=max(a,b);i++)
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
        sum=0;
       }
    }
    return 0;
}