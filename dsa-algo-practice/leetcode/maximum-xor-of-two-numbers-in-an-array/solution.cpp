class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int answer = 0;
        int mask = 0;

        for (int i = 30; i >= 0; i--) {
            mask = mask | (1 << i);

            unordered_set<int> st;
            
            for (int num : nums) {
                st.insert(num & mask);
            }

            int candidate = answer | (1 << i);

            for (int prefix : st) {
                if (st.count(prefix ^ candidate)) {
                    answer = candidate;
                    break;
                }
            }
        }

        return answer;
    }
};
