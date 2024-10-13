struct Shahmati
{
	struct field
	{
		char kontur[7][7];
		char pole[7][7];
	};

	struct figure
	{

	};

	struct color
	{
		int black;
		int white;
	};

	struct score
	{

	};

	struct score
	{

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