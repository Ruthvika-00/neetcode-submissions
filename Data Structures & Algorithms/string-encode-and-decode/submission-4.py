class Solution:

    def encode(self, strs: List[str]) -> str:
        s =""
        for st in strs:
            s += str(len(st)) + "#" +st
        return s
    def decode(self, s: str) -> List[str]:
        i=0
        res=[]
        while i<len(s):
            j = s.index("#",i)
            n = int(s[i:j])
            res.append(s[j+1:j+1+n])
            i=j+1+n
        return res