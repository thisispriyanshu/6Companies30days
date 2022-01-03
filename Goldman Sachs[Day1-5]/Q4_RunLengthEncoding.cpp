string encode(string src)
{ 
   /*
   Intution-: 
   -We intialized ch as first character of string and set count=1 because we have already counted first character
   -then we iterate in loop and if character is equal to ch then we will increment count by 1
   -else we will add the ch and count in final_string and update count=1 and ch as current element
   -after finishing loop we will last add the remaining ch and count and return final_string
   -T.C. -: O(n)
   */
  //Your code here 
  string res="";
  char ch=src[0];
  int count=1;
  for(int i=1;i<src.length();i++){
      if(src[i]==ch)
          count++;
      else{
          res+=ch+to_string(count);
          count=1;
          ch=src[i];
      }
  }
  res+=ch+to_string(count);
  return res;
}     
