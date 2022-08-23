//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define mii map<int,int>
#define msi map<string,int>
#define mis map<int,string>
#define S string
#define fi first
#define se second
#define sp " "
#define dl "\n"
#define all data.begin(),data.end()
#define b() begin()
#define e() end()
#define FOR() for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Error freopen("error.txt", "w", stderr) 
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
using namespace std; 

/*ull int nCr(ull int n, ull int r)
{

    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
    
}*/

/*
long long c(int n,int m){
    long long temp = 1; // with int enough, will be out of range.
    if(n-m<m)
         m=n-m;
    for(int i=1;i<=m;i++){
        temp*=n;
        temp/=i;
        n--;
         }
    return temp;
}*/
ull nCr(ull n, ull k)
{
    ull res = 1;
    if (k > n - k)
        k = n - k;
    for (ull i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int main() 
{ 

Boost;
#ifndef ONLINE_JUDGE
Input;
Output;
Error;
#endif

/*-----------------------START-----------------------*/


ull int n,m;
while(cin>>n>>m &&(n+m))
{
//100 things taken 6 at a time is 1192052400 exactly.
  cout<<n<<" things taken "<<m<<" at a time is "<<nCr(n,m)<<" exactly."<<dl;
}



/*------------------------END------------------------*/

time;
return 0;

} 


//

 
//__gcd(a,b);

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}


  

vector<bool> segmentedSieveNoPreGen(long long L, long long R)
{

//find prime form l to r by assigning value 0 or 1 
/*
//This is for main function
vector<bool>data;
data=segmentedSieveNoPreGen(2,11);
for(auto x:data) cout<<x<<dl;
*/

    vector<bool> isPrime(R - L + 1, true);
    long long lim = sqrt(R);
    for (long long i = 2; i <= lim; ++i)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}
  