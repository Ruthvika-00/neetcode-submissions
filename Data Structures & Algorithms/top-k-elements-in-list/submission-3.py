class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dt={}
        for n in nums:
            dt[n] = dt.get(n,0)+1
        sorted_data = list(
            dict(
                sorted(
                    dt.items(),
                    key=lambda item:item[1],
                    reverse=True
                )
            )
        )
        return sorted_data[:k]