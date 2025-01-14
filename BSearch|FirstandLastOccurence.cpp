   int firstOccurence(vector<int>&nums,int target){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int ans = -1;
        while(s <= e){
            int mid = s+(e-s)/2;
            //Maybe an answer
            if(nums[mid] == target){
                ans = mid;
                e = mid - 1;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
    int lastOccurence(vector<int>&nums, int target){
          int n = nums.size();
          int s = 0;
          int e = n-1;
          int ans  = -1;
          while(s <= e){
            int mid = s+(e-s)/2;
            if(nums[mid] == target){
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
          }
          return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = firstOccurence(nums,target);
        ans[1] = lastOccurence(nums,target);

        return ans;
    }
