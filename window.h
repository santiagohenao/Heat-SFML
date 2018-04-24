sf::RenderWindow window(sf::VideoMode(400, 400), "Holololo");

sf::View view(sf::FloatRect(0,0, xsize*2, ysize*2));

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
    window.setFramerateLimit(60);
    window.clear();

    window.setView(view);

    //Draw zone

    for(int i=0;i<xsize;i++)
    {
        for(int j=0;j<ysize;j++)
        {
            window.draw(space[i][j]);
        }
    }



    window.display();

}
