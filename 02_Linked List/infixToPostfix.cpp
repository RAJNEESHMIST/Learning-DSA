#include<iostream>
#include<stack>
using namespace std;

//function to check the precedence of the opeatrs
int prece(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }   
}

//function to convert infix to postfix
void infixToPostfix(string s){
    stack<char> st;//stack initialization
    string result;
    for(int i=0;i<=s.length();i++){
        char c=s[i];
        if((c >='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9'))
            result+=c;
        
        else if(c=='(')
            st.push('(');
        
        else if(c==')'){
            while(st.top()!='('){
                result +=st.top();
            }
                st.pop();
            }
        
        else{
            while(!st.empty()&&prece(s[i]<=prece(st.top()))){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
    }
    while(!st.empty()){
        result+=st.top();
    }
    cout<<result<<endl;
}
int main(){
    string exp1="a+b*c+h";
    infixToPostfix(exp1);
    return 0;
}