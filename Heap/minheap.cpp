#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int, vector<int>, greater <int>> pq;

    pq.push(20);
    pq.push(15);
    pq.push(25);
    pq.push(35);

    cout << pq.top() << endl;   // 15

    pq.pop();

    cout << pq.top() << endl;   // 20

    cout << pq.size() << endl;  // 3

    cout << pq.empty() << endl; // 0

    return 0;
}