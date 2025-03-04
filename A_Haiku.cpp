#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    string str1,str2,str3;
    ll ans1=0,ans2=0,ans3=0;
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3);
    for(auto ans:str1)
    {
        if(ans=='a'||ans=='e'||ans=='i'||ans=='o'||ans=='u')
        {ans1++;}
    }
    for(auto ans:str2)
    {
        if(ans=='a'||ans=='e'||ans=='i'||ans=='o'||ans=='u')
        {ans2++;}
    }
    for(auto ans:str3)
    {
        if(ans=='a'||ans=='e'||ans=='i'||ans=='o'||ans=='u')
        {ans3++;}
    }
    if(ans1==5&&ans2==7&&ans3==5){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}