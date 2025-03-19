#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string str,s ; cin>>str;
     for(auto x:str)
     {
        if(x == ',')
        {
            s+=' ';
        }
        else if(isupper(x))
        {
            s+=tolower(x);
        }
        else
        {
            s+=toupper(x);
        }
     }
     cout<<s;

    return 0;
}