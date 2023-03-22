#include<bits/stdc++.h>
using namespace std;

#define Copy ios_base::sync_with_stdio(0);
#define Ninja cin.tie(NULL);
#define Kakashi cout.tie(NULL);

/*
set is a collection of some elements


in set if you want to insert some element and access some element the time complexity of these two types of operations are -> log(n);
for insertion use s.insert();
for access use s.find();


Question:

	Given N strings, print unique strings in lexiographical order 
	N <= 10^5
	|S| <= 100000 

*/;

void print(set<string> &s){
	for(string value : s){
		cout << value << endl;
	}
}

int main(){
	Copy Ninja Kakashi;

	set<string> s;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		s.insert(str);
	}
	for(auto value : s){
		cout << value << endl;
	}
}