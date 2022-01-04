unordered_map<int,int> index;
    string solve(int i,int j,string s)
    {
        string str="";
        int product=0;
        while(i<=j)
        {
            char ch=s[i];
            if(isdigit(ch))
            {
                product=product*10+(ch-'0');
            }
            else if(s[i]=='[')
            {
                string ans=solve(i+1,index[i]-1,s);
                for(int k=0;k<product;k++)
                {
                    str+=ans;
                }
                product=0;
                i=index[i];
            }
            else
            {
                str+=s[i];
            }
            i++;
        }
        return str;
    }
    string decodedString(string s) {
        stack<int>stk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                stk.push(i);
            }
            else if(s[i]==']')
            {
                index[stk.top()]=i;
                stk.pop();
            }
            else 
            {
                
            }
        }
        return solve(0,s.size()-1,s);
    }
