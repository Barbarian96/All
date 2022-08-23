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
 string Minimum_Window(string s, string t)
{
    map<char,int>m;
    int ans = s.size();
    for (int i = 0; i < t.length(); i++) 
    {
        m[t[i]]++;
    }

    int start = 0; 
    int count = m.size();
 
    // References of Window
    int i = 0;
    int j = 0;
 
    // Traversing the window
    while (j < s.length()) 
    {
        // Calculations
        m[s[j]]--;
        if (m[s[j]] == 0)
            count--;
 
        // Condition matching
        if (count == 0) 
        {
            while (count == 0) 
            {
                // Sorting ans
                if (ans > j - i + 1) 
                {
                    ans = min(ans, j - i + 1);
                    start = i;
                }
                // Sliding I
                // Calculation for removing I
 
                m[s[i]]++;
                if (m[s[i]] > 0)
                    count++;
 
                i++;
            }
        }
        j++;
    }
 
    if (ans != s.size())
        return s.substr(start, ans);
    else
        return "-1";
}

void Boom()
{
    //Let's Move
    
   S str;
   cin>>str;
   S s=Minimum_Window(str, "123");
   cout<<s<<dl;




   
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