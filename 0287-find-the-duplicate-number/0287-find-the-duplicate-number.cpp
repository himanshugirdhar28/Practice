class Solution {
public:
    int findDuplicate(vector<int>& l) 
    {
        int i;
        for(i=0;i<l.size()-1;i++)
        {
            while(l[i]-1!=i && l[i]!=l[l[i]-1])
            {
                swap(l[i],l[l[i]-1]);
            }
            if(l[i]==l[l[i]-1] && l[i]-1!=i)
            {
                return(l[i]);
            }
        }
        return(l[l.size()-1]);
  //       int slow = nums[0];
  // int fast = nums[0];
  // do {
  //   slow = nums[slow];
  //   fast = nums[nums[fast]];
  // } while (slow != fast);
  // fast = nums[0];
  // while (slow != fast) {
  //   slow = nums[slow];
  //   fast = nums[fast];
  // }
  // return slow;
    }
};