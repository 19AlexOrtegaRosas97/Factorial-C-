#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
using namespace std;

 long double factorial(long double num)
    {
        if(num!=1){
        num=num*factorial(num-1);
        }
        //cout<<"Valor final es igual a ->"<<num<<endl;
        return num;
    }

    void llamar_funcion(long double num)
    {
        bool bandera;
        try{
            if(num <= 0){
 			cout<<"Que chistoso :) el parametro debe ser entero positivo"<<endl;
 			bandera=false;
            }
            else{
 			bandera=true;
            }
 		}
        catch (int e){
            cout<<"Error el parametro No puede tener letras"<<endl;
            bandera=false;
        }
	if(bandera==true){
            try{
                cout<<"El factorial es: "<<factorial(num);
                cout<<endl;
            }
            catch (int e){
                cout<<"Error los parametros"<<endl;
            }

        }
    }


#endif // FUNCIONES_H_INCLUDED
