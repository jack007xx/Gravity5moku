
#include<Siv3D.hpp>

class GameBoard
{
private:

    // 格子を描く
    void drawGridLines() const
    {
        // 線を引く
        for (auto i : { 1, 2 })
        {
            Line(i * CellSize, 0, i * CellSize, 3 * CellSize)
                .draw(4, ColorF(0.25));

            Line(0, i * CellSize, 3 * CellSize, i * CellSize)
                .draw(4, ColorF(0.25));
        }
    }

public:

    // セルの大きさ
    static constexpr int32 CellSize = 150;

    // 描画
    void draw() const
    {
        drawGridLines();
    }
};