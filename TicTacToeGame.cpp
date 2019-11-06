// TicTacToeGame

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

string GameDesignArray[5][5] = {
    
    {"o","|","x","|","x"},
    {"-","|","-","|","-"},
    {"x","|","o","|","x"},
    {"-","|","-","|","-"},
    {"x","|","x","|","o"},
};

void printArray(){
    int rows, columns;
    
    cout << "\n\n\n";
    for (rows = 0; rows < 5; rows++){
        cout << "\t";
        for (columns = 0; columns < 5; columns++)
        {
            cout << GameDesignArray[rows][columns] << " ";
        }
        cout << endl;
    }
    cout << "\n";
}

bool startGame();

int main(){
    printArray();
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    system("PAUSE");
    int winner_Num = startGame();
    cout << winner_Num << endl;
    return 0;
}

void goPlayer();
void goComputer();

bool players_Turn = true;

string num_Array[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

bool startGame(){
    int rows, columns, num = 0;
    for (rows = 0; rows < 5; rows+=2){
        for (columns = 0; columns < 5; columns+=2){
            GameDesignArray[rows][columns] = num_Array[num];
            num++;
        }
    }
    printArray();
    bool game_Ended = false;
    while(!game_Ended){
        //players_Turn ? goPlayer() : goComputer();
        if (players_Turn) goPlayer(); else goComputer();
    }
    return false;
}

int locate_Array[9][2] = {{0,0}, {0,2}, {0,4}, {2,0}, {2,2}, {2,4}, {4,0}, {4,2}, {4,4}};

void goPlayer(){
    cout << "Player, it's your turn!" << endl;
    bool is_Valid = false;
    while (!is_Valid){
        string Option;
        cin >> Option;
        for (int i = 0; i < 9; i++){
            if (Option == num_Array[i]){
                if (GameDesignArray[locate_Array[i][0]][locate_Array[i][1]] == Option){
                    GameDesignArray[locate_Array[i][0]][locate_Array[i][1]] = "o";
                    is_Valid = true;
                }
                printArray();
            }
        }
        ////!is_Valid ? cout << "Invalid input." << endl : is_Valid = true;
        if (!is_Valid)cout << "Invalid input." << endl;
    }
    players_Turn = false;
}

void goComputer(){
    cout << "It's the computer's turn." << endl;
    srand (time(NULL));
    int i = rand() % 9;
    bool is_Valid = false;
    while (!is_Valid){
        i = rand() % 9;
        cout << i + 1;
        //Sleep(1000);
        if (GameDesignArray[locate_Array[i][0]][locate_Array[i][1]] == num_Array[i]){
            GameDesignArray[locate_Array[i][0]][locate_Array[i][1]] = "x";
            is_Valid = true;
        }
    }
    printArray();
    players_Turn = true;
}