//349 Intersection of two arrays
//level: easy
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m = nums1.size(), n = nums2.size();
        int i=0,j=0;
        int common = INT_MIN;
        while(i<m && j<n){
            if(nums1[i]==nums2[j] && common!=nums1[i]){
                ans.push_back(nums1[i]);
                common = nums1[i];
                i++,j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans;
    }
