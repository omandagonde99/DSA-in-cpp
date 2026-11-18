class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;

        int low=0;
        int high = nums.size()-1;
        int mid = low+(high-low)/2;

        while(low<=high){
            if(nums[mid]==target){
                first = mid;
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid + 1; 
            }
            else{
                high = mid -1;
            }

            mid = low+(high-low)/2;
        }

        low=0;
        high = nums.size()-1;
        mid = low+(high-low)/2;

        while(low<=high){
            if(nums[mid]==target){
                last = mid;
                low = mid+1;
            }
            else if(nums[mid]<target){
                low = mid + 1; 
            }
            else{
                high = mid -1;
            }

            mid = low+(high-low)/2;
        }
        return {first , last};
    }
};