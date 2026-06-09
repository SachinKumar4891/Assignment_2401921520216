class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size(), m = p.size();

        if (m > n) return ans;

        vector<int> cntP(26, 0), cntS(26, 0);

        for (char c : p)
            cntP[c - 'a']++;

        for (int i = 0; i < m; i++)
            cntS[s[i] - 'a']++;

        if (cntP == cntS)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            cntS[s[i] - 'a']++;
            cntS[s[i - m] - 'a']--;

            if (cntP == cntS)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};