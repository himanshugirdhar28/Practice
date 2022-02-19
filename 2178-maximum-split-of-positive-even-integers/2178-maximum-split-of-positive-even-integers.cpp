class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long int>l;
        long long int sum=0;
        if (finalSum%2!=0)
        {
            return(l);
        }
        double a=(-1.0+pow(1+4*finalSum,0.5))/2.0;
        long long int b=a;
        long long int i;
        if (b==a)
        {
          for(i=2;i<(2*b+1);i=i+2)
            {
                l.push_back(i);
            }  
        }       
        else
        {
            for (i=2;i<(b-1)*2+1;i=i+2)
            {
                l.push_back(i);
                sum=sum+i;
            }    
            l.push_back(finalSum-sum);
        }
            
        return(l);
        
        
    }
};