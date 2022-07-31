struct comp {
	bool operator() (const std::string &word1, const std::string &word2) {
		return word1.size() < word2.size();
	}
};

class Solution {
public:
	int longestStrChain(vector<string>& words) {
		unordered_map<string, int> dp;

		std::sort(words.begin(), words.end(), comp());

		int res = 1;

		for (const string &word : words) {
			int temp = 1;

			for (int i = 0; i < word.length(); i++) {
				string predecessor = word.substr(0, i) + word.substr(i + 1, word.length() + 1);
				if (dp.find(predecessor) != dp.end()) {
					int previousLength = dp[predecessor];
					temp = max(temp, previousLength + 1);
				}
			}
			dp[word] = temp;
			res = max(res, temp);
		}
		return res;
	}
};