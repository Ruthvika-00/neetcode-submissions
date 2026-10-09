class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for n in nums:
            mp[n] = mp.get(n,0)+1
        pq=[]
        for n,f in mp.items():
            heapq.heappush(pq,(f,n))
        res=[]
        for i in range(len(pq)-k):
            heapq.heappop(pq)
        while pq:
            res.append(heapq.heappop(pq)[1])
        return res
