#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll book,min; cin>>book>>min;
    ll sum=0,count=0;
    vector<ll>books;
    for(ll i=0;i<book;i++)
    {
        ll x; cin>>x;
        books.push_back(x);
    }
    sort(books.begin(),books.end());
    for(ll i=0;i<books.size();i++)
    {
       sum+=books[i];
       if(sum<=min){count++;}  
    }
    cout<<count;

    return 0;
}