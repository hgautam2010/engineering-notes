class Solution {
public:
    bool isAlphaNum(char c) {
        return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z');
    }

    char toUpper(char c) {
        if (c >= 'a' && c <= 'z')
            return (c - 'a') + 'A';
        return c;
    }

    string licenseKeyFormatting(string s, int k) {
        string result;
        int chars = 0;

        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++) {
            if (isAlphaNum(s[i])) {
                if (chars > 0 && chars % k == 0) {
                    result.push_back('-');
                }
                chars++;
                result.push_back(toUpper(s[i]));
            }
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
