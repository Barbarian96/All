//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back


vector<ll int> primefactors(ll int n)  
{
/*
-->This is for main function
vector<ll int>primefac;
primefac=primefactors(n);
for(auto x:primefac) cout<<x<<dl;
*/

   vector<ll int>primefactor;
   while (n % 2 == 0)  
    {  
        //cout << 2 << " "; 
        primefactor.pb(2);
        n = n/2;  
    }  
    for(ll int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            primefactor.pb(i);
            n = n/i;  
        }  
    }  
    if (n > 2)
    {
        //cout << n << endl;  
        primefactor.pb(n);
    }

    return primefactor;
}



vector<pair<ll int ,ll int>> primefactorspower(ll int n)  
{
/*
-->This is for main function
vector<pair<ll int ,ll int>> primefacpow;
primefacpow=primefactorspower(n);
for(auto x:primefacpow) cout<<x<<dl;
*/ 
    vector<pair<ll int ,ll int>> primefacpow;
    ll int c=0; 
    while (n % 2 == 0)  
    {  
        c++;
        n = n/2;
    }
    if(c!=0)
    {
        //cout<<2<<"^"<<c<<endl;
        primefacpow.pb(mp(2,c));
    }
    for(int i = 3; i <= sqrt(n); i=i+2)  
    { 
        c=0;
        while (n % i == 0)  
        {  
            c++;
            n = n/i;
        } 
        if(c!=0)
        {
            //cout<<i<<"^"<<c<<endl;
            primefacpow.pb(mp(i,c));
        }
    }  
    if (n > 2)  
    {
        //cout << n <<"^"<<1<<endl;
        primefacpow.pb(mp(n,1)); 
    }
    return primefacpow;
}  


int main() 
{ 
    ll int n;
    cin>>n;


    vector<ll int>primefac;
    primefac=primefactors(n);
    for(auto x:primefac) cout<<x<<dl;


    vector<pair<ll int ,ll int>> primefacpow;
    primefacpow=primefactorspower(n);
    for(auto x:primefacpow) cout<<x<<dl;

} 