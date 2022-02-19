class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long int> v;
        double b;
        b=(num-3.0000)/3;
        long long int c=b;
        if(c==b)
        {
            v.push_back(c);
            v.push_back(c+1);
            v.push_back(c+2);
        }
        return(v);
    }
};