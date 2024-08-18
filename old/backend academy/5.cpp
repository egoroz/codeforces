#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool topologicalSort(int N, const vector<vector<int>>& adj, vector<int>& result) {
    vector<int> inDegree(N + 1, 0);  // учёт степеней входа
    for (int i = 1; i <= N; ++i) {
        for (int neighbor : adj[i]) {
            inDegree[neighbor]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neighbor : adj[node]) {
            if (--inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return result.size() == N;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);  // список смежности
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
    }

    vector<int> result;
    if (topologicalSort(N, adj, result)) {
        cout << "Yes" << endl;
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
