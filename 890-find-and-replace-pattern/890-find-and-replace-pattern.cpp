class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> ans;
        
        for(int i=0;i<words.size();i++)
        {
            int found=1;
            int found1=1;
            unordered_map<char,char> arr;//for pattern
            unordered_map<char,char> arr1;
            for(int j=0;j<words[i].length();j++)
            {
                auto it=arr.find(pattern[j]);
               
                if(it!=arr.end() )
                {
                    if(words[i][j]==it->second)
                    {
                        continue;
                    }
                    else
                    {
                        found=0;
                        break;
                    }
                }
                else
                {
                    arr[pattern[j]]=words[i][j];
                }
                auto it1=arr1.find(words[i][j]);
                
                if(it1!=arr1.end() )
                {
                    if(pattern[j]==it1->second)
                    {
                        continue;
                    }
                    else
                    {
                        found1=0;
                        break;
                    }
                }
                else
                {
                    arr1[words[i][j]]=pattern[j];
                }
                
            }
            if(found==1 && found1==1)
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};