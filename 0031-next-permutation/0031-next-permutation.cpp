class Solution {
public:
    void nextPermutation(vector<int>& v) 
    {
        int i,j;
        i=v.size()-1;
        while(i>0 && v[i]<=v[i-1])
        {
            i--;
        }
        if(i>-1)
        {
            i--;
        }
        reverse(v.begin()+i+1,v.end());
        j=i+1;
        if(i>-1)
        {
            while(v[i]>=v[j])
            {
                j++;
            }
            swap(v[i],v[j]);
        }
    }
};