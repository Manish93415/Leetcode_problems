class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            string temp = words[i];
            int j=0;
            while(j<temp.size()){
                if(temp[j]==x){
                    ans.push_back(i);
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};