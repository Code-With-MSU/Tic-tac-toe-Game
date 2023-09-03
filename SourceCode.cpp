                                                     //NeVeR GiVe Up//
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int player = 1;
    int total_played = 0;
    system("color E4");
    char alp = 'Y';
    string name[2];
    for (int line = 0; line < 6; line++)
    {
        cout << endl;
    }
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t**************************" << endl;
    cout << "\t\t\t\t\t\t\tTic Tac Toe" << endl;
    cout << "\t\t\t\t\t\t**************************" << endl;
    for (int line = 0; line < 17; line++)
    {
        cout << endl;
    }
    system("pause");
    system("CLS");
    for (int line = 0; line < 6; line++)
    {
        cout << endl;
    }
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t**************************" << endl;
    cout << "\t\t\t\t\t\t\t Welcome" << endl;
    cout << "\t\t\t\t\t\t**************************" << endl;
    for (int line = 0; line < 17; line++)
    {
        cout << endl;
    }
    system("pause");
    system("CLS");
    cout << "\n\n\n\n\t\t\tPlayer 1 Enter your name:";
    cin >> name[0];
    cout << "\n\n\n\n\t\t\tPlayer 2 Enter your name:";
    cin >> name[1];
    system("CLS");
    int winPlayer1 = 0, winPlayer2 = 0;
    while (alp == 'Y' || alp == 'y')
    {
        char boxes[10] = { '0','1','2','3','4','5','6','7','8','9' };
        char check[10];
        cout << "\n\n\t\t\t\tTic Tac Toe\n\n";
        cout << "\n\t\t\t" << name[0] << "(X)" << "-" << name[1] << "(O)\n";
        for (int line = 0; line < 6; line++)
        {
            cout << endl;
        }
        cout << "\t\t\t     |     |     " << endl;
        cout << "\t\t\t  " << boxes[1] << "  |  " << boxes[2] << "  |  " << boxes[3] << endl;
        cout << "\t\t\t_____|_____|_____" << endl;
        cout << "\t\t\t     |     |     " << endl;
        cout << "\t\t\t  " << boxes[4] << "  |  " << boxes[5] << "  |  " << boxes[6] << endl;
        cout << "\t\t\t_____|_____|_____" << endl;
        cout << "\t\t\t     |     |     " << endl;
        cout << "\t\t\t  " << boxes[7] << "  |  " << boxes[8] << "  |  " << boxes[9] << endl;
        cout << "\t\t\t     |     |     " << endl;
        //Taking the enteries from the user
        int count = 1;

        while (true)// owing to unlimited moves untill the match is withdrawn
        {
            cout << "\n\n Enter the number in which you want to mark\n\n";
            if (player % 2 != 0)
            {
                player = 1;
            }
            else
            {
                player = 2;
            }

            int choice;
            if (player == 1)
            {
                cout << "\n\n\tPlayer " << player << " " << name[0] << " " << "Enter your move:  ";
                cin >> choice;
            }
            else if (player == 2)
            {
                cout << "\n\n\tPlayer " << player << " " << name[1] << " " << "Enter your move:  ";
                cin >> choice;
            }

            char mark;

            if (player == 1)
            {
                mark = 'X';
            }
            else
            {
                mark = 'O';
            }
            if (choice == 1 && boxes[1] == '1')
            {
                boxes[1] = mark;
            }
            else if (choice == 2 && boxes[2] == '2')
            {
                boxes[2] = mark;
            }
            else if (choice == 3 && boxes[3] == '3')
            {
                boxes[3] = mark;
            }
            else if (choice == 4 && boxes[4] == '4')
            {
                boxes[4] = mark;
            }
            else if (choice == 5 && boxes[5] == '5')
            {
                boxes[5] = mark;
            }
            else if (choice == 6 && boxes[6] == '6')
            {
                boxes[6] = mark;
            }
            else if (choice == 7 && boxes[7] == '7')
            {
                boxes[7] = mark;
            }
            else if (choice == 8 && boxes[8] == '8')
            {
                boxes[8] = mark;
            }
            else if (choice == 9 && boxes[9] == '9')
            {
                boxes[9] = mark;
            }
            else
            {
                cout << "Invalid move " << endl;
                player--;
                count--;
            }
            system("CLS");
            cout << "\n\t\t\t" << name[0] << "(X)" << "-" << name[1] << "(O)\n";
            for (int line = 0; line < 6; line++)
            {
                cout << endl;
            }

            cout << "\t\t\t     |     |     " << endl;
            cout << "\t\t\t  " << boxes[1] << "  |  " << boxes[2] << "  |  " << boxes[3] << endl;
            cout << "\t\t\t_____|_____|_____" << endl;
            cout << "\t\t\t     |     |     " << endl;
            cout << "\t\t\t  " << boxes[4] << "  |  " << boxes[5] << "  |  " << boxes[6] << endl;
            cout << "\t\t\t_____|_____|_____" << endl;
            cout << "\t\t\t     |     |     " << endl;
            cout << "\t\t\t  " << boxes[7] << "  |  " << boxes[8] << "  |  " << boxes[9] << endl;
            cout << "\t\t\t     |     |     " << endl;
            for (int count = 1; count < 10; count++)
            {
                check[count] = boxes[count];
            }
            //Winning possibilities
            if (check[1] == 'X' && check[2] == 'X' && check[3] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[1] == 'X' && check[4] == 'X' && check[7] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[1] == 'X' && check[5] == 'X' && check[9] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[2] == 'X' && check[5] == 'X' && check[8] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[3] == 'X' && check[6] == 'X' && check[9] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[3] == 'X' && check[5] == 'X' && check[7] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[4] == 'X' && check[5] == 'X' && check[6] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[7] == 'X' && check[8] == 'X' && check[9] == 'X')
            {
                cout << "Player 1 is the winner " << name[0] << endl;
                winPlayer1++;
                break;
            }
            else if (check[1] == 'O' && check[2] == 'O' && check[3] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[1] == 'O' && check[4] == 'O' && check[7] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[1] == 'O' && check[5] == 'O' && check[9] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[2] == 'O' && check[5] == 'O' && check[8] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[3] == 'O' && check[6] == 'O' && check[9] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[3] == 'O' && check[5] == 'O' && check[7] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[4] == 'O' && check[5] == 'O' && check[6] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }
            else if (check[7] == 'O' && check[8] == 'O' && check[9] == 'O')
            {
                cout << "Player 2 is the winner " << name[1] << endl;
                winPlayer2++;
                break;
            }

            player++;
            count++;
        }
        system("CLS");
        total_played++;
        cout << "\n\n\n\n\t\t\t\t\t Score Card" << endl;
        cout << "\n\t___________________________________________________________________________________________________" << endl;
        cout << "\n\t\t\t\tTotal number of games played " << total_played << endl;
        cout << "\n\t___________________________________________________________________________________________________" << endl;
        cout << "\n\t\t\tPlayer 1 won games " << name[0] << " " << winPlayer1 << " " << "| |" << " Player 2 won games " << name[1] << " " << winPlayer2 << endl;
        cout << "\n\t___________________________________________________________________________________________________" << endl;
        cout << "\n\n\t\tPress Y or y to play again or any other key to exit" << endl;
        cin >> alp;
        system("CLS");
        player--;
    }
    for (int line = 0; line < 7; line++)
    {
        cout << endl;
    }
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t**************************" << endl;
    cout << "\t\t\t\t\t\t      Thanks for use" << endl;
    cout<<"\t\t\t\t\t\t**************************" << endl;
    cout << "\t\t\t\t\t\t   Hope you enjoyed it" << endl;
    cout << "\t\t\t\t\t\t**************************" << endl;
    cout << "\t\t\t\t\t\t   Made by M.Samiullah" << endl;
    for (int line = 0; line < 17; line++)
    {
        cout << endl;
    }
    system("pause");
    system("CLS");
    return 0;
}