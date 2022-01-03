string printMinNumberForPattern(string s){
        // code here 
        string res="";
        int num=1;
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='D')
                st.push(num++);
            else{
               st.push(num++);
                while(!st.empty()){
                    char temp='0'+st.top();
                    res.push_back(temp);
                    st.pop();
                 }
            }
        }
        st.push(num++);
        while(!st.empty()){
            char temp='0'+st.top();
            res.push_back(temp);
            st.pop();
        }
        return res;
    }
