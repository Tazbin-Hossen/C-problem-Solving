#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int sum_of_digits(int n)
{
    ll sum = 0 ;
    while(n>0)
    {
        sum+= n%10;
        n = n/10;
    }
    return sum;
}

int main()
{
    optimize()
    char s[100005]; cin>>s;
    ll ans =0, digit_sum = 0;
    if(strlen(s)==1)
    {
        cout<<0<<nl;
        return 0;
    }
    for(ll i = 0;i<strlen(s);i++)
    {
        digit_sum+= s[i]-'0';
    }
    ans++;
    ll n = digit_sum;
     while(n>9)
     {
        n = sum_of_digits(n);
        ans++;
     }
     cout<<ans<<nl;
    return 0;
}