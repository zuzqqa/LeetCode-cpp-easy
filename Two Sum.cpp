class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        vector <int> indicies;


        for(vector<int>::iterator itr = nums.begin(); itr != nums.end(); ++itr){
            for(vector<int>::iterator itr1 = nums.begin(); itr1 != nums.end(); ++itr1){
                if( *itr + *itr1 == target && distance(nums.begin(), itr) != distance(nums.begin(), itr1) ) {
                    indicies.push_back(distance(nums.begin(), itr));
                    indicies.push_back(distance(nums.begin(), itr1));
                    i = 1;
                }
                if( i == 1 ) break;
            }
            if( i == 1 ) break;
        }
        return indicies;
    }
};
