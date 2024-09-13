#include <iostream>

using namespace std;

void Fibonacci(){
        int numero;
        int primerNumeroDeLaSerie = 1;

        int fibonacci = 0;
        int siguienteNumeroDeLaSerie = 0;

        cout<<"Ingrese un numero positivo"<<endl;
        cin>>numero;

        if(numero<=0){
            cout<<"Numero no valido"<<endl;

        }else{

                do{
                    cout<<fibonacci<<endl;

                    siguienteNumeroDeLaSerie = primerNumeroDeLaSerie;
                    primerNumeroDeLaSerie = fibonacci;
                    fibonacci = siguienteNumeroDeLaSerie + primerNumeroDeLaSerie;

                }while(fibonacci<=numero);
                }
}

int main(){

    int menuOption;

    do{
        cout<< "---Bienvenido al programa---"<<endl;
        cout<< "1.Fibonacci"<<endl;
        cout<< "2.Salir"<<endl;

        cin>>menuOption;

        if(menuOption>2 || menuOption<1){

            cout<<"Ingrese un numero valido"<<endl;

        }else{

            switch(menuOption){

                case 1: Fibonacci();
                        break;
                case 2: cout<<"Adios!"<<endl;
                        break;

                }
            }

     }while(menuOption != 2);

return 0;

}
