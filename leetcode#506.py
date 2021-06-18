class Solution:
    def getRank(self, rank: int) -> str:
        return {
            1: 'Gold Medal',
            2: 'Silver Medal',
            3: 'Bronze Medal'
        }.get(rank, str(rank))

    def findRelativeRanks(self, score: List[int]) -> List[str]:
        rank = {}
        for a in sorted(score, reverse=True):
            rank.setdefault(a, self.getRank(len(rank) + 1))
        return [rank[i] for i in score]
