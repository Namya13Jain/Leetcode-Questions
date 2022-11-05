//162 Find Peak Element
//Level:medium
//Topic: Binary search
//TC:0(log n) SC: 0(1)

int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        int left =0, right = n-1;

        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]<nums[mid+1])
             left = mid+1;
            else right = mid; 
        }
        return left;
    }
