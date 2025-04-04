class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> a;
     vector<int> name;

for (int i = 0; i < nums.size(); i++) {
    int dif = target - nums[i];

    if (a.find(dif) != a.end()) {
        name.push_back(i),
        name.push_back(a[dif]);
    }

    a[nums[i]] = i;
    
}
 return name;
 }
};
