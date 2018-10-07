class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mymap1;
        map<int,int> mymap2;
        vector<int> result;
        for(int i=0;i<nums1.size();i++)
        {
            mymap1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mymap2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mymap1[nums1[i]]!=0 && mymap2[nums1[i]]!=0)
            {
                if(find(result.begin(),result.end(),nums1[i])==result.end())
                {
                    result.push_back(nums1[i]);
                }
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mymap1[nums2[i]]!=0 && mymap2[nums2[i]]!=0)
            {
                if(find(result.begin(),result.end(),nums2[i])==result.end())
                {
                    result.push_back(nums2[i]);
                }
            }
        }
        return result;
    }
};