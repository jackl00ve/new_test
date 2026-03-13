#include <iostream>
#include "gomoku.h"

int main() {
    Gomoku g(15);
    // 演示一组落子，X(Black) 在 (7,7) 开始横向连成5子
    int r = 7, c = 7;
    for (int i = 0; i < 4; ++i) {
        bool ok = g.place(r, c + i, Cell::Black);
        if (!ok) std::cerr << "place failed at " << r << ',' << c + i << '\n';
    }
    std::cout << "当前棋盘（在最后一步之前）:\n" << g.toString() << '\n';

    // 最后一子
    g.place(r, c + 4, Cell::Black);
    std::cout << "下最后一子后:\n" << g.toString() << '\n';
    if (g.checkWin(r, c + 4)) std::cout << "Black (X) wins!\n";
    else std::cout << "No win yet.\n";

    // 简单演示阻挡情形
    Gomoku g2(15);
    for (int i = 0; i < 5; ++i) g2.place(0, i, Cell::White);
    std::cout << "白棋一行 5 子:\n" << g2.toString() << '\n';
    if (g2.checkWin(0, 2)) std::cout << "White (O) wins!\n";

    return 0;
}
