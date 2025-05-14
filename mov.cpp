#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<pair<int, int>> movies;
        for (int i = 0; i < N; ++i) {
            int a, b;
            cin >> a >> b;
            movies.push_back({a, b});
        }
        int min_cost = INT_MAX;
        for (auto &p : movies) {
            int rating = p.first;
            int cost = p.second;

            if (rating >= 7) {
                min_cost = min(min_cost, cost);
            }
        }

        if (min_cost == INT_MAX)
            cout << -1 << endl;
        else
            cout << min_cost << endl;
    }
}
