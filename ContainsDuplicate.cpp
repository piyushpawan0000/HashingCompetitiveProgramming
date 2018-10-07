class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mymap;
        bool result=false;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        map<int,int> :: iterator it;
        for(it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second>1)
            {
                result=true;
                break;
            }
        }
        return result;
    }
};