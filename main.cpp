#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

static int xsize=100;
static int ysize=100;
static double dx=1.;
static double dy=1.;
static double v=10e-02;
double dt;

double tim;

#include "Block.h"

int main()
{
    tim=0;
    double dtx=dx*dx*v;
    double dty=dy*dy*v;

    if(dtx>dty)
    {
        dt=dty*1.1;
    }
    else
    {
        dt=dtx*1.1;
    }

    dt=1;

    cout << dt*v << endl;

    Block space[xsize][ysize];

    for(int i=0;i<xsize;i++)
    {
        for(int j=0;j<ysize;j++)
        {
            if( (i>=10) && (i<=30) && (j>40) && (j<=60) )
            {
                space[i][j]=Block(i,j,100);
            }
            else
            {
                space[i][j]=Block(i,j,50);
            }
        }
    }

    #include "window.h"

    return 0;
}
