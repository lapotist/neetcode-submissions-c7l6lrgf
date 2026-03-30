class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += str(len(s)) + "!" + s
        return res
    def decode(self, s: str) -> List[str]:
        start = 0
        end = 0
        res = []
        while start < len(s):
            while s[end] != "!":
                end += 1
            length = int(s[start:end])
            start = end+1
            end = start + length
            res.append(s[start:end])
            start = end  
        return res
