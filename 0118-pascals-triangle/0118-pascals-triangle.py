class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l=[[1]]
        i=0
        while(i+1<numRows):
            j=0
            l.append([])
            for k in range(i+2):
                if(j-1>=0 and j<len(l[i])):
                    l[i+1].append(l[i][j-1]+l[i][j])
                elif(j>=len(l[i])):
                    l[i+1].append(l[i][j-1])
                else:
                    l[i+1].append(l[i][j])
                j+=1
            i+=1
        return(l)
                    
        