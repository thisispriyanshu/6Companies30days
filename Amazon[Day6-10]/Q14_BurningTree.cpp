void parent(Node *root,unordered_map<Node*,Node*>&mp)
 {
     if(!root)
     return;
     queue<Node*>q;
     q.push(root);
     while(!q.empty())
     {
         Node *t=q.front();
         q.pop();
         if(t==root)
         mp[t]=NULL;
         if(t->left)
         {
             q.push(t->left);
             mp[t->left]=t;
         }
         if(t->right)
         {
             q.push(t->right);
             mp[t->right]=t;
         }
     }
 }
  void findnode(Node *root,int target,Node *&res)
  {
      if(!root)
      return;
      if(root->data==target)
      res=root;
      findnode(root->left,target,res);
      findnode(root->right,target,res);
  }
   int minTime(Node* root, int target) 
   {
      if(!root)
      return 0;
      unordered_map<Node*,Node*>mp;
      parent(root,mp);
      Node *res=NULL;
      findnode(root,target,res);
      queue<Node*>q;
      q.push(res);
      int dist=0;
      set<Node*>s;
      while(!q.empty())
      {
          int n=q.size();
          while(n--)
          {
             Node *t=q.front();
             q.pop();
             if(t->left&&s.find(t->left)==s.end())
             {
                 q.push(t->left);
                 s.insert(t->left);
             }
             if(t->right&&s.find(t->right)==s.end())
             {
                 q.push(t->right);
                 s.insert(t->right);
             }
             if(mp[t]&&s.find(mp[t])==s.end())
             {
                 q.push(mp[t]);
                 s.insert(mp[t]);
             }
          }
          dist++;
      }
      return dist-1;
   }
