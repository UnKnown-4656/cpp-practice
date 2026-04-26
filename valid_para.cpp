#include <iostream>
#include <stack>

using namespace std;



bool Valid_paranthesis(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' ||s[i]=='{'){
            st.push(s[i]);
           }
        else{
            if(st.empty()){
                return false;
            }
            if(st.top()=='(' && s[i]==')' || st.top()=='[' && s[i]==']' || st.top()=='{' && s[i]=='}'){
                st.pop();
            }

            else{
                return false;
            }
           }



    }
    return st.empty();
}
int main()
{
    string s ="({{}})";
    bool ans=Valid_paranthesis(s);
    if(ans==false){
        cout <<"False" <<endl;

    }
    else{
        cout<<"True"<<endl;
    }

    return 0;
}
