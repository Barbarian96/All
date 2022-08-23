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

vector<S>roza;
void gen()
{

    for(int len=1;len<4;len++) 
    {
        string t(len, 'a');
        while(true) 
        {
            roza.pb(t);
            int idx = len - 1;
            while(idx >= 0 && t[idx] == 'z') 
            {
                t[idx] = 'a';
                idx--;
            }
            if(idx < 0) break;
            t[idx]++;
        }
    }
}
void Boom()
{
    //Let's Move
      int n;
    string s;
    cin >> n >> s;
    map<string,bool>se;
    for(int i=0;i<n;i++) 
    {
        string ss;
        for(int k = 0; k < 3 && i + k < n; k++) 
        {
            ss.push_back(s[i + k]);
            se[ss]=true;
         //   cerr<<ss<<sp;
        }
    }
    //cerr<<dl;

    for(int i=0;i<roza.size();i++)
    {
        if(se[roza[i]]==0)
        {
            cout<<roza[i]<<dl;
            break;
        }
    }

   
}

int main() 
{ 
    Boost;
    gen();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

} 