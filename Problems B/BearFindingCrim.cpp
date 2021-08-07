#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n, a;
    int t[100];
    cin>>n>>a;
    for(int i = 0;i<n;++i){
        cin>>t[i];
    }
    int posleft = a-1;
    int posRight = a-1;
    int total = 0;
    while(true){
        if(posleft <0 && posRight > n-1){
            break;
        }
        if(posleft<0 && posRight<=n-1){
            if(t[posRight] == 1){
                total++;
                
            }
            posRight++;
        }
        else if(posleft>=0 && posRight>n-1){
            if(t[posleft] == 1){
                total++;
                
            }
            posleft--;
        }
        else{
            if((t[posleft] == 1 && t[posRight] == 1) && posleft==posRight){
                total++;
            }
            else if(t[posleft] == 1 && t[posRight] == 1){
                total+=2;
                
            }
            posRight++;
            posleft--;
        }
    }
    cout<<total<<endl;
    return 0;
}