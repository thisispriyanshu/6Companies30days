string gcdOfStrings(string str1, string str2) {
        /*
        Intution-: 
         -first we compared str1+str2 and str2+str1 if they are not equal then we returned empty string
         -else we find gcd of both(str1,str2) length and returned substring of st1 from 0 to gcd.
        */
        if(str1+str2!=str2+str1) 
            return "";
         return str1.substr(0, gcd(str1.size(), str2.size()));
    }
