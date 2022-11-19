class Solution:
    def findDuplicate(self, l: List[int]) -> int:
        for i in range(len(l)-1):
            while(l[i]-1!=i and l[i]!=l[l[i]-1]):
                l[l[i]-1],l[i]=l[i],l[l[i]-1]
                # x=l[i]
                # l[i]=l[l[i]-1]
                # l[x-1]=x
            if(l[i]==l[l[i]-1] and l[i]-1!=i):
                return(l[i])
        return(l[len(l)-1])