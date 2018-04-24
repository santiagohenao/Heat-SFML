class Block : public sf::Drawable
{
    public:
        int row, col;  // position in matrix
        double T;

        //Constructors

        Block(int rrow, int ccol, double TT)
        {
            row=rrow; col=ccol; T=TT;
            marker=sf::CircleShape(1);
            marker.setPosition( row,col);
        }
        Block(){}
    private:
        sf::CircleShape marker;
        void update(void)
        {
            //
        }
    protected:
        void draw(sf::RenderTarget& target, sf::RenderStates state) const
        {
            target.draw(marker);
        }
};
