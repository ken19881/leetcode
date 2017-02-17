// https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i = 0;
        int j = gas.size() - 1;
        int sum = 0;
        while (i <= j) {
            int idx = (0 <= sum) ? i++ : j--;
            sum += gas[idx] - cost[idx];
        }
        return (0 <= sum) ? (j + 1) % gas.size() : -1;
    }
};
