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
ll int maxProductSubarrayOfSizeK(ll int A[], ll int n, ll int k)
{
    // sorting given input array
    sort(A, A + n);
    ll int product = 1;
    if (A[n - 1] == 0 && (k & 1))
        return 0;

    if (A[n - 1] <= 0 && (k & 1)) 
    {
        for (ll int i = n - 1; i >= n - k; i--)
            product *= A[i];
        return product;
    }
 
    ll int i = 0;
    ll int j = n - 1;
    if (k & 1) 
    {
        product *= A[j];
        j--;
        k--;
    }

    k/=2;
    for (ll int itr = 0; itr < k; itr++) 
    {
        ll int left_product = A[i] * A[i + 1];
        ll int right_product = A[j] * A[j - 1];
        if (left_product > right_product) 
        {
            product *= left_product;
            i += 2;
        }
        else 
        {
            product *= right_product;
            j -= 2;
        }
    }
    return product;
}


void Boom()
{
    //Let's Move
    ll int n,k=5;
    cin>>n;
    ll int arr[n];
    for(ll int i=0;i<n;i++)cin>>arr[i];
	cout <<  maxProductSubarrayOfSizeK(arr, n, k) << dl;



   
}

int main() 
{ 
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 