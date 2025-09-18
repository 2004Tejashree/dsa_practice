#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        if (k == 1) return 0; // Only one partition, so min and max scores are the same.

        vector<int> pairSums;
        
        // Compute pair sums (weights[i] + weights[i+1])
        for (int i = 0; i < n - 1; i++) {
            pairSums.push_back(weights[i] + weights[i + 1]);
        }

        // Sort pair sums
        sort(pairSums.begin(), pairSums.end());

        long long minScore = 0, maxScore = 0;
        
        // Choose (k - 1) smallest sums for min score
        for (int i = 0; i < k - 1; i++) {
            minScore += pairSums[i];
        }

        // Choose (k - 1) largest sums for max score
        for (int i = 0; i < k - 1; i++) {
            maxScore += pairSums[n - 2 - i];
        }

        return maxScore - minScore;
    }
};
