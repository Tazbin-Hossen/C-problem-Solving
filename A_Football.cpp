#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s; cin>>s;
    bool s0=true,s1=true;
    ll count0=0,count1=0;

    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            count0++;
            if(count1<7)
            {
                count1=0;
            }
            if(count1>=7)
            {
                s1=false;
                break;
            }
            else if(count1>=7 || count0>=7)
            {
                s1=false;
                s0=false;
                break;

            }
        }
        else
        {
            count1++;
            if(count0<7)
            {
                count0=0;
            }
            if(count0>=7)
            {
                s0=false;
                break;
            }
            else if(count1>=7 || count0>=7)
            {
                s1=false;
                s0=false;
                break;

            }
            
        }
    }
    if(s1==false || s0==false){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}