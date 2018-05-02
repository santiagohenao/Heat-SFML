double R(double arg,int option)
{
    switch(option)
    {
        case 1 : return tanh(arg*3)*255;
        case 2 : return arg*255;
        case 3 : return abs(sin(arg*3*Pi/2)+pow(arg,2))/1.55*255;
    }
}
