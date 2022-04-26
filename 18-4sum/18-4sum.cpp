class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
		vector<vector<int>> ans;
		auto get2 = [&](int st, int en, int t) {
			vector<vector<int>> ret;
            int S = st, E = en;
			while (st < en) {
                if (st > S && nums[st] == nums[st - 1]) {
                    st++;
                    continue;
                }
                if (en < E && nums[en] == nums[en + 1]) {
                    en--;
                    continue;
                }
				int sum = nums[st] + nums[en];
				if (sum == t) {
					ret.push_back({st, en});
					st++, en--;
				} else if (sum < t) {
					st++;
				} else {
					en--;
				}
			}
			return ret;
		};
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < n; j++) {
				if (j > i + 1 && nums[j] == nums[j - 1]) 
					continue;
				int cur = nums[i] + nums[j];
				int t = target - cur;
				vector<vector<int>> right = get2(j + 1, n - 1, t);
				if (!right.empty()) {
					for (vector<int> &u: right) {
						ans.push_back({nums[i], nums[j], nums[u[0]], nums[u[1]]});
					}
				}
			}
		}
		return ans;
    }
};