class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;

        for (int i = 0; i < students.size(); i++) {
            q.push(i);
        }

        int sandIdx = 0;
        vector<int> lastChecked(students.size(), -1);

        while (!q.empty()) {
            int stdIdx = q.front();
            int want = students[stdIdx];

            if (want == sandwiches[sandIdx]) {
                sandIdx++;
                q.pop();
            } else {
                if (lastChecked[stdIdx] == sandIdx) {
                    return q.size();
                } else {
                    lastChecked[stdIdx] = sandIdx;
                    q.pop();
                    q.push(stdIdx);
                }
            }
        }

        return 0;
    }
};
