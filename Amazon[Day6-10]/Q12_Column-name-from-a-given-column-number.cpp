string colName (long long int n)
    {
        // your code here
        long long mod;
        string res="";
        while(n>0){
            mod=(n-1)%26;
            res+=(char)(65+mod);
            n=(n-mod)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
