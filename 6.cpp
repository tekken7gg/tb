//#include <iostream>
//using namespace std;
//
//const int rows = 6;
//const int col = 4;
//
//void initializeseats(char seats[rows][col])
//{
//	for (int i = 0;i < rows; i++)
//	{
//		for (int j = 0; j < col;j++)
//		{
//			 seats[i][j] = 'E';
//		}
//	}
//}
//void displayseats(char seats[rows][col])
//{
//	cout << "Display the seats " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << seats[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void seatsbook(char seats[rows][col], int r, int c)
//{
//	if (r >= 1 && r <= rows && c >= 1 && c <= col)
//	{
//		if (seats[r - 1][c - 1] == 'E')
//		{
//			seats[r - 1][c - 1] = 'B';
//			cout << "Seat booked " << endl;
//		}
//		else
//		{
//			cout << "Seat already booked " << endl;
//		}
//	}
//	else
//	{
//		cout << "Invalid seat position " << endl;
//
//	}
//}
//int countavailableseats(char seats[rows][col])
//{
//	int count = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (seats[i][j] == 'E')
//				count++;
//
//		}
//	}
//	return count;
//}
//int findmaxemptyrow(char seats[rows][col])
//{
//	int maxempty = -1, rowindex = -1;
//	for (int i = 0; i < rows; i++)
//	{
//		int emptycount = 0;
//		for (int j = 0; j < col; j++)
//		{
//			if (seats[i][j] == 'E')
//				emptycount++;
//
//			if (emptycount > maxempty)
//			{
//				maxempty = emptycount;
//				rowindex = i;
//			}
//		}
//	}
//	return rowindex;
//}
//int main()
//{
//	char seats[rows][col];
//	initializeseats(seats);
//
//	int choice;
//	do
//	{
//		cout << "\nFlight Seat Reservation Menu:\n";
//		cout << "1. Display Seating Chart\n";
//		cout << "2. Book a Seat\n";
//		cout << "3. Count Available Seats\n";
//		cout << "4. Find Row with Max Empty Seats\n";
//		cout << "0. Exit\n";
//		cout << "Enter your choice: ";
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//			displayseats(seats);
//			break;
//		case 2:
//			int r, c;
//			cout << "Enter row : ";
//			cin >> r;
//			cout << "Enter column : ";
//			cin >> c;
//			seatsbook(seats, r, c);
//			break;
//		case 3:
//			cout << "Available seats: " << countavailableseats(seats) << endl;
//			break;
//		case 4:
//			int maxRow;
//			maxRow = findmaxemptyrow(seats);
//			cout << "Row " << maxRow + 1 << " has the most empty seats.\n";
//			break;
//		case 0:
//			cout << "Exiting...\n";
//			break;
//		default:
//			cout << "Invalid choice.\n";
//		}
//	} while (choice != 0);
//
//	return 0;
//}
//
//
