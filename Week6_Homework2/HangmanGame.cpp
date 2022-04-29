#include "Hangman.h"
struct WordPair {
	string eng;
	string kor;
};
class Mydcic {
	WordPair words[MAXWORDS];
	int nWord;
public:
	void add(string eng, string kor);
	void load(string filename);
	void store(string filename);
	void print();
	string getEng(int id);
	string getKor(int id);
};
void main()
{
	Hangman game;
	game.play("galaxy");
}