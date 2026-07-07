class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long> pq;
        long sum = 0;

        for (auto x : target) {
            sum += x;
            pq.push(x);
        }

        while (pq.top() > 1) {
            long top = pq.top();
            pq.pop();
            long next;
            long rest = (sum - top);
            if (rest == 0) return false;
            if (top % rest != 0) {
                next = top - (long)(top / rest) * rest;
            } else {
                next = top - ((top / rest) - 1) * rest;
            }
            if (next <= 0 || next == top) return false;
            pq.push(next);
            sum = sum - top + next;
        }

        return pq.top() == 1;
    }
};
