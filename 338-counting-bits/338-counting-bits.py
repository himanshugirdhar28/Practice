class Solution:
    def countBits(self, n: int) -> List[int]:
        l=[]
        for i in range(n+1):
            count=0
            for j in bin(i)[2:]:
                if j=="1":
                    count+=1
            l+=[count]
        return(l)
            