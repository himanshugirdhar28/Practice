class Solution:
    def setZeroes(self, m: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        l=[]
        for i in range(len(m)):
            a=0
            for j in range(len(m[i])):
                if(a==0):
                    for k in range(len(m[i])):
                        if(m[i][k]==0):
                            a=1
                            break
                    if(a==0):
                        break
                if(a==1):
                    if(m[i][j]==0):
                        l.append(j)
                    m[i][j]=0
        for i in range(len(m)):
            for j in range(len(l)):
                m[i][l[j]]=0
                