#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     string s1,s2; cin>>s1>>s2;
     cout<<s1.length()<<" "<<s2.length()<<nl;
     cout<<s1+s2<<nl;
     swap(s1[0],s2[0]);
     cout<<s1<<" "<<s2;
    return 0;
}