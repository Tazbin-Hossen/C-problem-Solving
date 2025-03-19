#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll n; cin>>n;
     ll m = n;
     string s="";
     while(n>0)
     {
        s+=(n%2);
        n = n/2;
     }
     string main_string = s;
     reverse(s.begin(),s.end());
     
     if(s == main_string and m%2!=0)
     {
        cout<<"YES";
     }
     else
     {
        cout<<"NO";
     }

    return 0;
}