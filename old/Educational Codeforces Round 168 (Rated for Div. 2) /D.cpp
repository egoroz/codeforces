#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define print(v) PrintVec(v, #v)

template<typename T>
void PrintVec(vector<T> vector, string name){
    cout << "\n" << name << " = {";
    for(auto el : vector){
      if(el)
      cout << el->value << ' ';
    }
    cout << "}\n";
}

// vector<int> res;


struct Node {
    int ef= 1000000001;
    int value;
    Node *parent;
    vector<Node*> children;
};

void getLeafNodes(vector<Node*>& leaf, vector<Node*> nodes) {
    // vector<Node*> leafNodes;
    for (int i = 0; i < nodes.size(); ++i) {
        if(!nodes[i]){continue;}
        if (nodes[i]->children.empty()) {
            leaf.push_back(nodes[i]);
        }
        // else{
        //   getLeafNodes(leaf, nodes[i]->children);
        // }
    }

  // return leaf;
}

void solve(){
    int n, k;

    cin >> n;
    vector<int> a(n+1);
    vector<int> p(n+1);

    for(int i = 1; i < n+1; ++i){
        int v;
        cin >> v;
        a[i] = v;
        
    }

    // print(a);

    // int p;
    for(int i = 2; i < n+1; ++i){
        int v;
        cin >> v;
        p[i] = v;
    }

  // print(p);
  // return;
    


    vector<Node*> nodes(n + 1, nullptr);
    for (int i = 1; i <= n; ++i) {
      nodes[i] = new Node();
    }


    for (int i = 1; i <= n; ++i) {
      nodes[i]->value = a[i];
    }

    for (int i = 2; i <= n; ++i) {
      nodes[i]->parent = nodes[p[i]];
      nodes[p[i]]->children.push_back(nodes[i]);
    }

    nodes[1]->parent = nullptr;

    vector<Node*> leaf; getLeafNodes(leaf, nodes);
  // print(leaf);
  // return;

  int ma = 1000000001;
// cout << "\n";
    for(int i = 0; i < leaf.size(); ++i){
        Node* now = leaf[i];
        if(!now){continue;}
        leaf[i]->ef = leaf[i]->value;
        while(now->parent != nullptr){
          if(now->ef < now->parent->ef){now->parent->ef = now->ef;}
            now->parent->ef = min(now->parent->ef, (now->ef + now->parent->value)/2);
            // now->parent->value = min(now->parent->value, (now->ef + now->parent->value)/2);
            if(now->parent == nodes[1]){ma = min(ma, now->ef);}
            now = now->parent;
            // cout << now->ef << ' ';
        }
    }
    // cout << "\n";

    cout << nodes[1]->value + ma << '\n';


    
    
    // vector<int> a;
    // vector<int> b;
    
    // string str;   
    // std::getline(std::cin, str);
    // std::getline(std::cin, str);
    // std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    // int num;
    // while(is1 >> num){
    //     a.push_back(num);
    // }

    // while(is2 >> num){
    //     b.push_back(num);
    // }

    // res.push_back(r);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    // for(auto el: res){
    //     cout << el << "\n";
    // }
    
    return 0;
}