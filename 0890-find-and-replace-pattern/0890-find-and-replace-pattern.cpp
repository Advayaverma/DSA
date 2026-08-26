class Solution {
public:
    void normalize(string &str){
        char start = 'a';
        unordered_map<char,char> mapping;

        for (int i = 0; i < str.length(); i++){
            char strChar = str[i];
            if (mapping.find(strChar) == mapping.end()){
                mapping[strChar] = start;
                start++;
            }
        }

        for (int i = 0; i < str.length(); i++){
            char mappedChar = mapping[str[i]];
            str[i] = mappedChar;
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        normalize(pattern);

        for (int i = 0; i < words.size(); i++){
            string currWord = words[i];
            string currWordCopy = currWord;

            normalize(currWordCopy);
            if (currWordCopy.compare(pattern) == 0){
                ans.push_back(currWord);
            }
        }
        return ans;
    }
};