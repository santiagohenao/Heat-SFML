class Block : public sf::Drawable
{
    public:
        int row, col;  // position in matrix
        double T;

        sf::CircleShape marker;

        sf::Color color;

        //Constructors

        Block(int rrow, int ccol, double TT)
        {
            row=rrow; col=ccol; T=TT;
            marker=sf::CircleShape(1.5);
            marker.setPosition(2*row,2*col);
            //
            color=sf::Color(R(T/255.,1),R(T/255.,2),R(T/255.,3));
            marker.setFillColor(color);
        }
        Block(){}


        void update(void)
        {
            color=sf::Color(R(T/255.,1),R(T/255.,2),R(T/255.,3));
            marker.setFillColor(color);
        }
    protected:
        void draw(sf::RenderTarget& target, sf::RenderStates state) const
        {
            target.draw(marker);
        }
};
