class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string,int> mymap;
        vector<string> result;
        while(A.find(' ')!=string::npos)
        {
            int i = A.find(" ");
            string check= A.substr(0,i);
            mymap[check]++;
            A.erase(0,i+1);
        }
        mymap[A]++;
        
        while(B.find(" ")!=string::npos)
        {
            int i= B.find(" ");
            string check = B.substr(0,i);
            mymap[check]++;
            B.erase(0,i+1);
        }
        mymap[B]++;
        
        map<string,int> :: iterator it;
        for(it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second==1)
            {
                result.push_back(it->first);
            }
        }
        return result ;
    }
};