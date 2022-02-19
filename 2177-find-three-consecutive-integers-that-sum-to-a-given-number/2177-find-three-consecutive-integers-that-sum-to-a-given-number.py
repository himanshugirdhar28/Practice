class Solution:
    def sumOfThree(self, num: int) -> List[int]:
        a=(num-3)/3
        l=[]
        if(a==int(a)):
            l=l+[int(a)]+[int(a+1)]+[int(a+2)]
        return(l)
        
        