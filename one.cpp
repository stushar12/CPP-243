    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       long long int maxi=INT_MAX;
        
        for(int i=0;i<n-2;i++)
        {
            int low=i+1;
            int high=n-1;
            
            while(low<high)
            {
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==target)
                {
                    return sum;
                    
                }
                else if(sum>target)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            if(abs(sum-target)<abs(maxi-target)) 
                    maxi=sum;
            }
        }
        
        return maxi;
    }