#pragma once
#include<Dibujo.hpp>
#include<Actualizable.hpp>

class Arkanoid : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Arkanoid () : Dibujo("fondo")
    {
    }
    Arkanoid(int x, int y) :Dibujo(x,y,"fondo"){
    }
    void Actualizar()
    {
    
    }

    ~Arkanoid () {}
};