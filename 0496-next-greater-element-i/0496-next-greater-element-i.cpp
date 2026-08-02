class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int greater=-1;
            bool found=false;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]<nums1[i]){}
                if(nums2[j]==nums1[i]) {
                    found=true;
                }
                if(found==true && nums2[j]>nums1[i]){
                    greater=nums2[j];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};