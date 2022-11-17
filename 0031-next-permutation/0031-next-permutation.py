class Solution:
    def nextPermutation(self, l: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i=len(l)-1
        while(i>0 and l[i-1]>=l[i]):
            i-=1
        if(i>-1):
            i-=1
        if(i==-1):
            f=l[::-1]
        else:
            f=l[:i:-1]
        while(len(l)>0 and len(l)!=i+1):
            l.pop()
        for h in f:
            l.append(h)
        # print(l)
        j=i+1
        if(i>-1):
            while(l[i]>=l[j]):
                j+=1
            l[i],l[j]=l[j],l[i]
        
        
        