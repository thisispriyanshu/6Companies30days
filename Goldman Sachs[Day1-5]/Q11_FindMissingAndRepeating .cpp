int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *ans= new int[2];
        int prev=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]==prev)
            ans[0]=arr[i];
            prev=arr[i];
        }
         int count=0;
      for(int i=1; i<=n; i++)
      {    
          
          if(ans[0]==i)
          {
              count++;
          }
          if(arr[i-1+count]!=i)
          {
             ans[1]=i;
             break;
          }
      }
        return ans;
    }
