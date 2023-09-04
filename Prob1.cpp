class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
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
            return start_gas;
        } else {
            return -1;
        }
    }

        
};
