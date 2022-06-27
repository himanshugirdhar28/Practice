#User function Template for python3

class Solution:
    
    def merge(self,L,R):
        m=len(L)
        n=len(R)
        i=0
        j=0
        c=[]
        while(i+j<m+n):
            if(i==m):
                c.append(R[j])
                j+=1
            elif(j==n):
                c.append(L[i])
                i+=1
            elif(L[i]<=R[j]):
                c.append(L[i])
                i+=1
            elif(L[i]>R[j]):
                c.append(R[j])
                j+=1
                
        # print(c)
        return(c)
                
    def mergesort1(self,arr,l,r):
        if(r-l<=1):
            return arr[l:r]
        else:
            m=(l+r)//2
            L=self.mergesort1(arr,l,m)
            R=self.mergesort1(arr,m,r)
            x=self.merge(L,R)
            if(len(x)==len(arr)):
                arr=x
                return(arr)
            return(x)
        
        
        # code here
    def mergeSort(self,arr, l, r):
        x=self.mergesort1(arr,l,r+1)
        for i in range(len(x)):
            arr[i]=x[i]
            
        #code here


#{ 
#  Driver Code Starts
#Initial Template for Python 3


import sys
input = sys.stdin.readline
if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        Solution().mergeSort(arr, 0, n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()
# } Driver Code Ends