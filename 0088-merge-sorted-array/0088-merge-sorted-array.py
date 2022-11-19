class Solution:
    def merge(self, n1: List[int], m: int, n2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i=len(n1)-1
        j=len(n2)-1
        k=m-1
        while(j>-1):
            if(k>-1 and n1[k]<n2[j]):
                n1[i]=n2[j]
                i-=1
                j-=1
            elif(k>-1 and n1[k]>=n2[j]):
                n1[i]=n1[k]
                k-=1
                i-=1
            elif(k<0):
                while(j>-1):
                    n1[i]=n2[j]
                    j-=1
                    i-=1