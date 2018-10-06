class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result=0;
        map<char,int> mymap;
        for(int i=0;i<S.length();i++)
        {
            mymap[S[i]]++;
        }
        for(int i=0;i<J.length();i++)
        {
            result=result+ mymap[J[i]];
        }
        return result;
    }
};