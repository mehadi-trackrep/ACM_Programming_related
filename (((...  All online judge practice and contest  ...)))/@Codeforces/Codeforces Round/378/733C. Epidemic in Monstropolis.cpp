#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int b[500];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, K, asum = 0, bsum = 0;
	cin >> N;
	deque<int> q;
	for(int i = 0; i < N; i++) {
		int a;
		cin >> a;
		q.push_back(a);
		asum += a;
	}

	cin >> K;
	vector <int> bb;
	for(int i = 0; i < K; i++) {
		cin >> b[i];
		bsum += b[i];
		bb.push_back(b[i]);
	}

	if(asum != bsum) {
		cout << "NO" << endl;
		return 0;
	}

	vector<int> ans1;
	vector<char> ans2;
	for(int i = 0; i < K; i++) {
		vector<int> v;
		int sum = 0;
		while(q.size() && sum < b[i]) {
			v.push_back(q.front());
			sum += q.front();
			q.pop_front();
		}

		if(sum != bb[i]) {
			cout << "NO" << endl;
			return 0;
		}

		if(v.size() == 1) continue;

		int mv = *max_element(v.begin(), v.end());
		bool flag = false;
		for(int j = 0; j < v.size(); j++) {
			if(v[j] != mv) continue;
			bool left = false, right = false;
			if(j - 1 >= 0 && v[j - 1] < v[j]) left = true;
			if(j + 1 < v.size() && v[j + 1] < v[j]) right = true;
			if(!left && !right) continue;
			flag = true;
			if(left) {
				int t = j + 1;
				for(int k = 0; k < j; k++) {
					ans1.push_back(i + t);
					ans2.push_back('L');
					t--;
				}
				for(int k = j + 1; k < v.size(); k++) {
					ans1.push_back(i + t);
					ans2.push_back('R');
				}
			}
			else {
				int t = j + 1;
				for(int k = j + 1; k < v.size(); k++) {
					ans1.push_back(i + t);
					ans2.push_back('R');
				}
				for(int k = 0; k < j; k++) {
					ans1.push_back(i + t);
					ans2.push_back('L');
					t--;
				}
			}
			break;
		}
		if(!flag) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	for(int i = 0; i < ans1.size(); i++) {
		cout << ans1[i] << " " << ans2[i] << endl;
	}
}

/****


5
1 2 3 4 5
1
15


***/
