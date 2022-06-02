#User function Template for python3

def findElement( arr, n):
    l=[]
    l.append(arr[0])
    a=0
    b=0
    c=-1
    for i in range(1,len(arr)):
        if(i!=len(arr)-1 and arr[i]>=l[a]):
            while(len(l)>0 and arr[i]>=l[a]):
                a-=1
                l.pop()
            if(len(l)==0 and b==0):
                c=arr[i]
                b=1
            l.append(arr[i])
            a+=1
        elif(arr[i]<c):
            b=0
            c=-1
            l.append(arr[i])
            a+=1
    return(c)
            
        
    
    
    


#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(findElement(a, n))

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends