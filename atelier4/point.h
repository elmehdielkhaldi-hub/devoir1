#ifndef POINT_H
#define POINT_H

#pragma once

class point
{
public:
void deplace(float,float);
void affiche();
    point();
    point(float,float);
    ~point();

private:
int X;
int Y;


};

#endif