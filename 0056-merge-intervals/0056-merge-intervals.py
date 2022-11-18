class Solution:
    def merge(self, l: List[List[int]]) -> List[List[int]]:
        l.sort()
        print(l)
        k=[]
        k.append(l[0])
        j=0
        for i in range(1,len(l)):
            if(l[i][0]<=k[j][1]):
                k[j][1]=max(l[i][1],k[j][1])
                k[j][0]=min(k[j][0],l[i][0])
            else:
                k.append(l[i])
                j+=1
        return(k)
        