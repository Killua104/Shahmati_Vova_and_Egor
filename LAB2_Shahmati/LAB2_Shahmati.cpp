#include <iostream>
#define RULES "Rules.txt"
#define BLACK
#define WHITE
using namespace std;

struct Shahmati
{
	struct field
	{
		char pole[7][7];
	};

	struct figure
	{
		int type;
		int color;
		int x, y;
	};

	struct color
	{
		int black;
		int white;
	};

	struct score
	{
		int dead_figures;
	};

	struct player
	{
		char player1[30];
		char player2[30];
	};

	struct match_history
	{
		char winner[35];
		int moves;
	};

	struct rules
	{
		FILE* fp = fopen(RULES, "r");
	};

};

int main()
{
	char figures[50][50]{ "пешка", "конь", "слон", "ладья", "ферзь", "король"};
}