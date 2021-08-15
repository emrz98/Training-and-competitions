#include <algorithm>
#include <iostream>
#include <string.h>

using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    string newS="";
    int len = s.length();
    for(int i = 0;i<n;++i){
        if(len % 2){
            if(i%2 == 0){
                newS+=s[i];
            }
            else{
                newS = s[i] + newS;
            }

        }
        else{
            if(i%2 == 0){
                newS = s[i] + newS;
            }
            else{
                newS+=s[i];
            }
        }
        
        
    }
    cout<<newS<<endl;
    return 0;
}