#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b;
     cin>>a>>b;
     if(b>a)
     {
        cout<<b-a+1;
     }
     else
     {
        cout<<0;
     }
    return 0;
}