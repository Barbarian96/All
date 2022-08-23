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
 
void Boom()
{
    //Let's Move
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll int sum1=0,sum3=0,ans=0,i=0,j=n-1;
    while(i<=j)
    {
       
       
       // cerr<<sum1<<sp<<sum3<<dl;
        if(sum1>=sum3) sum3+=arr[j--];
        else if(sum1<sum3) sum1+=arr[i++];
        //if(sum1==sum3) ans=max(sum1,ans);
    }
    //cout<<ans<<dl;
   
   //cerr<<sum1<<sp<<sum3<<dl;
//cout<<abs(sum1-sum3)+1<<dl;


   
}

int main() 
{ 
    Boost;

    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}   