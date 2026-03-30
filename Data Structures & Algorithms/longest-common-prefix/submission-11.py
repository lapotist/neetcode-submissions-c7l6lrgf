class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = strs[0]
        for i in range(1, len(strs)):
            if len(res) > len(strs[i]):
                res = res[:len(strs[i])]
            for j in range(len(res)):
                if res[j] != strs[i][j]:
                    res = res[:j]
                    break
                if res == "":
                    return res
        return res
