#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll a,b; char ch;cin>>a>>ch>>b;
     if(ch=='+'){cout<<a+b;}
     else if(ch=='-'){cout<<a-b;}
     else if(ch=='*'){cout<<a*b;}
     else{cout<<a/b;}
    return 0;
}