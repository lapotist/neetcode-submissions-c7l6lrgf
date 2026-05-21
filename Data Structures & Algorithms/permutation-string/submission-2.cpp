class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        multiset<char> ts;
        multiset<char> cs;
        int l = 0;
        for(auto c : s1) {
            ts.insert(c);
        }
        for(int i = 0; i<s1.length(); i++) {
            cs.insert(s2[i]);
        }
        for (auto it = ts.begin(); it != ts.end(); it++)
        cout << *it;
        cout << endl;
        for(int r = s1.length(); r<s2.length()+1; r++) {
            for (auto it = cs.begin(); it != cs.end(); it++)
            cout << *it;
            cout << endl;
            if(cs == ts) {return true;}
            cs.erase(cs.lower_bound(s2[l]));
            l++;
            cs.insert(s2[r]);
        }
        return false;
    }
};
