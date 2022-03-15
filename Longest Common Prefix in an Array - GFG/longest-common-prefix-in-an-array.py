#User function Template for python3

class Solution:
    def longestCommonPrefix(self, arr, n):
        # code here
        k=[]
        for i in arr:
            k=k+[len(i)]
        x=k.index(min(k))
        y=arr[x]
        for i in arr:
            for j in range(len(y)):
                if i[j]!=y[j]:
                    y=y[0:j]
                    break
        if y=="":
            return("-1")
        else:
            return(y)
                    
                
                    
                    
                    
                

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        n = int(input())
        arr = [x for x in input().strip().split(" ")]
        
        ob=Solution()
        print(ob.longestCommonPrefix(arr, n))
# } Driver Code Ends