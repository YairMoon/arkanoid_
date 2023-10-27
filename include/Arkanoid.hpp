#pragma once
#include<Dibujo.hpp>
#include<Actualizable.hpp>

class Arkanoid : Dibujo, public Actualizable
{
private:
    /* data */
public:
    Arkanoid () : Dibujo("fondo")
    {
    }
    Arkanoid(int x, int y) :Dibujo(x,y,"fondo"){
    }

    ~Arkanoid () {}
};