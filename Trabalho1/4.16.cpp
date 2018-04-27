#include <iostream>

using namespace std;

int main(void)
{
  
  int horas=0;
  float valor=0, X;

    do {

        cout << "Entre com as horas trabalhadas (-1 para terminar):" ;
        cin >> horas ;
        
        cout << "Entre com o valor por hora trabalhada ($00.00):"; 
        cin >> valor ; 
        
      
        if ( horas > 40)
            X= (horas*valor + (0.5*(horas-40)*valor));
        else
            X=(horas*valor);
        cout << " salário bruto é: " << X << endl; 

    }while(horas != -1);
    
}
