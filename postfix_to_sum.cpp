#include<bits/stdc++.h>
using namespace std;
bool isOparator(char a){
    return a == '+' || a == '-' || a == '/' || a == '*' || a=='^' ;
}

int infixtoSum(string &str){
    stack<int> s;
    for(char c:str){
        // cout<<s.top()<<endl;
        if(isOparator(c)){
            int b =s.top();
            s.pop();
            int a =s.top();
            s.pop();
            int k;
            if(c=='+'){
                k=a+b;
            }else if(c=='-'){
                k=a-b;
            }else if(c=='/'){
                k=a/b;
            }else if(c=='^'){
                k = (int) pow(a,b);
            }else{
                k=a*b;
            }
            s.push(k);

        }else{
            if(c=='a'){
                s.push(3);
            }else if(c=='b'){
                s.push(2);
            }else if(c=='c'){
                s.push(1);
            }else{
                s.push(c-'0');
            }
            
        }
    }
    return s.top();
}

void init(){
    freopen("input.txt","r",stdin);
}
int main(){
    init();
    string str;
    cin>>str;
    int sum = infixtoSum(str);
    cout<<sum<<endl;
    
    
}