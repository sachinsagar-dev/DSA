class Solution {
  public:

  void insertB(stack<int>&st,int num){
      if(st.empty()){
          st.push(num);
          return;
      }
      int temp=st.top();
      st.pop();
      insertAtBottom(st,num);
      st.push(temp);
  }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        int num=st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st,num);
    
     }
    
};
