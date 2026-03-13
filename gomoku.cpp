#include "gomoku.h"
#include <sstream>
#include <iomanip>

Gomoku::Gomoku(int n) : n_(n), board_(n * n, Cell::Empty) {}

bool Gomoku::inBounds(int r, int c) const {
    return r >= 0 && r < n_ && c >= 0 && c < n_;
}

Cell Gomoku::at(int r, int c) const {
    if (!inBounds(r, c)) return Cell::Empty;
    return board_[r * n_ + c];
}

void Gomoku::reset() {
    std::fill(board_.begin(), board_.end(), Cell::Empty);
}

bool Gomoku::place(int row, int col, Cell player) {
    if (!inBounds(row, col)) return false;
    if (board_[row * n_ + col] != Cell::Empty) return false;
    board_[row * n_ + col] = player;
    return true;
}

int Gomoku::countDirection(int r, int c, int dr, int dc, Cell player) const {
    int cnt = 0;
    int rr = r + dr, cc = c + dc;
    while (inBounds(rr, cc) && board_[rr * n_ + cc] == player) {
        ++cnt;
        rr += dr; cc += dc;
    }
    return cnt;
}

bool Gomoku::checkWin(int row, int col) const {
    if (!inBounds(row, col)) return false;
    Cell player = board_[row * n_ + col];
    if (player == Cell::Empty) return false;

    // 四个方向：水平、垂直、主对角、副对角
    const int dirs[4][2] = {{0,1},{1,0},{1,1},{1,-1}};
    for (int i = 0; i < 4; ++i) {
        int dr = dirs[i][0], dc = dirs[i][1];
        int total = 1 + countDirection(row, col, dr, dc, player) + countDirection(row, col, -dr, -dc, player);
        if (total >= 5) return true;
    }
    return false;
}

std::string Gomoku::toString() const {
    std::ostringstream oss;
    oss << "   ";
    for (int c = 0; c < n_; ++c) oss << std::setw(2) << c << ' ';
    oss << '\n';
    for (int r = 0; r < n_; ++r) {
        oss << std::setw(2) << r << ' ';
        for (int c = 0; c < n_; ++c) {
            char ch = '.';
            Cell v = board_[r * n_ + c];
            if (v == Cell::Black) ch = 'X';
            else if (v == Cell::White) ch = 'O';
            oss << ' ' << ch << ' ';
        }
        oss << '\n';
    }
    return oss.str();
}
