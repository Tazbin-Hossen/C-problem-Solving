#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
     ll a,b,c,cnt=0; ; cin>>a>>b>>c;
     vector<ll>vec;
     for (ll i = 1; i*i<=c; i++)
     {
        if(c%i==0)
        {
            if(c%i==i){vec.push_back(i);}
            else
            {
                vec.push_back(i);
                vec.push_back(c/i);
            }
        }
     }
     for (ll i = 0; i < vec.size(); i++)
     {
        if(vec[i]>=a&&vec[i]<=b){cnt++;}
     }
     cout<<cnt;
     
    return 0;
}