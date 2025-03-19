#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string str ;
     ll count = INT_MIN,ans=0;
     cin>> str;
     for (ll i = 1; i < str.length(); i++)
     {
        if(str[i-1]==str[i])
        {
            ans++;
            if(ans>=count)
            {
                count = ans;
            }
        }  
        else
        {
            ans = 0;
        }   
     }
     if(count>0)
     {
        cout<<count +1;
     }
     else
     {
        cout<<1;
     }
     
    return 0;
}