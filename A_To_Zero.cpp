#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize()
     ll t; cin>>t;
     while(t--)
     {
        ll a,b,count=0;
        cin>>a>>b;
        if(a%2==0 and b%2==0)
        {
            count+=(a/b);
            if(a%b>0 and a%b<=b)
            {
                count++;
            }
        }
        else if (a%2!=0 and b%2!=0)
        {
            a = a-b;
            count+=1;
            count+=(a/(b-1));
            a = a-((b-1)*(count-1));
            if(a%b>0 and a%b<=b)
            {
                count+=1;
            }
        }
        else if (a%2==0 and b%2!=0)
        {
            count+=(a/(b-1));
            if(a%(b-1)>0  and a%(b-1)<=b)
            {
                count++;
            }
        }
        else
        {
             a = a-(b-1);
             count+=1;
             count+=(a/(b-1));
             a = a-((b-1)*(count-1));
             if(a%(b-1)>0 and a%(b-1)<=b)
             {
                count++;
             }
        }
        cout<<count<<nl;
     }
    return 0;
}