#include <bits/stdc++.h>

using namespace std;

int main(){
    int first [30] , last [30] , N ;
    scanf("%d" , &N) ;
    string res = "ROYGBIV" ;
 
    for (int i = 0 ; i < 7 ; i++){
        first [res [i] - 'A'] = i , last [res [i] - 'A'] = i ;
        cout<<res[i] - 'A'<<" "<<res[i] - 'A'<<endl;
        cout<<first[res[i]- 'A']<<" "<<last[res[i] - 'A']<<endl;
        cout<<endl;
    }
     cout<<"------------------"<<endl;   

    for (int i = 7 ; i < N ; i++)
    {
        for (int j = 0 ; j < 7 ; j++)
        {
            int ix1 = last [res [j] - 'A'] , ix2 = first [res [j] - 'A'];
            bool f = 1 ;
            //La posicion general actual - la posicion de la letra actual en 'ROYGBIV' + 1 es menor a 4
            //¿Estas en las letras iniciales?
            if (i - ix1 + 1 <= 4)
                f = 0 ;
            
            // El total - donde voy (lo que falta) mas la posicion letra actual + 1 es menor a 4
            // ¿Te faltan 4 o menos?
            if ((N - i) + (ix2 + 1) <= 4)
                f = 0 ;
            //Letras de enmedio
            if (f)
            {
               last [res [j] - 'A'] = i ;
               res.push_back(res [j]);
               break ;
            }
        }
    }
 
    cout << res << endl ;
    return 0;   
}