#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = (1 << 17); // Максимальное количество вершин

vector<int> adj[MAXN]; // Список смежности
int dfs_order[MAXN]; // Порядок обхода DFS
int pos[MAXN]; // Позиция каждой вершины в dfs_order
int timer = 0;

void dfs(int v) {
    dfs_order[timer++] = v;
    for (int child : adj[v]) {
        dfs(child);
    }
}

int main() {
    int t;
    cin >> t; // Количество тестовых наборов

    while (t--) {
        int n, q;
        cin >> n >> q; // Количество вершин и запросов

        // Считывание дерева
        for (int i = 2; i <= n; ++i) {
            int parent;
            cin >> parent;
            adj[parent].push_back(i);
        }

        // Инициализация
        timer = 0;
        dfs(1);
        for (int i = 0; i < n; ++i) {
            pos[dfs_order[i]] = i;
        }

        // Обработка запросов
        while (q--) {
            int x, y;
            cin >> x >> y;
            if (pos[x] < pos[y]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }

        // Очистка для следующего набора
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }
    }

    return 0;
}