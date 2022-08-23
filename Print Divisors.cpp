//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back

//Print all Divisor

vector<ll int> divisor(ll int n)
{
/*
-->This is for main function
vector<ll int>divi;
divi=divisor(n);
for(auto x:divi) cout<<x<<dl;
*/

vector<int> divi;
ll int root=sqrt(n);
for (ll int i=1; i<=root; i++)
{
    if (n%i == 0)
    {
        if (n/i == i)divi.pb(i);
        else
        {
          divi.pb(i);
          divi.pb(n/i);
        }
    }
}

return divi;

}

//Print all Divisor in Sorted Order

void sorteddivisor(int n)
{
	ll int i=1;
	for(;i*i<n;i++)
	{
		if(n%i==0)cout<<i<<dl;
	}
	for(;i>=1;i--)
	{
		if(n%i==0)cout<<n/i<<dl;  
	}
}





int main()
{

}