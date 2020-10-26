
#include<Siv3D.hpp>

class GameBoard
{
private:

    // �i�q��`��
    void drawGridLines() const
    {
        // ��������
        for (auto i : { 1, 2 })
        {
            Line(i * CellSize, 0, i * CellSize, 3 * CellSize)
                .draw(4, ColorF(0.25));

            Line(0, i * CellSize, 3 * CellSize, i * CellSize)
                .draw(4, ColorF(0.25));
        }
    }

public:

    // �Z���̑傫��
    static constexpr int32 CellSize = 150;

    // �`��
    void draw() const
    {
        drawGridLines();
    }
};