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
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;


 const int  N=1e8+1;
vector<ll int > v;
vector<bool> prime(N+5,true);
void Sieve()
{
    prime[0]=prime[1]=false;
    for (ll int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (ll int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    } 


    for(ll int p=2;p<=N;p++)
    {
        if(prime[p])
        {
            v.pb(p);
        }
    } 
}
void Boom()
{
    //Let's Move
    ll int n;
    while(cin>>n && n)
    { 
    n=abs(n); 

    if(n<6) 
    {
        cout<<-1<<dl;
        continue;
    }

    ll int tmp = sqrt(n);
    ll int j = 0 ;
    ll int ans=0;

    for(ll int i=0;v[i]<=tmp;i++)
        if(n % v[i] == 0)
        {
            int cnt =  0 ;
            while(n % v[i] == 0)
            {
                cnt ++ ;
                n /=v[i] ;
            }
            ans=max(ans,v[i]);
            tmp = sqrt(n) ;
            j++;
        }

    if(n>1) j++,ans=max(ans,n);

    if(j<=1)
    {
        cout<<-1<<dl;
        continue;
    }
    cout<<ans<<dl;
    }



   
}

int main() 
{ 

	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
    

    Boost;


    int t=1;

    Sieve();
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 