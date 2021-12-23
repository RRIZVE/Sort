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

int arr[1000];

void marge(int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	int l[n1], m[n2];
	for (int i = 0; i < n1; i++)
	{
		l[i] = arr[p + i];
	}
	for (int i = 0; i < n2; i++) {
		m[i] = arr[q + i + 1];
	}
	int i = 0, j = 0, k = p;
	while (i < n1 && j < n2)
	{
		if (l[i] <= m[j])
		{
			arr[k] = l[i];
			i++;
		}
		else
		{
			arr[k] = m[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = l[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = m[j];
		j++;
		k++;
	}

}


void margesort(int start, int end)
{
	if (start < end) {
		int mid = (start + end) / 2;
		margesort(start, mid);
		margesort(mid + 1, end);
		marge(start, mid, end);
	}
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	margesort(0, n - 1);

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