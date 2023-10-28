#include<curses.h>
#include<list>
#include<Dibujo.hpp>
#include<Ventana.hpp>
#include<Arkanoid.hpp>
#include<Monkey.hpp>
#include<Proyectil.hpp>

using namespace std;
int main(int argc, char const *argv[])
{
    Ventana ventana;
    Arkanoid* arkanoid1 = new Arkanoid (50,50);
    Monkey* monkey1 = new Monkey (100,21);
    Proyectil* bala = new Proyectil(100,20)

    list<Dibujo*> dibujos;
    dibujos.push_back(arkanoid1);
    dibujos.push_back(monkey1);
    dibujos.push_back(bala);

    list<Actualizable*> actualizables;
    actualizables.push_back(arkanoid1);
    actualizables.push_back(monkey1);
    actualizables.push_back(bala);
    while (true)  //descomentar solo si vcamos a meter dibujos q se muebvan
    {
       int key = getch();
        if (key == 'q' || key== 'Q')
        {
            //salir de juego
             break;
         }
         if (key == 'd' ||key==KEY_LEFT){
             monkey1->DesplazarIzquierda();
         }
         if (key== 'd'||key== KEY_RIGHT){
             monkey1->DesplazarDerecha();
         } 
         
    //     if ( key== KEY_UP){
    //        vaca1->DesplazarArriba();
    //         }
    //     if ( key==KEY_DOWN){
    //         vaca1->DesplazarAbajo();
    //     }
       
         
             if (key=='p')
         {
             bala->CambiarDireccion();
         }        
      

        
        refresh();
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    
}