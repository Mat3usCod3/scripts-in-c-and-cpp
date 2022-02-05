// Equação do segundo grau em c++
 
#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    float a, b, c, delta, cal, x, y;
    int i, condition;

    i = 0;
    while (i == 0)

    {
        cout<<"Value A = \n";
        cin>> a;
        cout<<"Value B = \n";
        cin>> b;
        cout<<"Value C = \n";
        cin>> c;

        cout<< "Calculo\n";
        cal = pow(b, 2) + (-4*(a * c));
        cout <<cal<< endl;

        cout<< "Raiz\n";
        delta = sqrt(cal);
        cout << delta << endl;


        if (delta > 0){
            cout<< "Temos duas raizes reais!\n";
        }
        else if (delta == 0){
            cout<<"Duas Raizes reais e iguais\n";
        }
        else {
            cout<<"Nao existe raiz real\n";
            break;                
        }
        
        b = -1 * b;

        x = ((b + delta) / (2*a));
        //cout<<x<< endl;
        delta = -1 * delta;
        y = ((b + delta) / (2*a));
        //cout<<y<< endl;
        cout<<"Primeira raiz_Rx\n";
        cout<<x<< endl;
        
        cout<<"Segunda raiz_Ry\n";
        cout<<y<< endl;
           
    cout<<"Deseja continuar 1sim 0nao\n";
    cin>> condition;

    if (condition == 1){
        continue;
    }
    else {
        break; 
    }

    }
    return 0;
}
