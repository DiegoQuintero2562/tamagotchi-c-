
#define tamagotchi_h
class Tamagotchi
{
private:
    int vida;
    bool hambre;
    int peso;
public:
    Tamagotchi();
    char nombre[30] ;
    void datos(char*);
    int vidadato();
    int pesodato();
    void tennis(int*,char *);
    char jugartenis;

    class Boca;
    class Estomago;
};
class Comida{
public:
    Comida();
    float cantidad;
    void valor_nutricional(int*,int*);
    char tipo_comida;

};
class Boca{
private:
    int capacidadboca;
    bool masticando;
    int llenar;

public:
    Boca();
    bool Masticar(char*);
    void Ingerir();
        char nombre[30] ;
};
class Tennis{
};
