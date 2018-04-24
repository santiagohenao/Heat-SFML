#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <math.h>


static int xsize=100;
static int ysize=100;
static double dx=1.;
static double dy=1.;
static double v=10e-04;

#include "Block.h"

int main()
{
    Block space[xsize][ysize];

    for(int i=0;i<xsize;i++)
    {
        for(int j=0;j<ysize;j++)
        {
            space[i][j]=Block(i*2,j*2,10);
        }
    }

    #include "window.h"

    return 0;
}
