//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

int left(int i)
{
	return (2 * i) + 1;
}
int right(int i)
{
	return (2 * i) + 2;
}

void maxheap(int arr[], int i, int n)
{
	int largest = i;
	int l = left(i);
	int r = right(i);
	if (l < n && arr[l] > arr[largest])
	{
		largest = l;
	}
	if (r < n && arr[r] > arr[largest])
	{
		largest = r;
	}
	if (i != largest)
	{
		swap(arr[i], arr[largest]);
		maxheap(arr, largest, n);
	}
}

void build_max_heap(int arr[], int n)
{
	for (int i = (n / 2) - 1; i >= 0; i--)
	{
		maxheap(arr, i, n);
	}
}

void heapsort(int arr[], int n)
{
	//cout << n << endl;
	build_max_heap(arr, n);
	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[i], arr[0]);
		maxheap(arr, 0, i);
	}
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	heapsort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}





















}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}