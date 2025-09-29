class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long window_sum = 0;
        
        // Step 1: Sum of first k elements
        for (int i = 0; i < k; i++) {
            window_sum += nums[i];
        }
        
        long long max_sum = window_sum;
        
        // Step 2: Sliding window
        for (int i = k; i < nums.size(); i++) {
            window_sum += nums[i] - nums[i - k];  // slide window
            max_sum = max(max_sum, window_sum);
        }
        
        // Step 3: return average
        return (double)max_sum / k;
    }
    
};