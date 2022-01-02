int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        /*
           Intution-: 
           -We will take out all of the cases at which these rectangles will not overlap
           -Rectangles will not overlap when 
             1. When any recatngle is right to another.
             2. When any rectangle is above to another.
            - so we will return false
            else true.
        */
         // code here
         if(L2[0]>R1[0] || L1[0]>R2[0]) //right
          return false;
         if(R2[1]>L1[1] || R1[1]>L2[1]) //above
          return false;
         return true;
}
