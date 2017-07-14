#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int time=0;
	int num1, num2, score1=0, score2=0, toss;
	char option;

	srand(time);

	cout << "Notice!\n\tThis game is known as Heads & Tails. In this game you and computer\n\twill enter numbers ranging from 1-6, if the numbers matched then\n\teither of you will be OUT and turn of other will begin in the\n\tsame way.\n\n\t Will you like to play the Game?(Y/N) :";
	cin >> option;

	if(option!='y' && option!='Y')
	{
		system("cls");
		cout << "\n\tGOOD BYE\n\n";
	}
	else
	{
		system("cls");

		cout << "What will you choose? Heads or Tails (H/T) :";
		cin >> option;

		cout<< "\nEnter a number for tossing :";
		cin >> num1;
		num2 = rand()%6+1;
		cout << "Computer Entered :" << num2;
		toss=(num1+num2)%2;
		
		if((option=='H' || option=='h' && toss==1)||(option=='T' || option=='t' && toss==0))
		{
			if(option=='H' || option=='h' && toss==1)
			{
				cout << "\nYou've entered Heads and You've won the toss.";
			}
			else if(option=='T' || option=='t' && toss==0)
			{
				cout << "\nYou've entered Tails and You've won the toss.";
			}
			cout << "\n\nWhat will you choose? Batting or Bawling (H/T) :";
			cin >> option;

			if(option=='H' || option=='h')
			{
				system("cls");

				cout << "\nYou're Batting. \n\n";
				cout << "Enter a number :";
				cin >> num1;
				num2 = rand()%6+1;
				cout << "Computer Entered :" << num2;

				while(num1!=num2 && (num1>0 && num1<7))
				{
					score1+=num1;
					cout << "\n\nEnter a Number :";
					cin >> num1;
					num2 = rand()%6+1;
					cout << "Computer Entered :" << num2;
				}

				cout << "\n\t\t\tYou are OUT. \n\t\t\tYour Score is " << score1;
				cout << "\nComputer is Batting. \n\n";
				
				num2=0;
				do{
					score2+=num2;
					cout << "\n\nEnter a number :";
					cin >> num1;
					if(num1>6 || num1<0)
					{
						while(num1>6 || num1<0)
						{
							cout << "\nEnter a number :";
							cin >> num1;
						}
					}
					num2=rand()%6+1;
					cout << "Computer Entered :" <<num2;
				}while(num1!=num2);

				cout << "\n\t\t\tComputer is OUT. \n\t\t\tComputers score is " << score2;
				
				if(score1>score2)
				{
					cout << "\n\t\t\tYou WON.\n\t\t\tCONGRATULATIONS\n\nThank you for playing Please ";
				}
				if(score1<score2)
				{
					cout << "\n\t\t\tComputer WON.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
				}
				if(score1==score2)
				{
					cout << "\n\t\t\tGame Drawn.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
				}
			}
			else if(option=='T' ||option=='t')
			{
				system("cls");

				cout << "Computer is Batting. \n\n";
				
				num2=0;
				do{
					score2+=num2;
					cout << "\n\nEnter a number :";
					cin >> num1;

					if(num1>6 || num1<0)
					{
						while(num1>6 || num1<0)
						{
							cout << "\nEnter a number :";
							cin >> num1;
						}
					}
					num2=rand()%6+1;
					cout << "\nComputer Entered :" <<num2;
					}while(num1!=num2);

				cout << "\n\t\t\tComputer is OUT. \n\t\t\tComputers score is " << score2;
				
				cout << "\nYou're Batting. \n\n";
				cout << "\nEnter a number :";
				cin >> num1;
				num2 = rand()%6+1;
				cout << "Computer Entered :" << num2;

				while(num1!=num2 && (num1>0 && num1<7))
				{
					score1+=num1;
					cout << "\n\nEnter a Number :";
					cin >> num1;
					num2 = rand()%6+1;
					cout << "Computer Entered :" << num2;
				}
				
				cout << "\n\t\t\tYou are OUT. \n\t\t\tYour Score is " << score1;
				
				if(score1>score2)
				{
					cout << "\n\t\t\tYou WON.\n\t\t\tCONGRATULATIONS\n\nThank you for playing Please ";
				}
				if(score1<score2)
				{
					cout << "\n\t\t\tComputer WON.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
				}
				if(score1==score2)
				{
					cout << "\n\t\t\tGame Drawn.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
				}	
			}
		}
		else if((option=='H' || option=='h' && toss==0)||(option=='T' || option=='t' && toss==1))
		{
			if(option=='H' || option=='h' && toss==0)
			{
				cout << "You've entered Heads and Computer has won the toss.";
			}
			else if(option=='T' || option=='t' && toss==0)
			{
				cout << "You've entered Tails and Computer has won the toss.";
			}

			toss=rand()%2;
			if(toss==0)
			{
				cout << "\nComputer decides to Bat. You are Bawling.";
				
				num2=0;
				do{
						score2+=num2;
						cout << "\n\nEnter a number :";
						cin >> num1;

						if(num1>6 || num1<0)
						{
							while(num1>6 || num1<0)
							{
								cout << "\nEnter a number :";
								cin >> num1;
							}
						}
						num2=rand()%6+1;
						cout << "Computer Entered :" <<num2;
					}while(num1!=num2);

					cout << "\n\t\t\tComputer is OUT. \n\t\t\tComputers score is " << score2;

					cout << "\nYou're Batting. \n\n";
					cout << "Enter a number :";
					cin >> num1;
					num2 = rand()%6+1;
					cout << "Computer Entered :" << num2;

					while(num1!=num2 && (num1>0 && num1<7))
					{
						score1+=num1;
						cout << "\n\nEnter a Number :";
						cin >> num1;
						num2 = rand()%6+1;
						cout << "Computer Entered :" << num2;
					}
					
					cout << "\n\t\t\tYou are OUT. \n\t\t\tYour Score is " << score1;
					
					if(score1>score2)
					{
						cout << "\n\t\t\tYou WON.\n\t\t\tCONGRATULATIONS\n\nThank you for playing Please ";
					}
					if(score1<score2)
					{
						cout << "\n\t\t\tComputer WON.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
					}
					if(score1==score2)
					{
						cout << "\n\t\t\tGame Drawn.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
					}
			}
			else if(toss==1)
			{
				cout << "\nComputer decides to Bawl. You are Batting.";
				cout << "Enter a number :";
				cin >> num1;
				num2 = rand()%6+1;
				cout << "Computer Entered :" << num2;

				while(num1!=num2 && (num1>0 && num1<7))
				{
					score1+=num1;
					cout << "\n\nEnter a Number :";
					cin >> num1;
					num2 = rand()%6+1;
					cout << "Computer Entered :" << num2;
				}

				cout << "\n\t\t\tYou are OUT. \n\t\t\tYour Score is " << score1;
				cout << "\nComputer is Batting. \n\n";
			
				num2=0;
				do{
					score2+=num2;
					cout << "\n\nEnter a number :";
					cin >> num1;
					if(num1>6 || num1<0)
					{
						while(num1>6 || num1<0)
						{
							cout << "\nEnter a number :";
							cin >> num1;
						}
					}
					num2=rand()%6+1;
					cout << "Computer Entered :" <<num2;
				}while(num1!=num2);

				cout << "\n\t\t\tComputer is OUT. \n\t\t\tComputers score is " << score2;
				
				if(score1>score2)
				{
					cout << "\n\t\t\tYou WON.\n\t\t\tCONGRATULATIONS\n\nThank you for playing Please ";
				}
				if(score1<score2)
				{
					cout << "\n\t\t\tComputer WON.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
				}
				if(score1==score2)
				{
					cout << "\n\t\t\tGame Drawn.\n\t\t\tBetter Luck Next Time\n\nThank you for playing Please ";
				}
			}
		}
	}
	return 0;
}