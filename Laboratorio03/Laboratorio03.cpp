#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int menu, cant, total, respu;
  while (respu!=2)

  {
      cout <<":::::::::MENU:::::::::"<<endl;
      cout << "Seleccione su plato digitando el numero del menu :" << endl;
      cout << "1 Hamburguesa :" << endl;
      cout << "2 Tacos :" << endl;
      cout << "3 Burritos :" << endl;
      cout << "4 Pizza :" << endl;
      cout << "Opcion -->";
      cin >> menu;
      
      switch(menu)
      {
          case 1:
          cout << "Usted ha seleccionado HAMBURGUESAS:" << endl;
          cout << "El plato viene con carne a la plancha, queso americano, lechuga, tomate y papas francesas de acopanamiento." <<endl;
          cout << "VALOR $12.00" <<endl;
          cout << "Cuantas desea ordenar: "<<endl;
          cin >> cant;
          cout << "Su total a pagar es de: ", total=(cant*12); 
          break;
        case 2:
        cout << "Usted ha seleccionado TACOS: " << endl;
        cout << "El plato viene con 3 tacos con carne de su preferencia (Pastor, res o pollo) tomate, cebolla y cilantro." <<endl;
        cout << "VALOR $10.00" <<endl;
        cout << "Cuantas desea ordenar: "<<endl;
        cin >> cant;
        cout << "Su total a pagar es de: ", total=(cant*10); 
        break;
      case 3:
      cout << "Usted ha seleccionado BURRITOS:" << endl;
      cout << "El plato viene con carne de su preferencia (Res o pollo), tomate, arroz, aguacate, frijoles." <<endl;
      cout <<"VALOR $15.00"<< endl;
      cout << "Cuantas desea ordenar: "<<endl;
      cin >> cant;
      cout << "Su total a pagar es de: ", total=(cant*15); 
      break;
     
    case 4:
    cout << "Usted ha seleccionado PIZZA: " <<endl;
    cout << "El plato contiene una pizza grande de 8 porciones." <<endl;
    cout << "VALOR $18.00"<< endl;
    cout << "Cuantas desea ordenar: "<<endl;
    cin >> cant;
    cout << "Su total a pagar es de: ", total=(cant*12); 
     break;
     
     
    default:
      cout << "ERROR, No tenemos ese menu" << endl;
      break;
    }
    cout << "Desea tomar otra orden: 1. SI 2. NO: ";
    cin >> respu;

    return 0;
  }
    
}


