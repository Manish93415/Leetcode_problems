class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);

        for (const auto& p : prerequisites) {
            graph[p[1]].push_back(p[0]);
        }

        vector<int> color(numCourses, 0);

        function<bool(int)> hasCycle = [&](int course) {
            if (color[course] == 1) return true;   
            if (color[course] == 2) return false;  

            color[course] = 1;
            for (int next : graph[course]) {
                if (hasCycle(next)) return true;
            }
            color[course] = 2;
            return false;
        };

        for (int course = 0; course < numCourses; ++course) {
            if (color[course] == 0 && hasCycle(course)) {
                return false;
            }
        }

        return true;
    }
};