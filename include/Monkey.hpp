#pragma once
#include<Dibujo.hpp>
#include<Actualizable.hpp>

class Monkey : public Dibujo, public Actualizable

{
private:
    /* data */
public:
    Monkey () : Dibujo("monkearka")
     {

     }
     Monkey(int x, int y) :Dibujo(x,y, "monkearka"){

     }
     void Actualizar()  //(MUEVE Al dibujo)
    {
    //      this->x +=1;
     }
    void DesplazarIzquierda(){
        this->x -= 1;
    }
    void DesplazarDerecha(){
        this ->x +=1;
    }
    ~Monkey () {}
};
