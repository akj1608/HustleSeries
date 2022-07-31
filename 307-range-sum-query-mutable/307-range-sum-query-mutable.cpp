class NumArray {
public:
    NumArray(vector<int> &nums) : psum( nums.size()+1, 0 ), nums(nums)
    {
        partial_sum( nums.begin(), nums.end(), psum.begin() + 1);
    }

    void update(int i, int val) 
    {
        updates.emplace_back( i,  val - nums[i]);
        nums[i] = val;        
        
        if ( updates.size() > 333) //magic
        {
            partial_sum( nums.begin(), nums.end(), psum.begin() + 1);
            updates.clear();
        }
    }

    int sumRange(int i, int j)
    {
        auto result =  psum[j+1] - psum[i];
        
        for (const auto& p : updates)
        {
            if ( p.first <=j && p.first >= i)
            {
                result += p.second;
            }
        }
        
        return result;
    }
    
private:    
    vector<int64_t> psum;
    vector<int> nums;
    vector<pair<int,int>> updates;
};