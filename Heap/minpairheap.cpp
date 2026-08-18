#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    pq.push({10, 5});
    pq.push({20, 3});
    pq.push({20, 7});


    while (!pq.empty()) {
        cout << pq.top().first << " "
             << pq.top().second << endl;

        pq.pop();
    }

    return 0;
}