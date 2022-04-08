#include <bits/stdc++.h>
using namespace std;

bool bit(string str, int k) {
	int count = 0, c = 0;
	bool ok = false;
	for(int i = 0; i < str.length(); ++i) {
		if(str[i] == 'A')
			++count;
		if(str[i] == 'B')
			count = 0;
		if(count == k) {
			ok = true;
			++c;
		}
		if(count > k)
			ok = false;
	}
	if(ok && c == 1)
		return true;
	return false;
}

void Try(int n, string &str, bool &ok) {
	int i = n - 1;
	while(str[i] == 'B') {
		str[i] = 'A';
		--i;
	}
	if(i < 0)
		ok = true;
	str[i] = 'B';
}

int main() {
//	int t;
//	cin >> t;
//	cin.ignore();
//	while(t--) {
        ios_base::sync_with_stdio(0);cin.tie(0);
		int n, k, count = 0, i = 0;
		bool ok = false;
		cin >> n >> k;
		string str, s[1000];
//		cin >> str;
		for(int i = 0; i < n; ++i)
			str.push_back('A');
		while(!ok) {
			if(bit(str, k))  {
				++count;
				s[i++] = str;
			}
			Try(n, str, ok);
		}
		cout << count<< endl;
		for(int j = 0; j < i; ++j)
			cout << s[j] << endl;
//	}
}
