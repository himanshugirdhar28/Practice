#User function Template for python3

class Solution:
    def nQueen(self, n):
        if(n<4 and n!=1):
            return([])
        if(n==1):
            return([[1]])
        a=[[0 for i in range(n)] for j in range(n)]
        dict={}
        for i in range(n):
            dict[i]=[]
        i=0
        j=0
        dict[i].append([i,j])
        m=[]
        count=0
        while(1):
            c=0
            try:
                k=dict[i][0][1]
            except:
                k=0
            for j in range(k,n):
                if(a[i][j]==0):
                    a[i][j]=1
                    c=1
                    try:
                        dict[i][0]=[i,j]
                    except:
                        dict[i].append([i,j])
                    break
            if(c==1):
                x=i+1
                y=j+1
                while(x<n and y<n):
                    if(a[x][y]==0):
                        a[x][y]=1
                        dict[i].append([x,y])
                    x+=1
                    y+=1
                x=i+1
                y=j-1
                while(x<n and y>=0):
                    if(a[x][y]==0):
                        a[x][y]=1
                        dict[i].append([x,y])
                    x+=1
                    y-=1
                x=i+1
                y=j
                while(x<n and y<n):
                    if(a[x][y]==0):
                        a[x][y]=1
                        dict[i].append([x,y])
                    x+=1
                i+=1
            elif c==0:
                try:
                    dict[i].pop()
                except:
                    pass
                v=len(dict[i-1])
                for h in range(v-1,0,-1):
                    a[dict[i-1][h][0]][dict[i-1][h][1]]=0
                    dict[i-1].pop()
                i-=1
                a[dict[i][0][0]][dict[i][0][1]]=0
                dict[i][0][1]+=1
                if(dict[0][0][0]==0 and dict[0][0][1]>=n):
                    break
            if(i>=n):
                m.append([0 for _ in range(n)])
                for l in range(n):
                    m[count][dict[l][0][1]]=dict[l][0][0]+1
                count+=1
                i-=1
                a[dict[i][0][0]][dict[i][0][1]]=0
                try:
                    dict[i].pop()
                except:
                    pass
                v=len(dict[i-1])
                for h in range(v-1,0,-1):
                    a[dict[i-1][h][0]][dict[i-1][h][1]]=0
                    dict[i-1].pop()
                i-=1
                a[dict[i][0][0]][dict[i][0][1]]=0
                dict[i][0][1]+=1
        m.sort()  
        return(m)


        
        






        
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.nQueen(n)
        if(len(ans) == 0):
            print("-1")
        else:
            for i in range(len(ans)):
                print("[",end="")
                for j in range(len(ans[i])):
                    print(ans[i][j],end = " ")
                print("]",end = " ")
            print()
                
# } Driver Code Ends