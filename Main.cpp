
# include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include "GameBoard.cpp"

void Main()
{  
    // 背景色
    Scene::SetBackground(ColorF(0.8, 1.0, 0.9));

    GameBoard gameBoard;

    while (System::Update())
    {
        gameBoard.draw();
    }
}
