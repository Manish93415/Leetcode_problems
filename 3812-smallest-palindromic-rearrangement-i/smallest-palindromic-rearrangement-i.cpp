class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> freq;
        for(auto count:s) freq[count]++;

        string left="";
        string middle="";

        for(auto const& [ch,count]:freq){
            if(count%2!=0) middle=ch;

            left+=string(count/2,ch);
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};