//#include <iostream>
//using namespace std;
//
//const int rows = 5;
//const int col = 5;
//
//
//void displayStatus(char books[rows][col])
//{
//    cout << "Library Book Status:" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        cout << "Shelf " << i + 1 << ": ";
//        for (int j = 0; j < col; j++)
//        {
//            cout << books[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//
//void countBooks(char books[rows][col], int& available, int& issued, int& missing) 
//{
//    available = issued = missing = 0;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            if (books[i][j] == 'A' || books[i][j] == 'a')
//                available++;
//            else if (books[i][j] == 'I' || books[i][j] == 'i')
//                issued++;
//            else if (books[i][j] == 'M' || books[i][j] == 'm')
//                missing++;
//        }
//    }
//}
//
//
//void shelvesWithMostMissing(char books[rows][col]) 
//{
//    int maxMissing = -1;
//
//    
//    for (int i = 0; i < rows; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < col; j++)
//        {
//            if (books[i][j] == 'M' || books[i][j] == 'm')
//                count++;
//        }
//        if (count > maxMissing)
//            maxMissing = count;
//    }
//
//    
//    cout << "Shelf with the highest missing books (" << maxMissing << "):" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < col; j++)
//        {
//            if (books[i][j] == 'M' || books[i][j] == 'm')
//                count++;
//        }
//        if (count == maxMissing)
//            cout << "Shelf " << i + 1 << endl;
//    }
//}
//
//int main() 
//{
//    char books[rows][col];
//
//    
//    cout << "Enter status of each book (A = Available, I = Issued, M = Missing):" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        cout << "Shelf " << i + 1 << ":" << endl;
//        for (int j = 0; j < col; j++)
//        {
//            cout << "  Book " << j + 1 << ": ";
//            cin >> books[i][j];
//
//          
//            while (books[i][j] != 'A' && books[i][j] != 'I' && books[i][j] != 'M' &&
//                books[i][j] != 'a' && books[i][j] != 'i' && books[i][j] != 'm')
//            {
//                cout << "    Invalid! Enter only A, I or M: ";
//                cin >> books[i][j];
//            }
//        }
//    }
//
//   
//    displayStatus(books);
//
//   
//    int available, issued, missing;
//    countBooks(books, available, issued, missing);
//
//    cout << "Total Available: " << available << endl;
//    cout << "Total Issued: " << issued << endl;
//    cout << "Total Missing: " << missing << endl;
//
//   
//    shelvesWithMostMissing(books);
//
//    return 0;
//}
