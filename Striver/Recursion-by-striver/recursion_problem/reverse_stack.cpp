void insertAtBottom(stack<int>&stack,int x){
    if(stack.empty()){
        stack.push(x);
    }
    else{
        int ele = stack.top();
        stack.pop();
        insertAtBottom(stack,x);
        stack.push(ele);  
    }

}

void reverseStack(stack<int> &stack) {

    if (!stack.empty()) {
        int x = stack.top();
        stack.pop();
        reverseStack(stack);
        insertAtBottom(stack,x);
    }
}

//https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1