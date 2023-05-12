
#include <vector>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k)
{
    priority_queue<int> pq;
    for (auto e : values) {
        pq.push(e);
    }
    while (--k) {
        pq.pop();
    }
    return pq.top();
}
