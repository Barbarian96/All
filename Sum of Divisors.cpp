//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back

//Sum of Divisor using Theory

//(d^(n+1))-1/(d-1)

ll int power(ll int x,ll int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return power(x*x,n/2);
    else  
        return x*power(x*x,(n-1)/2);
}

ll int divisum(ll int n)
{
    ll int res=1;
    for(ll int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll int cnt=0;
            while(n%i == 0)
            {
                cnt++;
                n=n/i;
            }
            //cout<<i<<"^"<<cnt<<" ";
            res*=((power(i,cnt+1)-1)/(i-1));
        }
    }
    if(n>1)
    {
        res*=((power(n,2)-1)/(n-1));
        //cout<<n<<"^"<<1<<nl;
    }

    return res;
}




//Sum of Divisor using prime factor
ll int sumofdivisor(ll int n)
{
    ll int res = 1;
    for (ll int i = 2; i <= sqrt(n); i++)
    {
        ll int curr_sum = 1;
        ll int curr_term = 1;
        while (n % i == 0) {
            n = n / i;
            curr_term *= i;
            curr_sum += curr_term;
        }
        res *= curr_sum;
    }
    if (n >= 2)
        res *= (1 + n);
    return res;
}

int main()
{

}