bool canPair(vector<int> nums, int k) {
        /*
        Intution-: 
          -create a hashtable and increment by 1 at index element%k
          -if hashtable first index is not divisble by 2 then return false
          -Then we will use two pointers as first pointer on first elemnt and 2nd pointer on lst element
          -at last we will check whether two pointers are equal and hashtable on pointer index is 1 then return false 
          -else return true 
          T.C.-: O(n)
        */
        // Code here.
        vector<int> rem(k,0);
        for(auto it:nums)
          rem[it%k]++;
        if(rem[0]%2)
              return false;
        int i=1,j = k-1;
        while(i<j) {
            if(rem[i] != rem[j])
                return false;
            i++;
            j--;
        }
        if(i==j && rem[i]%2 == 1)
            return false;
    
        return true;
    }
