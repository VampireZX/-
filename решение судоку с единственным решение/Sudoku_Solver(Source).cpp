#include "Header.h"

bool Sudoku_Solver::SafeChecker(int str, int stlb, char k, vector<vector<char>> board)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[str][i] == k)
            return false;

        if (board[i][stlb] == k)
            return false;

        if (board[3 * (str / 3) + i / 3][3 * (stlb / 3) + i % 3] == k)
            return false;
    }
    return true;
}

void Sudoku_Solver::SolveShowcase(const vector<vector<char>> board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }

}

bool Sudoku_Solver::solver(vector<vector<char>> board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
            {
                for (int num = 1; num < 10; num++)
                {
                    if (SafeChecker(i, j, (char)(num + '0'), board))
                    {
                        board[i][j] = (char)(num + '0');
                        if (solver(board))
                            return true; //сама€ даунска€ рекурси€ какую можно выдумать
                        else { board[i][j] = '.'; }
                    }
                }
                return false;
            }
        }
    }
    SolveShowcase(board);
    return true;
}