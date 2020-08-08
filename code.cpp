#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    char stack[100000];
	    int top = -1;
	    int flag = 1;
	    for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stack[++top] = s[i];
            }else if(top==-1){
                flag = 0;
                break;
            }else{
                if(s[i]=='}' && stack[top]=='{'){
                    top--;
                }else if(s[i]==')' && stack[top]=='('){
                    top--;
                }else if(s[i]==']' && stack[top]=='['){
                    top--;
                }else{
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            cout<<"NO"<<endl;
        }else if(top == -1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
