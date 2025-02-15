#include <iostream>

using namespace std;

const int MOD = 998244353;

// Declare struct for storing task's tuple of (type, time)
struct Task
{
    char type;
    int time;
};


int main() {
    int n, m;
    cin >> n; // Nikoloz's tasks
    cin >> m; // Bakhodir's tasks

    struct Task nick_tasks[n];
    struct Task bakhodir_tasks[m];
    
    // populate tasks
    for (int i = 0; i < n; i++) {
        cin >> nick_tasks[i].time;
        cin >> nick_tasks[i].type;
    }

    for (int i = 0; i < m; i++) {
        cin >> bakhodir_tasks[i].time;
        cin >> bakhodir_tasks[i].type;
    }

    long long ways = 0;


}