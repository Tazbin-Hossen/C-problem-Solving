#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b,total=0; cin>>a>>b;
     for (ll i = 1; i <= 10; i++)
     {
        ll price=a*i;
        if((price%10==b)&&price%10!=0) { total=i;break;}
        else if(price%10==0){ total=i;break;}
     }
     cout<<total;
     
    return 0;
}