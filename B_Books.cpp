#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n1=60,n2=24;
     ll temp1=n1,temp2=n2;
     while(n2!=0)
     {
        ll rem=n1%n2;
        n1=n2;
        n2=rem;
     }
     cout<<n1<<nl;
     ll lcmm=(temp1*temp2)/n1;
     cout<<lcmm;
    return 0;
}