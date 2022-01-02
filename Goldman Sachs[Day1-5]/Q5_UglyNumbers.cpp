	ull getNthUglyNo(int n) {
	    /*
	        Intution-: 
	        -We intialized 3 variables as 0 corresponding to 2,3,5 and created a vector 
	        -vector first element will be 1 and after that we took array[i] as min(2*l1,3*l2,5*l3)
	        -and corresponding to minimum number we updated its index;
	        -This same algorithm we use in merging k sorted list.
	        T.C -: O(n)
	    */
	    // code here
	    int t2=0,t3=0,t5=0;
	    vector<ull> res(n);
	    res[0]=1;
	    for(int i=1;i<n;i++){
	        res[i]=min(2*res[t2],min(3*res[t3],5*res[t5]));
	        if(res[i]==2*res[t2]) t2++;
	        if(res[i]==3*res[t3]) t3++;
	        if(res[i]==5*res[t5]) t5++;
	    }
	    return res[n-1];
	}
