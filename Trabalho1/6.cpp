/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{  
    int suposicao, numero;
    string continua, n = "n";
    
    srand(time(NULL));
    
    do{
        
        do{
            numero = (rand() % 1000);
        }while(numero==0);
        
        
        while(suposicao != numero){
            cout<< numero<<endl;
            cout<<"Tenho um numero entre 1 e 1000"<<endl;
            cout<<"Voce  consegue adivinha-lo?"<<endl;
            cout<<"Digite sua suposicao:  ";
            cin>>suposicao;
            cout<<endl;

            if(suposicao < numero)
                cout<<"Muito baixo. Tente novamente."<<endl;
            if(suposicao>numero)
                cout<<"Muito alto. Tente novamente"<<endl;
        }
        
        cout<<endl<<endl<<"********************"<<endl<<endl;
        cout<<"Excelente! Voce adivinhou o numero! "<<endl;
        cout<<"Quer jogar de novo (s ou n)?";
        cin>>continua;
            

    }while(continua != n);
    
}
