class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp={}
        for s in strs:
            k=''.join(sorted(s))
            if k not in mp:
                mp[k]=[]
            mp[k].append(s)
        return list(mp.values())
