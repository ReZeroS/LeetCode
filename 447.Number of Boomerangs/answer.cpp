a[0] = 0;           // init
cout << (2*a[0]++); // 0
cout << (2*a[0]++); // 2

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int booms = 0;
        for (auto &p : points) {
            unordered_map<double, int> ctr(points.size());
            for (auto &q : points)
                booms += 2 * ctr[hypot(p[0] - q[0], p[1] - q[1])]++;
        }
    return booms;
    }
};
