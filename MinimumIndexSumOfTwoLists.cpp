class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> mymap;
        int result = INT_MAX;
        vector<string> myvect;
        for(int i=0;i<list1.size();i++)
        {
            mymap[list1[i]]++;
        }
        for(int i=0;i<list2.size();i++)
        {
            mymap[list2[i]]++;
        }
        for(int i=0;i<list1.size();i++)
        {
            int temp=0;
            if(mymap[list1[i]]==2)
            {
                temp = temp + i;
                if(find(list2.begin(),list2.end(),list1[i])!=list2.end())
                {
                    vector<string> :: iterator it;
                    it = find(list2.begin(),list2.end(),list1[i]);
                    int index = distance(list2.begin(),it);
                    temp = temp + index;
                }
                
                if(temp<=result)
                {
                    result = temp;
                    myvect.push_back(list1[i]);
                }
                
            }
            
        }
        return myvect;
    }
};