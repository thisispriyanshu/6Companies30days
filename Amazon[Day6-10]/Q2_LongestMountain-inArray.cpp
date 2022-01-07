 int longestMountain(vector<int>& arr) {
        /*
        Intution-:
        -if array sizeis less than 3 thsn return 0
        -two pointer approach intialised end as start and updated until we got peak
        - then counted for valley and finally returned max of end-start +1
        -and updated start as max of end or start +1
        */
        int n=arr.size();
            if(n<3)
         return 0;
       int start=0,end,ans=0; 
        while(start<n){
            end=start;
            if(end<n-1 && arr[end]<arr[end+1]){
            while(end<n-1 && arr[end]<arr[end+1])
                end++;
                if(end<n-1 && arr[end]>arr[end+1]){
            while(end<n-1 && arr[end]>arr[end+1])
               end++;
            ans=max(ans,end-start+1);
            }
            }
            start=max(end,start+1);
        }
        return ans;
    }
