class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int left = 0, right = nums.size() - 1;

        while(left <= right){
            
            int mid = (left + right) / 2;
            //cout << mid << " [" << left << "," << right << "]" << endl;
            if(target < nums[mid]){
                right = mid - 1;
            }
            else if(target > nums[mid]){
                left = mid + 1;
            }
            else{
                return mid;
            }
        }
        return left;
    }
};