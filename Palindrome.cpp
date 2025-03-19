#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string s;  cin>>s;
     string temp = s;
     reverse(s.begin(),s.end());
     if(s == temp)
     {
        cout<<"YES";
     }
     else
     {
        cout<<"NO";
     }
     
    
    return 0;
}