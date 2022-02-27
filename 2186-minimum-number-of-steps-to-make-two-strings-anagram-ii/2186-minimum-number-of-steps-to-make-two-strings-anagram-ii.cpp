class Solution {
public:
    int minSteps(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        cout<<s<<endl<<t<<endl;
        //cdeeelot  acost  count=1,2,3,4,5,6,7
        int i=0,j=0, count=0;
        int a=0;
        while(1)
        {
            if(s[i]==t[j])
            {
                if(i<s.size()-1 && j<t.size()-1)
                {
                    i++;
                    j++;
                }
                else
                {
                    a=1;
                    break;
                }
                
            }
            else
            {
                if(s[i]>t[j])
                {
                    count++;
                    if(j<t.size()-1)
                    {
                       j++; 
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    count++;
                    if(i<s.size()-1)
                    {
                        i++;
                    }
                    else
                    {
                        break;
                    }
                    
                    
                }
            }
        }
        cout<<i<<j<<count<<endl;
        if(i==s.size()-1 && j==t.size()-1 && a==1)
        {
            return(count);
        }
        else if(i==s.size()-1)
        {
            if(a==1)
            {
                count=count+t.size()-j-1;
            }
            else
            {
                count=count+t.size()-j;
            }
        }
        else if(j==t.size()-1)
        {
            if(a==1)
            {
                count=count+s.size()-i-1;
            }
            else
            {
                count=count+s.size()-i;
            }
        }
        return(count);
    }
};