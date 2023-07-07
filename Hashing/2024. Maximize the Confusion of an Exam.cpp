class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxFreq = 0;
        int i = 0;
        unordered_map<char, int> charCount;

        for (int j = 0; j < answerKey.length(); j++) {
            char currentChar = answerKey[j];
            charCount[currentChar]++;
            maxFreq = max(maxFreq, charCount[currentChar]);

            if (j - i + 1 > maxFreq + k) {
                charCount[answerKey[i]]--;
                i++;
            }
        }

        return answerKey.length() - i;
    }
};
