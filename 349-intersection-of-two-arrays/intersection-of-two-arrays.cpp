class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    bool isPresent = false;
                    for(int k=0; k<ans.size(); k++){
                        if(nums1[i] == ans[k]){
                            isPresent = true;
                            break;
                        }
                    }
                    if(isPresent == false){
                        ans.push_back(nums1[i]);
                    }
                }
            }
        }
        return ans;
    }
};