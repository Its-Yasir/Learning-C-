#include<iostream>
#include<math.h>
#include<string>
#include<ctime>
#include<vector>

char setPlayerMove();
char setComputerMove();
std::string choseWinner(char moveP, char moveC);
std::string showMoves(char P, char C);
void sortArray(int arr[], int size);
int sumEven(std::string cardNumber);
int sumOdd(std::string cardNumber);

int main()
{

	//Tidbits📌
	/*
		fill(begin,end,value); is used to fill values of an array
							   from a start to end point with a 
							   specific value
	*/

	srand(time(0));
	//Hypotenuse calculator
	/*double a, b, h;
	std::cout << "Enter side a: ";
	std::cin >> a;
	std::cout << "Enter side b: ";
	std::cin >> b;
	h = sqrt((a * a) + (b * b));
	std::cout << "Hypotenuse is: " << h*/

	//Strings methods
	/*std::string name;
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Length is: " << name.length();
	std::cout << "\nAppend is: " << name.append("@gmail.com");
	std::cout << "\nIs Empty: " << name.empty();
	std::cout << "\nInsert at an index: " << name.insert(0, "G");
	std::cout << "\nErase method: " << name.erase(0, 3);*/

	//Random number generate
	/*srand(time(NULL));  //#include<ctime> is needed
	srand(time(0));  //This also valid
	int num1 = (rand() % 9) + 1;
	int num2 = (rand() % 9) + 1;
	int num3 = (rand() % 9) + 1;
	std::cout << "Number between 1 to 9 " << num1 << std::endl;
	std::cout << "Number between 1 to 9 " << num2 << std::endl;
	std::cout << "Number between 1 to 9 " << num3 << std::endl;*/

	//Number Guessing game
	/*srand(time(0));
	int guess;
	int num = rand() % 100 + 1;
	int tries = 0;
	std::cout << "***********  Number Guessing game **************\n";
	do {
		std::cout << "Enter a number (1-100): ";
		std::cin >> guess;
		tries++;
		if (num > guess) {
			std::cout << "Too Low!\n";
		}
		else if (num < guess) {
			std::cout << "Too High!\n";
		}
		else if (num == guess) {
			std::cout << "CORRECT #of tries: " << tries;
		}
	} while (num != guess);*/

	//Rock Papper Scissor Game
	/*char player = setPlayerMove();
	char computerMove = setComputerMove();
	std::cout<<showMoves(player, computerMove);
	std::cout << std::endl;
	std::cout<<choseWinner(player, computerMove);*/

	//For Each Loop
	/*std::string students[] = { "Hassan", "Ahamad", "Zohaib", "ali" };
	int marks[] = { 1, 2, 3, 4, 5 };
	for (int mark: marks) {
		std::cout << mark << '\n';
	}
	for (std::string name : students) {
		std::cout << name << '\n';
	}*/

	//Bubble Sort
	/*int arr[] = { 20,43,65,23,65,90,12 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int a : arr) {
		std::cout << a << ' ';
	}
	sortArray(arr, size);
	std::cout << '\n';
	for (int a : arr) {
		std::cout << a << ' ';
	}*/

	//Verify Credit card number
	/*std::string cardNumber;
	std::cout << "Enter Card Number: ";
	std::cin >> cardNumber;
	
	int oddSum = sumOdd(cardNumber);
	int evenSum = sumEven(cardNumber);
	int sum = evenSum + oddSum;
	if (sum % 10 == 0) {
		std::cout << "Valid";
	}
	else {
		std::cout << "Invalid";
	}*/

	//Tic - Tac - Toe

	

}
//For Credit Card
int sumOdd(std::string card) {
	int sum = 0;
	for (int i = card.length() - 1; i >= 0; i -= 2) {
		sum += card[i] - '0';
	}

	return sum;	
}

//For Credit Card
int sumEven(std::string card) {
	int sum = 0;
	for (int i = card.length() - 2; i >= 0; i -= 2) {
		int temp = (card[i] - '0');
		int sq = temp * 2;
		if (sq < 10) {
			sum += sq;
		}
		else {
			sum += sq / 10;
			sum += sq % 10;
		}
	}
	return sum;
}

char setPlayerMove() {
	std::cout << "+++++++++++ Rock paper scissor game +++++++++++" << std::endl;
	char move;
	do {
		std::cout << "Press r p or s ";
		std::cin >> move;
		if (move == 'r' || move == 's' || move == 'p') {
			break;
		}
	} while (true);

	return move;
}

char setComputerMove() {
	char move = 'r';
	int randomNum = rand() % 3 + 1;
	if (randomNum == 1) {
		move = 'r';
	}
	else if (randomNum == 2) {
		move = 'p';
	}
	else if (randomNum == 3) {
		move = 's';
	}

	return move;
}

std::string choseWinner(char P, char C) {
	if (P == 'r') {
		if (C == 'r') {
			return "Draw";
		}
		else if (C == 'p') {
			return "Computer Wins";
		}
		else if (C == 's') {
			return "Player Wins";
		}
	} else if (P == 'p') {
		if (C == 'p') {
			return "Draw";
		}
		else if (C == 's') {
			return "Computer Wins";
		}
		else if (C == 'r') {
			return "Player Wins";
		}
	} else if (P == 's') {
		if (C == 's') {
			return "Draw";
		}
		else if (C == 'r') {
			return "Computer Wins";
		}
		else if (C == 'p') {
			return "Player Wins";
		}
	}
}

std::string showMoves(char P, char C) {
	std::string player;
	std::string pc;
	if (P == 'r') {
		player = "Rock";
	}
	else if (P == 'p') {
		player = "Paper";
	}
	else if (P == 's') {
		player = "Scissor";
	}
	if (C == 'r') {
		pc = "Rock";
	}
	else if (C == 'p') {
		pc = "Paper";
	}
	else if (C == 's') {
		pc = "Scissor";
	}

	return "You chose " + player + " and computer chose " + pc;
}

void sortArray(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1 ; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}