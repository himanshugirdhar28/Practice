class Solution:
    def rotate(self, m: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        k=0
        for i in range(len(m)):
            for j in range(k,len(m)):
                m[i][j],m[j][i]=m[j][i],m[i][j]
            k+=1
        for i in range(len(m)):
            m[i].reverse()
        