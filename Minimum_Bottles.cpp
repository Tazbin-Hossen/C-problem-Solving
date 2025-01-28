#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll bottle,capacity;
        cin>>bottle>>capacity;
        vector<ll>vec; ll count=0; ll sum=0; ll isum=0;
        for(ll m=0;m<bottle;m++)
        {
            ll x; cin>>x;
            vec.push_back(x);
        }
        for(ll i=0;i<vec.size();i++)
        {
            if(vec[i]==capacity){count++;}
            else
            {
                for(ll j=i+1;j<vec.size();j++)
                {
                    sum=vec[i]+vec[j];
                    if(sum==capacity)
                    {
                        count++;
                        break;
                    }
                }
            }
            isum+=vec[i];
            if(isum<capacity)
            {
                count++;
                break;   
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}