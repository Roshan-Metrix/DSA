class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<int> visited(n, 0);

        q.push(0);
        visited[0] = 1;

        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                int i = q.front();
                q.pop();

                if (i == n - 1) return steps;

                // 1. i - 1
                if (i - 1 >= 0 && !visited[i - 1]) {
                    visited[i - 1] = 1;
                    q.push(i - 1);
                }

                // 2. i + 1
                if (i + 1 < n && !visited[i + 1]) {
                    visited[i + 1] = 1;
                    q.push(i + 1);
                }

                // 3. same value jumps
                if (mp.count(arr[i])) {
                    for (int j : mp[arr[i]]) {
                        if (!visited[j]) {
                            visited[j] = 1;
                            q.push(j);
                        }
                    }
                    // important: prevent re-processing
                    mp.erase(arr[i]);
                }
            }

            steps++;
        }

        return -1;
    }
};