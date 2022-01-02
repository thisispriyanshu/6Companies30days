 vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        /*
        Intution-:
             -Iterate through each word and store them in a string
             -Then sort the word and the key in our map will be sorted word and corresponding
              value will be the particular string at ith index
             -Finally push back all map values to final vector which is to be returned. 
             T.C: O(n*|s|*log|s|) s is length of string
        */
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<string_list.size();i++){
            string word=string_list[i];
            sort(word.begin(),word.end());
            mp[word].push_back(string_list[i]);
        }
        for(auto it:mp)
         res.push_back(it.second);
         
        return res;
    }
