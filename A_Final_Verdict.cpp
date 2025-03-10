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
        long double a,b,sum=0; cin>>a>>b;
        vector<long double>vec;
        for (ll i = 0; i < a; i++)
        {
            long double x; cin>>x;
            vec.push_back(x);
        }
        for (ll i = 0; i < vec.size(); i++)
        {
            sum+=vec[i];
        }
        long double sum1=sum/a;
        if(sum1==b)
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