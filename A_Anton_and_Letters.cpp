#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     
     vector<char>v;
     char x;
     while(cin>>x)
     {
        if(x!='{'&& x!='}' && x!=','){v.push_back(x);}
     }
     sort(v.begin(),v.end());
     ll dis=unique(v.begin(),v.end())-v.begin();
     cout<<dis;
    return 0;
}