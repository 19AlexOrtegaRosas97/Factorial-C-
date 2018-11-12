#include <iostream>
#include "funciones.h"
#include <windows.h>
using namespace std;
int main()
{
    system("color 70");
    long double numerito;
    int opc;
    bool bandera=true;
    while(bandera==true){
    cout<<"                                                                                             #ALEJANDRO ORTEGA ROSAS#"<<endl;
    cout<<" ******** FACTORIAL MAX ********* "<<endl;
    cout<<endl;
    cout<<" INGRESA EL NUMERO: ";
    cin>>numerito;
    cout<<endl;
    cout<<endl;
    llamar_funcion(numerito);
    cout<<" Deseas volver a utilizarlos \n 1)SI 0)NO \n ";
    cin>>opc;
    if(opc!=1)
    {
        bandera==false;
        system("color 07");
        cout<<" ======================= Hasta Pronto :* ============================"<<endl;
        cout<<endl;
        break;
    }
    else{
        system("cls");
    }
    }
    return 0;
}
