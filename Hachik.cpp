#include <iostream>
using namespace std;


void main ()
{
    double x,y;
    cout<<"Введите координаты точки: ";
    cin>>x>>y;
    if ((y>0.5)&&(x*x+y*y>1)) cout<<"Точка принадлежит области";
    else if ((x*x+y*y<1)) && (y < 0.5)
            cout<<"Точка не принадлежит области";
        else if ((x*x+y*y==1) && (y>0.5))
            cout<<"Точка лежит на границе области";
}
