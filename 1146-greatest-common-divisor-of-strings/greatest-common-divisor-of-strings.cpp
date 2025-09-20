class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";

        // Step 2: Find gcd of lengths
        int gcdLen = gcd(str1.length(), str2.length());

        // Step 3: Return prefix of that length
        return str1.substr(0, gcdLen);
    }

    private:
    // Helper gcd function
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};