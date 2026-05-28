class Solution {
   public:
    string minWindow(string s, string t) {
        map<char, int> tf;
        map<char, int> curf;
        int l = 0, count = 0;
        string res = "";
        for (auto chr : t) {
            tf[chr]++;
        }
        int tc = tf.size();
        for (int r = 0; r < s.length(); r++) {
            curf[s[r]]++;
            if (curf[s[r]] == tf[s[r]]) {
                count++;
            }
            while (count == tc) {
                if (tf.count(s[l])) {
                    if (res == "" || res.length() > r - l + 1) {
                        res = s.substr(l, r - l + 1);
                    }
                    curf[s[l]]--;
                    cout << curf[s[l]] << endl;
                }
                if (curf[s[l]] < tf[s[l]] && tf.count(s[l])) {
                    count--;
                }
                l++;
            }
        }
        return res;
    }
};
