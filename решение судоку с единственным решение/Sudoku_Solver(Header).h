#include <iostream>
#include <vector>
using namespace std;

class Sudoku_Solver {
public:
	bool solver(vector<vector<char>>);
private:
	void SolveShowcase(const vector<vector<char>>);
	bool SafeChecker(int, int, char, vector<vector<char>>);
};
