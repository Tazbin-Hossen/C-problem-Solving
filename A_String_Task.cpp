#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    string str,ans;
    cin>>str;
    for(auto u:str)
    {
        char c=tolower(u);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
        {
            continue;
        }
        else
        {
            ans+='.';
            ans+=c;
        }
    }
    cout<<ans<<endl;
    return 0;
}