class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

	unordered_map<string, int> freqMap;
	vector<int> ans;
	for (string word : words)
		freqMap[word]++;

	int n = s.length();
	int wordsSize = words.size();

	if (n == 0 || wordsSize == 0) return ans; //edge cases

	int eachWordSize = words[0].length();
	for (int i = 0; i <= n - wordsSize * eachWordSize; i++) {
		unordered_map<string, int> seen;
		int j=0 ;

		for (; j < wordsSize; j++) {
			string word = s.substr(i + j * eachWordSize, eachWordSize);
			if (freqMap.find(word) != freqMap.end()) { //found
				seen[word]++;
				if (seen[word] > freqMap[word])
					break;
			}
			else break; // not found
		}

		if (j == wordsSize) ans.push_back(i);
	}

	return ans;
}
};