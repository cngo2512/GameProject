#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    int position;
    int dice;
    int playernum;
    string name;
    int numGuessed;
    int Instructions () {
        while (playernum != 1 || playernum != 2) {
            cout << "Welcome! How many players? (1 or 2): ";
            cin >> playernum;
        
        }
        return playernum;
    }
    
    int rollDice() {
        srand(time(NULL));//set up for random number
        int max = 6;
        dice = rand() % max + 1;
        cout << "The dice has been rolled." << endl;
        return dice;
    }
    
    void Playerguess () {
        cout << "What is your guess?";
        cin >> numGuessed;
    }
    
    void guessRoll (int dice) {
        if (numGuessed == dice) {
        movePosition(dice);
        }
    }
    
    void movePosition (int dice) {
        position += dice;
    }
    
    void printBoard() {
        int board[10][10];
    }
};

class Computer: public Player
{
public:
    Computer()
    {
        name = "Computer";
        position = 0;
    }
    
    
};

int main()
{
    char c;
    c = 56;
    cout << c;
    
    Player player1;
    if (player1.Instructions() == 1) {
        Computer Comp;
        player1.dice = player1.rollDice();
        player1.Playerguess();
        cout << "Player 1 guessed: " << player1.numGuessed;
        
    }
    else {
        player1.dice = player1.rollDice();
        player1.Playerguess();
        cout << "Player 1 guessed: " << player1.numGuessed;
        Player player2;
        player2.Playerguess();
        cout << "Player 2 guessed: " << player2.numGuessed;
    }
    
    system("pause");
    return 0;
}
