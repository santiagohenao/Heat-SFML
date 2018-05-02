#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <math.h>

static double Pi=3.1415926535;

#include "color_functions.h"

using namespace std;

static int xsize=100;
static int ysize=100;
static double dx=1.;
static double dy=1.;
static double v=10e-02;
double dt;

int tim;

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

    cout << R(0.5,2) << endl;

    Block space[xsize][ysize];

    for(int i=0;i<xsize;i++)
    {
        for(int j=0;j<ysize;j++)
        {
            if( (i>=10) && (i<=30) && (j>40) && (j<=60) )
            {
                space[i][j]=Block(i,j,200);
            }
            else
            {
                space[i][j]=Block(i,j,10);
            }
        }
    }


    sf::Font font;
    if (!font.loadFromFile("UbuntuMono-R.ttf"))
    {
        std::cout << "Error loading font\n" ;
    }

    sf::Text atext;
    atext.setFont(font);
    atext.setCharacterSize(20);
    atext.setStyle(sf::Text::Bold);
    atext.setFillColor(sf::Color::White);
    atext.setPosition(250,0);

    std::string s="0";




    #include "window.h"

    return 0;
}
