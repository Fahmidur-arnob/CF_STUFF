#include<bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626
#define pb push_back
#define pop pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define ll long long
#define lld long double
#define ull unsigned long long
#define INF 1e18+9
#define endl '\n'
#define M 1000000007
#define MAX 1000001
#define YES "YES"
#define Yes "Yes"
#define NO "NO"
#define No "No"
#define vecR(v) v.begin(), v.end()
#define rVec(v) v.begin(), v.end()
#define loop(i, n) for(int i = 0; i < n; i++)
#define loopE(i, n) for(int i = 1; i <= n; i++)
#define loopL(i, n) for(long long i = 0; i < n; i++)
#define loopREV(i, m, n) for(int i = n; i>= m; i--)

#define Copy ios_base::sync_with_stdio(0);
#define Ninja cin.tie(NULL);
#define Kakashi cout.tie(NULL);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


int lowComMulti(int a, int b){
	return (a / __gcd(a, b) * b);
}

//prime num till n; it takes any number and prints all the prime till that num;
bool isPrime(int n){
	if(n <= 1) return false;
	if(n <= 3) return true;

	//this is checked so that we can skip the middle five number in below loop;
	if(n % 2 == 0 || n % 3 == 0) return false;

	for(int i = 5; i * i <= n; i = i+6){
		if(n % i == 0 || n % (i + 2) == 0){
			return false;
		}
	}
	return true;
}

void printTheIsPrimeFunction(int n){
	for(int i = 2; i <= n; i++){
		if(isPrime(i)){
			cout << i << " " << endl;
		}
	}
}

bool primeFinder(int n){
	int m = 0;
	int flag = 0;
	m = n / 2;
	if(n == 0 || n == 1){
		return false;
	}
	else{
		for(int i = 2; i <= m; i++){
			if(n % i == 0)
				return false;
		}
		return true;
	}
	//1 is true
	//0 is false
}

bool is_palindrome(const string &s){
	for(int a = 0, b = int(s.size()) - 1; a < b; a++, b--){
		if(s[a] != s[b]){
			return false;
		}
	}
	return true;
}

/*
Hatake Kakashi is a shinobi of konohagakure's Hatake clan. The son of the 
Konoha's White Fang. Famed as Kakashi of the Sharingan(Sharingan no Kakashi). 
He is also the sixth hokage.
He is reputed to have copied over a thousand techniques and which led to his 
moniker as "Copy Ninja Kakashi" 
*/

const int mod = 1'000'000'007;

void Kakashi_of_the_Sharingan(){
	//Write Your code here;
	int n;
	cin >> n;
	if(n % 3 != 0){
		cout << NO << endl;
	}
	else{
		cout << YES << endl;
	}
}


int main() {
	Copy Ninja Kakashi

	#ifndef ONLINE_JUDGE
		freopen("Error.txt", "w", stderr);
	#endif

	int t;
	cin >> t;
	
	while(t--){
		Kakashi_of_the_Sharingan();
	}
	
	return 0;
}