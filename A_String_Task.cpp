#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    string s1,s2; cin>>s1;
    for(ll i=0;i<s1.length();i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||s1[i]=='Y'||s1[i]=='y')
        {
            continue;
        }
        else
        {
            s2+='.';
            s2+=tolower(s1[i]);
        }
    }
    cout<<s2;
    return 0;
}