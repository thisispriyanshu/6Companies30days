int CountWays(string str){
		    /*
		    Intution-:
		      DP BOTTOM UP APPROACH
		      TC-: O(n)
		    */
		    // Code here
		    int n=str.length();
		    int dp[n+1];
		    dp[0]=1;
		    dp[1]=1;
		    if(str[0]=='0')
		       return 0;
		     for (int i = 2; i <= n; i++)
            {
                int c1=0,c2=0;
               if (str[i-1] > '0')
                  c1 = dp[i-1];
               if (str[i-2] == '1' || (str[i-2] == '2' && str[i-1] < '7') )
                 c2 = dp[i-2];
                 
                dp[i]=(c1+c2)%1000000007; 
            }
            return dp[n];
		}
