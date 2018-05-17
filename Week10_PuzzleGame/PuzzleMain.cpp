#include "Ranking.h"
extern int playFifteenPuzzle(int demension);
void main()
{
	int rank;
	int level = 3;
	cout << "Game Level Selection = ";
	cin >> level;

	if (level == 3) {
		loadRanking("nine_ranking.txt");
		rank = playFifteenPuzzle(level);
		printRanking();
		storeRanking("nine_ranking.txt");
	}
	else if (level == 4) {
		loadRanking("fifteen_ranking.txt");
		int rank = playFifteenPuzzle(level);
		printRanking();
		storeRanking("fifteen_ranking.txt");
	}
	else if (level == 5) {
		loadRanking("twentyfive_ranking.txt");
		int rank = playFifteenPuzzle(level);
		printRanking();
		storeRanking("twentyfive_ranking.txt");
	}
	else if {
		loadRanking("nine_ranking.txt");
		rank = playFifteenPuzzle(level);
		printRanking();
		storeRanking("nine_ranking.txt");
	}
}