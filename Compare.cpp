#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string s1,s2; cin>>s1>>s2;
     ll x = s1.length(), y = s2.length();
     ll len = max(x,y);
     for( ll i = 0; i < len; i++)
     {
        if(s1[i]<s2[i])
        {
            cout<<s1;
            break;
        }
        if(s2[i]<s1[i])
        {
            cout<<s2;
            break;
        }
     }

     

    return 0;
}