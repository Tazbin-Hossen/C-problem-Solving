#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     long double a,b;
     cin>>a>>b;
     long double x= (100*(a-b))/a;
     cout<<fixed<<setprecision(10)<<x;

    return 0;
}