#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main() {
	int n,kase=0;
	cin >> n;
	getchar();
	while (n--) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		int t, mex = 0;
		while (ss >> t) mex = max(mex, t);
		cout << "Case " << ++kase << ": " << mex << endl;
	}

	//system("PAUSE");
	return 0;
}