#include <algorithm>
#include <iostream>
#include <string.h>

using namespace std;
int main(){
    int n;
    int pos;
    string s;
    string res;
    cin>>n;
    cin>>s;
    
    

    for(int i = n - 1;i >= 0;--i){
        int l = abs(i-n);
        if(l%2 == 0){
            if(l){
                pos = (l/2) - 1;
            }
        }
        else{
            if(l>1){
                pos = l/2;
            }
            else{
                pos = 0;
            }
            
        }
        cout<<res<<" "<<pos<< " "<<s<< " "<<endl;
        cout<<"after"<<endl;
        string newWord;
        if(res.length()>0){
            newWord = res.substr(0, pos) + s[i] + res.substr(pos + 1, l - pos + 1); 
        }
        else{
            newWord = s[i];
        }
        
        cout<<(newWord)<<endl;
        // string newWord = s.substr(0,pos) + s.substr(pos + 1, length - pos + 1);
        res = newWord;
    }
    cout<<res<<endl;
    return 0;
}