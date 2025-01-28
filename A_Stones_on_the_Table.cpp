#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    bool r=true,g=true,b=true;
    ll red=0,green=0,blue=0;
    vector<char>str(n);
    for(ll i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(ll i=0;i<str.size();i++)
    {
        for(ll j=i+1;j<str.size();j++)
        {
            if(str[j]=='R'&&str[i]=='R')
            {
                red++;
                g=false;
                b=false;
            }
            if(str[j]=='G'&&str[i]=='G')
            {
                green++;
                r=false;
                b=false;
            }
            if(str[j]=='B'&&str[i]=='B')
            {
                blue++;
                r=false;
                g=false;
            }

        }
    }
    return 0;
}