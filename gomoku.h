#pragma once
#include <vector>
#include <string>

enum class Cell { Empty = 0, Black = 1, White = 2 };

class Gomoku {
public:
    explicit Gomoku(int n = 15);
    bool place(int row, int col, Cell player); // 放置棋子，成功返回 true
    bool checkWin(int row, int col) const;     // 检查以 (row,col) 为最后一步是否胜利
    Cell at(int r, int c) const;
    void reset();
    std::string toString() const;
    int size() const { return n_; }

private:
    int n_;
    std::vector<Cell> board_; // 行主序 n_*n_
    bool inBounds(int r, int c) const;
    int countDirection(int r, int c, int dr, int dc, Cell player) const;
};
