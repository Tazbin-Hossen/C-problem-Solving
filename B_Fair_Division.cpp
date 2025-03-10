#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll t; cin>>t;
     while(t--)
     {
        ll n; cin>>n;
        ll one=0,two=0;
        ll oneSum=0,twoSum=0;
        vector<ll>vec;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            vec.push_back(x); 
        }
        for (ll i = 0; i < n; i++)
        {
            if(vec[i]==1)
            {
                one++;
                oneSum+=vec[i];
            }
            else
            {
                two++;
                twoSum+=vec[i];
            }
        }
        if(n%2!=0 && oneSum%2==0 && twoSum%2==0 && oneSum>0)
        {
            cout<<"YES"<<nl;
        }
        else if(n%2==0 && one%2==0 && two%2==0)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
        
     }
    return 0;
}