class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        s_dict = dict()
        t_dict = dict()
        for i in range(len(s)):
            s_dict.update({s[i]: s_dict.setdefault(s[i], 0)+1})
            t_dict.update({t[i]: t_dict.setdefault(t[i], 0)+1})
        if s_dict == t_dict:
            return True
        return False 


