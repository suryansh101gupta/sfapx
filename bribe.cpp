#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<int> ratings(5);
        int sum = 0;

        for (int i = 0; i < 5; ++i) {
            cin >> ratings[i];
            sum += ratings[i];
        }

        int bribes = 0;
        sort(ratings.begin(), ratings.end());

        while (sum < 35 && bribes < 5) { 
            sum += (10 - ratings[bribes]);
            bribes++;
        }

        cout << bribes * 100 << endl;
    }
    return 0;
}