
#include<Siv3D.hpp>

class GameBoard
{
private:

    // Šiq‚ğ•`‚­
    void drawGridLines() const
    {
        // ü‚ğˆø‚­
        for (auto i : { 1, 2 })
        {
            Line(i * CellSize, 0, i * CellSize, 3 * CellSize)
                .draw(4, ColorF(0.25));

            Line(0, i * CellSize, 3 * CellSize, i * CellSize)
                .draw(4, ColorF(0.25));
        }
    }

public:

    // ƒZƒ‹‚Ì‘å‚«‚³
    static constexpr int32 CellSize = 150;

    // •`‰æ
    void draw() const
    {
        drawGridLines();
    }
};