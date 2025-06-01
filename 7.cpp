//#include <iostream>
//using namespace std;
//
//const int users = 10;
//const int products = 5;
//
//
//void inputRatings(int ratings[users][products])
//{
//    for (int i = 0; i < users; i++)
//    {
//        cout << "Enter ratings for User " << i + 1 << endl;
//        for (int j = 0; j < products; j++)
//        {
//            cout << "Product " << j + 1 << ": ";
//            cin >> ratings[i][j];
//        }
//    }
//}
//
//
//void calculateAverages(int ratings[users][products], float avg[products]) {
//    for (int j = 0; j < products; j++)
//    {
//        int sum = 0;
//        for (int i = 0; i < users; i++)
//        {
//            sum += ratings[i][j];
//        }
//        avg[j] = sum / 10.0;
//    }
//}
//
//
//void countPerfectRatings(int ratings[users][products], int count[products]) {
//    for (int j = 0; j < products; j++) 
//    {
//        count[j] = 0;
//        for (int i = 0; i < users; i++)
//        {
//            if (ratings[i][j] == 5)
//                count[j]++;
//        }
//    }
//}
//
//
//void displayWorstRated(float avg[products]) 
//{
//    float minAvg = avg[0];
//    for (int j = 1; j < products; j++)
//    {
//        if (avg[j] < minAvg)
//            minAvg = avg[j];
//    }
//
//    cout << "Products with the worst average rating (" << minAvg << "):" << endl;
//    for (int j = 0; j < products; j++)
//    {
//        if (avg[j] == minAvg)
//            cout << "Product " << j + 1 << endl;
//    }
//}
//
//int main()
//{
//    int ratings[users][products];
//    float averages[products];
//    int perfectRatings[products];
//
//    inputRatings(ratings);
//    calculateAverages(ratings, averages);
//    countPerfectRatings(ratings, perfectRatings);
//
//    cout << "Average Ratings per Product:" << endl ;
//    for (int j = 0; j < products; j++)
//    {
//        cout << "Product " << j + 1 << ": " << averages[j] << endl;
//    }
//
//    cout << "Perfect Ratings (5 stars) per Product:" << endl;
//    for (int j = 0; j < products; j++)
//    {
//        cout << "Product " << j + 1 << ": " << perfectRatings[j] << " users\n";
//    }
//
//    displayWorstRated(averages);
//
//    return 0;
//}
