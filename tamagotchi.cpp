#include "tamagotchi.h"
#include <iostream>
using namespace std;
Tamagotchi::Tamagotchi( ){
    vida=100;
    hambre=true;
    peso=20;

}
void Tamagotchi::datos(char* _nombre){
    int cont=0;
    while(1){
        if (*(_nombre+cont) == '\0')
            break;
            cont++;
}
    for(int i=0;i<cont;i++){
        nombre[i]=*(_nombre+i);
    }
}
int Tamagotchi::vidadato(){
    return vida;
}
int Tamagotchi::pesodato(){
    return peso;
}
void Tamagotchi::tennis(int*peso,char *nombre){
    bool ban=true;
    while(ban){
    cout<<"Quieres que "<<nombre<<" juegue tennis?(1 para si,0 para no)"<<endl;
    cin>>jugartenis;
    int ascii=(int)jugartenis;
    while(1){
    if (ascii>=48 && ascii<=49){
        if (ascii==49){
    ban=false;
    *peso-=5;
        }
    if(ascii==48){
    ban=false;
    }
        }

    else{cout<<"Introduzca un valor valido"<<endl;}
    break;
    }
    }
}


Comida::Comida(){
cantidad=0;
bool ban=true;
while(ban){
cout<<"Ingrese el tipo de comida que se le va a dar(0 ninguna,1 vegetales,2 carne,3 dulces): ";
cin>> tipo_comida;
int ascii=(int)tipo_comida;
if (ascii>=48 && ascii<=51){
ban=false;}
else{cout<<"Introduzca un valor valido"<<endl;}
}

}
void Comida::valor_nutricional(int*vida,int *peso){

    int cambio=0;
    int cambiopeso=0;
        if (tipo_comida=='0'){
            cambio-=10;
            cambiopeso-=5;
        }
        if(tipo_comida=='1'){
            cambio+=50;
            cambiopeso+=3;
        }
        if(tipo_comida=='2'){
            cambio+=25;
            cambiopeso+=5;
        }
        if(tipo_comida=='3'){
            cambio+=15;
            cambiopeso+=10;
        }

        if(cambio+*vida<=100 && cambio+*vida>=0){
        *vida+=cambio;
        }
        if(*vida<0){
            *vida=0;
        }
        if(*vida>100){
            *vida=100;
        }
        if(cambiopeso+*peso<=100 && cambiopeso+*peso>=0){
        *peso+=cambiopeso;
        }
        if(*peso<0){
            *peso=0;
        }
        if(*peso>100){
            *peso=100;
        }
}
Boca::Boca(){
    capacidadboca=10;
    llenar=0;
    masticando=true;
}
bool Boca::Masticar(char*nombre){
    int cont=0;
    while(1){
        if (*(nombre+cont) == '\0')
            break;
            cont++;
}
    for(int i=0;i<cont;i++){
        nombre[i]=*(nombre+i);
    }
    if(llenar>capacidadboca){
        cout<<nombre<<" no puede masticar mas, ya que esta lleno. "<<endl;
        masticando=false;
    }
    else{
        cout<<nombre<<" esta masticando..."<<endl;
        llenar++;
    }
    return masticando;
}


