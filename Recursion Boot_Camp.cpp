#include<bits/stdc++.h>
using namespace std;
int arr[1000];
//Factorial
int factorial (int n)
{
    //factorial(n)=n*factorial(n-1);
    if(n==0)return 1;
    return n*factorial(n-1);
}
//Print 1 to N
void print(int n)
{
    if(n==0)return;
    print(n-1);
    cout<<n<<" ";
}


//Print N to 1
void print(int n)
{
    if(n==0)return;
    cout<<n<<" ";
    print(n-1);
}


//Array Input
void input(int n)
{
    if(n==0)return;
    input(n-1);
    cin>>arr[n-1];
}

//Array Output
void output(int n)
{
    if(n==0)return;
    output(n-1);
    cout<<arr[n-1]<<" ";
}

//Array Output Reverse
void Routput(int n)
{
    if(n==0)return;
    cout<<arr[n-1]<<" ";
    Routput(n-1);
}

//Array Sum
int arraysum(int n)
{
    //cout<<arraysum(n);

    if(n==0)return 0;
    return  arr[n-1]+arraysum(n-1);
}

//Print K element from reverse order
void Rprint(int n,int k)
{
    if(k==0)return;
    cout<<arr[n-1]<<" ";
    Rprint(n-1,k-1);
}

//Reverse theke akbar + arekbar - kor kore total sum
int sum(int n)
{
    if(n==0)return 0;
    return arr[n-1]-sum(n-1);
}
//Akbar + arekbar - kor kore total sum
int ssum(int pos,int n)
{
    if(pos==n)return 0;
    return arr[pos]-ssum(pos+1,n)
}
//Min Element

int minelement (int n)
{
    if(n==0)return INT_MAX;
    return min(arr[n-1],minelement(n-1));
}


//Min Element

int maxelement (int n)
{
    if(n==0)return INT_MAX;
    return max(arr[n-1],maxelement(n-1));
}
//Check Paindrome
bool ispalindrome(int l,int r)
{
    //string str;
    //ispalindrome(0,str.size()-1);

    if(l>=r)return true;
    if(str[l]==str[r])
    return ispalindrome(l+1,r-1);
    return false;
}

//Reverse A String

string rev(int n)
{
    //string str;
    //string sstr=rev(str.size()-1);

    if(n<0)return "";
    return str[n]+rev(n-1);
}
//Fibonacci
int fibo(int n)
{
    if(n<=1)return n;
    return fibo(n-1)+fibo(n-2);
}

//Fibonacci in DP Way


int dp[max]; 
int fibo(int n)
{
    if(n<=1)return n;
    if(dp[n])return dp[n];
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}

//Generating Subset using String
set<string>data;
void subset(int pos,string res="")
{
        if(pos==n)
        {
        data.insert(res);
       // cout<<res<<endl;
        return;
        }
    //arr[pos] elemetn ta nibo
    subset(pos+1,res+" "+to_string(arr[pos]));
    //arr[pos]elemet ta nibo na
    subset(pos+1,res);
}


//Generating Subset using Vector
void subset (int pos,vector<int>res)
{

    if(pos==n)
    {
        for(auto x:res)cout<<x<<" ";
        cout<<endl;
        return;
    }
    //arr[pos] element ta nibo
    res.push_back(arr[pos]);
    subset(pos+1,res);
    //arr[pos] element ta nibo na
    //tay age niye felsi seta remove korte hobe

    res.pop_back();
    subset(pos+1,res);
}


//Subset Using Bitmask
void subset (int n,string res="")
{
    if(n==0)
    {
        cout<<res<<endl;
        //for(int i=0;i<res.size();i++)
        //{
        //    if(res[i]-'0')cout<<arr[i]<<" ";
        //}
        //cout<<endl;
        return;
    }
    subset(n-1,res+"1");
    subset(n-1,res+"0");
}

//All lucky number of N digits
void lucky(int n,string res="")
{
    if(n==0)
    {
        cout<<res<<endl;
        return;
    }
    lucky(n-1,res+"4");
    lucky(n-1,res+"7");
}

//Coin Problem    

int main()
{

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin>>n;
  input(n);
  subset(0);


}