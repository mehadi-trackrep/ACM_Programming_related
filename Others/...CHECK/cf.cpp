#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int N;
queue<int> q1;
queue<int> q2;
vector<pair<queue<int>, queue<int> > > vec;

void BFS() {
	int cost = 0;

	while (q1.size() != 0 && q2.size() != 0) {
		int x = q1.front();
		q1.pop();

		int y = q2.front();
		q2.pop();

		if (x > y) {
			q1.push(y);
			q1.push(x);
		}
		else {
			q2.push(x);
			q2.push(y);
		}

		if(find(vec.begin(), vec.end(), make_pair(q1, q2)) == vec.end()) {
			vec.push_back(make_pair(q1,q2));
		} else {
			cout << -1 << endl;
			return;
		}

		cost++;
	}

	cout << cost << ' ';

	if (!q1.empty()) {
		cout << 1 << endl;
	}
	else {
		cout << 2 << endl;
	}
}

int main() {        ///AC
	cin >> N;
	int tmp;

	cin >> tmp;
	for (int i = 0; i < tmp; i++) {
		int tmp;
		cin >> tmp;
		q1.push(tmp);
	}

	cin >> tmp;
	for (int i = 0; i < tmp; i++) {
		int tmp;
		cin >> tmp;
		q2.push(tmp);
	}

	BFS();

	return 0;

}
