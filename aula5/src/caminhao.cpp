#include "caminhao.hpp"


Caminhao::Caminhao(string marca)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    setVelocidadeMaxima(180.0);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão " << marca;

}


Caminhao::Caminhao(float _velocidadeMaxima, string marca)//:Carro(_velocidadeMaxima)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
 //   setVelocidadeMaxima(_velocidadeMaxima);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão " << marca;

}