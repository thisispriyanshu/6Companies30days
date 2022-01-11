void linkdelete(struct Node  *head, int m, int n)
    {
        //Add code here 
        if(head==NULL)
           return;
        int i=0;
        while(head && head->next){
            i++;
            if(i==m){
                struct Node* curr=head;
                int temp=n;
                while(temp--){
                    if(curr->next)
                     curr=curr->next;
                }
                head->next=curr->next;
                i=0;
            }
            head=head->next;
        }
    }
