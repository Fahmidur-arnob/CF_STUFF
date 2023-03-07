#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<chrono>
#include<cmath>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<random>
#include<set>
#include<vector>
using namespace std;

#define PI 3.1415926535897932384626
#define pb push_back
#define pop pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define ll long long
#define ull unsigned long long int
#define INF 1e18+9
#define endl '\n'
#define M 1000000007
#define MAX 1000001
#define YES "YES"
#define Yes "Yes"
#define NO "NO"
#define No "No"
const int mod = 1'000'000'007;



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

void shakalaka_Boom(){
	//Write Your code here;
	cout << "HI" << endl;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
	// cin >> t;
	
	while(t--){
		shakalaka_Boom();
	}
	
	return 0;
}