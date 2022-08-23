//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back

//Count Divisor
ll int countdivisor(ll int n)
{
	ll int divisor=0;
	for(ll int i=1;i*i<=n;i++)
	{
		if(i*i==n)divisor++;
		else if(n%i==0)divisor+=2;
	}
	return divisor;
}
//Number of Divisor using Prime Factor

ll int totaldivisor(ll int n)
{
	ll int total=1;
	ll int cnt=0;
	while(n%2==0)
	{
		n/=2;
		cnt++;
	}
	total=total*(cnt+1);
	for(ll int i=3;i<=n;i+=2)
	{
		if(n%i==0)
		{
			cnt=0;
			while(n%i==0)
			{
				n/=i;
				cnt++;
			}
			total=total*(cnt+1);
		}
	}
	return total;
}

//Number of Divisor using Prime Factor and Sieve

ll int totaldivisor(ll int n)
{
	bool sieve[n+2];
	memset(sieve,true,sizeof(sieve));
	for(ll int i=2;i*i<=n;i++)
	{
		if(sieve[i]==true)
		{
			for(ll int j=i*2;j<=n;j+=i)
			{
				sieve[j]=false;
			}
		}
	}


	ll int total=1;
	for(ll int i=2;i<=n;i++)
	{
		if(ar[i])
		{
			ll int cnt=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					n/=i;
					cnt++;
				}
				total=total*(cnt+1);
			}
		}
	}
	return total;
}


int main()
{




}