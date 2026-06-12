class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0; // write pointer

        for (int i = 0; i < n; ) {
            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            chars[idx++] = curr;

            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};