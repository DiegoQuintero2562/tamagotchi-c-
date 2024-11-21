#include <iostream>
#include "tamagotchi.h"
using namespace std;

int main(){
    int ascii;
   bool ban=true;
    int vida,peso;
    char otravez;
    Tamagotchi tamagotchi1;
    char nombre[30];
cout<<"Ingrese el nombre de su tamagotchi "<<endl;
cin>>nombre;
vida=tamagotchi1. vidadato();
peso=tamagotchi1.pesodato();
    while (ban){
    Comida food;
    Boca mouth;
    food.valor_nutricional(&vida,&peso);
    mouth.Masticar(nombre);
    cout<<nombre<<" tiene "<<vida<<" de vida y "<<peso<<" de peso."<<endl;
    tamagotchi1.datos(nombre);
    tamagotchi1.tennis(&peso,nombre);
    cout<< "vida de "<<nombre<<"= "<<vida<<", peso = "<<peso<<endl;
    if (vida>0 && vida<=30){
        cout<<"CUIDADO!, "<<nombre<<" tiene poca vida, alimentelo para evitar que se muera."<<endl;
    }
    if(vida==0){
        cout<<"su tamagotchi"<<nombre<<" ha muerto."<<endl;
        exit(1);
    }
    if (peso>0 && peso<=10){
        cout<<"CUIDADO!, "<<nombre<<" esta muy flaco, alimentelo para evitar que se muera de hambre y evite hacer deporte."<<endl;
    }
    if(peso==0){
        cout<<"su tamagotchi"<<nombre<<" ha muerto por no comer."<<endl;
           exit(1);
    }
    if (peso>=50 && peso<100){
        cout<<"CUIDADO!, "<<nombre<<" esta muy gordo, ejercitelo para evitar que se muera de sobrepeso."<<endl;
    }
    if(peso==100){
        cout<<"su tamagotchi"<<nombre<<" ha muerto de un ataque cardiaco."<<endl;
           exit(1);
    }
    cout<<"quiere que "<<nombre<<" vuelva a intentar comer y hacer ejercicio (1 para si, 0 para no) "<<endl;
    cin>>otravez;
    ascii=(int)otravez;
    while(1){
    if (ascii>=48 || ascii<=49){
            if (ascii==49){
                break;
            }
            if(ascii==48){
                ban=false;
                }
            }
    else{
    cout<<"Introduzca un valor valido"<<endl;
    }
   }

 }
    return 0;
}

