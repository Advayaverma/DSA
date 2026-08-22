class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mapping;
        int index = 0;
        char start = 'a';
        char space = ' ';
        mapping[space] = space;

        while (start <= 'z' && index < key.length()){
            char keyCurrChar = key[index];

            if (mapping.find(keyCurrChar) != mapping.end()){
                index++;
            }
            else{
                mapping[keyCurrChar] = start;
                start++;
                index++;
            }
        }

        string ans = "";
        for (int i = 0; i < message.length(); i++){
            char msgChar = message[i];
            char mappedChar = mapping[msgChar];
            ans.push_back(mappedChar);
        }
        return ans;
    }
};