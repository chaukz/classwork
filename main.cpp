#include <iostream>
#include <ctime>
#include <unistd.h>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer, bool &running);
bool checkWin(char *spaces, char player, char computer);
bool checkTie(char *spaces);
bool checkLose(char *spaces, char player, char computer);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces); // pass array to function decays to ptr

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer))
        {
            std::cout << "Player wins!" << std::endl;
            running = false;
            break;
        }
        if (checkTie(spaces))
        {
            std::cout << "It's a tie!" << std::endl;
            running = false;
            break;
        }
        computerMove(spaces, computer, running);
        drawBoard(spaces);
    }
    return 0;
}
void drawBoard(char *spaces)
{
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << std::endl;
}
void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;
        number--; // decrement to match array index
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
    } while (number < 0 || number > 8);
}

void computerMove(char *spaces, char computer, bool &running)
{
    
    while (true)
    {

        int number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            sleep(1);
            break;
        }
    }
}
bool checkWin(char *spaces, char player, char computer)
{
   switch (spaces[0])
    {
    case 'X':
        if (spaces[1] == 'X' && spaces[2] == 'X')
            return true;
        if (spaces[3] == 'X' && spaces[6] == 'X')
            return true;
        if (spaces[4] == 'X' && spaces[8] == 'X')
            return true;
        break;
    case 'O':
        if (spaces[1] == 'O' && spaces[2] == 'O')
            return true;
        if (spaces[3] == 'O' && spaces[6] == 'O')
            return true;
        if (spaces[4] == 'O' && spaces[8] == 'O')
            return true;
        break;
    }
    switch (spaces[1])
    {
    case 'X':
        if (spaces[4] == 'X' && spaces[7] == 'X')
            return true;
        break;
    case 'O':
        if (spaces[4] == 'O' && spaces[7] == 'O')
            return true;
        break;
    }
    switch (spaces[2])
    {
    case 'X':
        if (spaces[5] == 'X' && spaces[8] == 'X')
            return true;
        if (spaces[4] == 'X' && spaces[6] == 'X')
            return true;
        break;
    case 'O':
        if (spaces[5] == 'O' && spaces[8] == 'O')
            return true;
        if (spaces[4] == 'O' && spaces[6] == 'O')
            return true;
        break;
    }
    switch (spaces[3])
    {
    case 'X':
        if (spaces[4] == 'X' && spaces[5] == 'X')
            return true;
        break;
    case 'O':
        if (spaces[4] == 'O' && spaces[5] == 'O')
            return true;
        break;
    }
    switch (spaces[6])
    {
    case 'X':
        if (spaces[7] == 'X' && spaces[8] == 'X')
            return true;
        break;
    case 'O':
        if (spaces[7] == 'O' && spaces[8] == 'O')
            return true;
        break;
    }
    return false;
}
bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    return true;
}
bool checkLose(char *spaces, char player, char computer)
{
    switch (spaces[0])
    {
    case 'O':
        if (spaces[1] == 'O' && spaces[2] == 'O')
            return true;
        if (spaces[3] == 'O' && spaces[6] == 'O')
            return true;
        if (spaces[4] == 'O' && spaces[8] == 'O')
            return true;
        break;
    case 'X':
        if (spaces[1] == 'X' && spaces[2] == 'X')
            return true;
        if (spaces[3] == 'X' && spaces[6] == 'X')
            return true;
        if (spaces[4] == 'X' && spaces[8] == 'X')
            return true;
        break;
    }
    return false;   

}
