#include <iostream>

using namespace std;
//Este programa demostrara como c++ trabaja la Herencia
class Mago // definición de la clase padre
{
public:
    Mago () //constructor que solamente reserva memoria ram
    {
    }
    Mago (int cantidadPoder, int cantidadVida, string nombre)//constructor que reserva memoria Ram y asigna valores al objeto
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida;
        mNombre = nombre;
    }
    int getVida ()
    {
        return mCantidadVida;
    }
    string getNombre()
    {
        return mNombre;
    }
protected:
    int mCantidadPoder, mCantidadVida;
    string mNombre;
};
class MagoHielo: public Mago
{
public:
    MagoHielo(int cantidadPoder, int cantidadVida, string nombre) : Mago (cantidadPoder,cantidadVida, nombre)
    {
        mCantidadPoder = cantidadPoder+1;
        mCantidadVida = cantidadVida+1;
        mNombre = nombre;
    }
};
class MagoFuego:public Mago
{
public:
    MagoFuego(int cantidadPoder, int cantidadVida, string nombre): Mago (cantidadPoder, cantidadVida, nombre)
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida+100;
        mNombre = nombre;
    }
};
int main ()
{
    Mago Gandalf (11, 100, "Gandalf");
    cout << "El nombre del mago es: "<< Gandalf.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Gandalf.getVida () << endl;
    MagoHielo Dumbeldore (11, 100, "Dumbeldore");
    cout << "El nombre del mago es: "<< Dumbeldore.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Dumbeldore.getVida ()<< endl;
    MagoFuego Harry (11, 100, "Harry");
    cout << "El nombre del mago es: "<< Harry.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Harry.getVida() << endl;
}
