
#include <iostream>


using namespace std;

int datos_cuenta(int clave);
int wallet(int, int);


int main () {

    /**
     *  Ejercicio: un banco desea implementar un programa para un atm para el cual se requieren las siguientes 
     * funcionalidades en un menú 
     * 
     * 1. Inicio de sesion 
     *  retiro de multiplos de 5  (si desea imprimir recibo (nombre, transaccion, y cantidad))
     * 2. Deposito multiplos de 5 (si desea imprimir recibo (nombre, transaccion y cantidad)
     *  salir o hacer otra transaccion
    */


   int token, acceso,cantidad, opc;
   char respuesta = 'N';
    
    acceso = datos_cuenta(4890);
    

   do
   {
    
    cout << " Ingrese el pin de acceso de su cuenta : "<<endl;
    cin >> token;

    if (token != acceso){

        cout << "Su clave de acceso es incorrecta, intentelo nuevamente " <<endl;

    } else {

        cout << "Bienvenido a su menu de transacciones "<<endl; 

        cout << "==============="<<endl;
        cout << "1. Deposito"<<endl;
        cout << "2. Retiro"<<endl;
        cout << "==============="<<endl;

        cin >> opc;

        switch (opc)
        {
        
       
        case 1: 

            cout << "Cantidad que puede retirar "<<endl;
            cout << "=====================" << endl;
            cout << "$5.00" << endl;
            cout << "$10.00" << endl;
            cout << "$15.00" << endl;
            cout << "$20.00" << endl;
            cout << "$25.00" << endl;
            cout << "$30.00" << endl;
            cout << "$35.00" << endl;
            cout << "=====================" << endl;

            cout << wallet (saldo_final) <<endl;
               

        break;

        case 2:

            cout << "Cantidad que puede retirar"<<endl;
            cout << "=====================" << endl;
            cout << "$5.00" << endl;
            cout << "$10.00" << endl;
            cout << "$15.00" << endl;
            cout << "$20.00" << endl;
            cout << "$25.00" << endl;
            cout << "$30.00" << endl;
            cout << "$35.00" << endl;
            cout << "=====================" << endl;


        break;
        
        default:

            cout << "ERROR: no se reconoce la opcion seleccionada"<< endl;

            break;
        }



    }


   } while (respuesta != 'Y' || respuesta != 'y');
   

 

}
   


int datos_cuenta(int clave) {

    int pin;
    pin = 4890;
    return pin;
}

int wallet ( int saldo, int retiro) {

     int ahorro;
     ahorro = 1820;
     int monto;
     monto = 0;
     int saldo_final;
  

    cout << " Ingrese la cantidad a retirar : " ;
    cin >> monto;

     if (monto == 5 ) {

        saldo_final = ahorro - monto;
        cout << "saldo anterior : " << ahorro << endl;
        cout << "retiro : " << monto << endl;
        cout << "saldo final : " << saldo_final << endl;

     } else if ( monto == 10 ) {

        saldo_final = ahorro - monto;
        cout << "saldo anterior : " << ahorro << endl;
        cout << "retiro : " << monto << endl;
        cout << "saldo final : " << saldo_final << endl;

     } else if ( monto  == 15) {

        saldo_final = ahorro - monto;
        cout << "saldo anterior : " << ahorro << endl;
        cout << "retiro : " << monto << endl;
        cout << "saldo final : " << saldo_final << endl;

     } else {

        cout << "el cajero no permite este tipo de retiros." << endl;
     }
        return (saldo_final);

}




