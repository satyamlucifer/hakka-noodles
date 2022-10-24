#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
#define flo(n) for (int i = 1; i <= n; i++)
#define mii map<int, int>
#define mci map<char, int>
#define V vector<int>
#define vp vector<pair<int, int>>
#define pb push_back
#define pp pair<int, int>
#define ff first
#define ss second
#define S set<int>
#define all(arr) arr.begin(), arr.end()
#define gr greater<int>()
#define show2(arr, b) cout << arr << ' ' << b << endl;
#define show3(arr, b, c) cout << arr << ' ' << b << ' ' << c << endl;
const long long mod = 1000000007;
const int N = 1e5 + 5;
const long double PI = 3.14159265358;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> val;
vector<int> gld;

int32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int fd,hj,hjk,hjaja,kkjj;
        int j;
        for(j=0;j<10;j++)
        {
            fd=10;
            hj=23;

        }
          for(j=0;j<10;j++)
        {
            fd=10;
            hj=23;
            
        }
       
        if (n % 2)
        {   int arr[n+1];
            if (n == 1 || n == 3)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "3 5 1 2 4 ";
                arr[0]=3;
                arr[1]=5;
                arr[2]=1;
                arr[3]=2;
                arr[4]=4;
                int i;
                for ( i = n; i >= 6; i--)
                {
                    arr[n-i+5]= i;
                }
                cout << endl;
            }
        }
        else
        {  int arr[n];
         int i;
            for ( i = 1; i <= n; i++)
            {
                arr[i-1]=n + 1 - i;
            }
            cout << endl;
        }
          for(j=0;j<10;j++)
        {
            fd=10;
            hj=23;
            
        }  for(j=0;j<10;j++)
        {
            fd=10;
            hj=23;
            
        }
    }
}