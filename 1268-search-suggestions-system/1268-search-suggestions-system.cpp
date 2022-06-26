class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        set<string> unique;
        for(auto& product: products) {
            unique.insert(product);
        }
        vector<vector<string>> result(searchWord.size());
        string search = "";
        for (int i=0; i<searchWord.size(); i++) {
            search += searchWord[i];
            for (auto& word: unique) {
                if (word.substr(0, i+1) != search) {
                    unique.erase(word);
                }
            }
            set<string>::iterator it = unique.begin();
            int set_size = unique.size();
            int vec_size = std::min(3, set_size);
            for (int j=0; j<vec_size; j++) {
                result[i].push_back(*it++);
            }
        }
        return result;
    }
};