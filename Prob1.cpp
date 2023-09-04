#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int gas[n];
    int cost[n];

    for (int i = 0; i < n; i++) {
        cin >> gas[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    int total_gas = 0;
    int current_gas = 0;
    int start_gas = 0;

    for (int i = 0; i < n; i++) {
        total_gas += gas[i] - cost[i];
        current_gas += gas[i] - cost[i];

        if (current_gas < 0) {
            start_gas = i + 1;
            current_gas = 0;
        }
    }

    if (total_gas >= 0) {
        cout<< start_gas << endl;
    } else {
        cout<<-1<< endl;
    }

    return 0;
}