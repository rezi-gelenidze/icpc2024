#include <iostream>
#include <set>

using namespace std;


set<int> intersect(const set<int>& a, const set<int>& b) {
    set<int> result;
    for (int num : a)
        if (b.count(num)) 
            result.insert(num);
    return result;
}

int main() {
    // # of problems in each division [11, 14]
    int n;  
    cin >> n;

    // # of problems in each division created by colab [1, n]
    int k;
    cin >> k;

    // Initialize problem sets for each division
    set<int> a, b, c;

    // Populate each
    for (auto* s : {&a, &b, &c}) {
        for (int i = 0; i < n; i++) {
            int problem;
            cin >> problem;
            s->insert(problem);
        }
    }

    // let's start by greedy counting, to minimize number of problems
    int triple_occurances = intersect(a, intersect(b, c)).size();
    int double_occurances = intersect(a, b).size() + intersect(b, c).size() + intersect(a, c).size() - 3 * triple_occurances;
    int single_occurances = a.size() + b.size() + c.size() - 2 * double_occurances - 3 * triple_occurances;

    // now let's be greedy
    int result = 0;

    for (auto occurance : {triple_occurances, double_occurances, single_occurances}) {
        int used = min(k, occurance);
        k -= used;
        result += used;
    }
    
    cout << result << endl;
    
    return 0;
}
