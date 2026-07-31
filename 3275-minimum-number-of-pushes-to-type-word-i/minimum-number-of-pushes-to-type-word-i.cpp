class Solution {
public:
    int minimumPushes(string word) {

        int s = word.size();

        if (s <= 8)
            return s;

        if (s <= 16)
            return 8 + (s - 8) * 2;

        if (s <= 24)
            return 8 + 16 + (s - 16) * 3;

        return 8 + 16 + 24 + (s - 24) * 4;
    }
};