# 五子棋逻辑 (Gomoku) 示例

文件:

- [gomoku.h](gomoku.h#L1)
- [gomoku.cpp](gomoku.cpp#L1)
- [main_gomoku.cpp](main_gomoku.cpp#L1)

构建与运行（Windows，MinGW-w64）：

```powershell
g++ -std=c++17 main_gomoku.cpp gomoku.cpp -o gomoku.exe
./gomoku.exe
```

说明：
- `Gomoku` 类实现了棋盘、落子、以及基于最后一步的胜利检查（横/竖/两对角）。
