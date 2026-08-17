#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    cout << pq.top() << endl;   // 20

    pq.pop();

    cout << pq.top() << endl;   // 15

    cout << pq.size() << endl;  // 3

    cout << pq.empty() << endl; // 0

    return 0;
}