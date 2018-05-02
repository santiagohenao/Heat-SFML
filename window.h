sf::RenderWindow window(sf::VideoMode(400*1.5, 400), "Holi");

sf::View view(sf::FloatRect(0,0, xsize*2*1.5, ysize*2));

while (window.isOpen())
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
    {
        view.move(1,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
    {
        view.move(-1,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
    {
        view.move(0,-1);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
    {
        view.move(0,1);
    }

    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(160);
    window.clear();

    window.setView(view);


    // Calculation zone

    for(int loop=0;loop<1;loop++){

    for(int i=0;i<xsize;i++)
    {
        space[i][0].T=70;
        space[0][i].T=70;
        space[i][99].T=70;
        space[99][i].T=70;
    }

    //for(int i=0;i<xsize;i++)
    //{
    //    for(int j=0;j<ysize;j++)
    //    {
    //        if( (i>=10) && (i<=30) && (j>40) && (j<=60) )
    //        {
    //            space[i][j]=Block(i,j,200);
    //        }
    //    }
    //}


    for(int i=1;i<xsize-1;i++)
    {
        for(int j=1;j<ysize-1;j++)
        {
            //cout << v*dt*( (space[i+1][j].T-2*space[i][j].T+space[i-1][j].T  )/(dx*dx)   ) << endl;
            space[i][j].T+=v*dt*( (space[i+1][j].T-2*space[i][j].T+space[i-1][j].T  )/(dx*dx)  + (space[i][j+1].T-2*space[i][j].T+space[i][j-1].T  )/(dy*dy) );
            space[i][j].update();
            //cout << space[20][40].T << endl;
        }
    }

    //Draw zone

    for(int i=0;i<xsize;i++)
    {
        for(int j=0;j<ysize;j++)
        {
                space[i][j].update();
                window.draw(space[i][j]);
        }
    }
    tim+=dt;
}

    s=std::to_string(tim);

    atext.setString(s);

    window.draw(atext);


    //cout << tim << endl;


    window.display();

}
