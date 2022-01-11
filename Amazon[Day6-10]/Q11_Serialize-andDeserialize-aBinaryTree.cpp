void preorder(Node *root,vector<int> &res){
        if(root=NULL){
            res.push_back(int(NULL));
            return;
        }
         res.push_back(root->data);
         preorder(root->left,res);
         preorder(root->right,res);
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> res;
        preorder(root,res);
        return res;
    }
    
     Node* deSerializeUtil(vector<int> &A, int &i)
    {
        // if i has gone out of array
        if(i==A.size())
            return NULL;
            
        //null node
        if(A[i]==int(NULL))
        {
            i++; 
            return NULL;
        }
        
        Node* root= new Node(A[i]);
        i++;
        root->left= deSerializeUtil(A,i);
        root->right= deSerializeUtil(A,i);
        
        return root;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       int i=0;
       return deSerializeUtil(A,i);
    }
