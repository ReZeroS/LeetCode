
auto io_speed_up =[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ht;
        
        for (size_t i = 0, sz = nums.size(); i < sz; ++i)
        {
            auto it = ht.find(target - nums[i]);
            if (it != ht.end())
                return vector<int>{it->second, i};
            else
                ht.emplace(nums[i], i);
        }
        
        return vector<int>{-1};
    }
};
