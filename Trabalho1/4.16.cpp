#include <iostream>

using namespace std;

int main()
{
  
  int horas=0;
  float valor=0, x;

    while (1){

        cout << "Entre com as horas trabalhadas (-1 para terminar):" ;
        cin >> horas ;
        
if ( horas == -1){
break;
}
        cout << "Entre com o valor por hora trabalhada ($00.00):"; 
        cin >> valor ; 
        
      
        if ( horas > 40)
            x = (horas*valor + (0.5*(horas-40)*valor));
        else
            x = (horas*valor);
        cout << " salário bruto é: " << x << endl; 

    }
return 0;
    
}