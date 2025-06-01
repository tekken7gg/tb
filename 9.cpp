//#include <iostream>
//using namespace std;
//
//const int shifts = 3;
//const int days = 7;
//
//
//void inputDefectData(float defects[shifts][days])
//{
//    cout << "Enter defect percentages for each shift : " << endl;
//    for (int i = 0; i < shifts; i++)
//    {
//        for (int j = 0; j < days; j++)
//        {
//            cout << "Shift " << i + 1 << ", Day " << j + 1 << ": ";
//            cin >> defects[i][j];
//
//            while (defects[i][j] < 0 || defects[i][j] > 100) {
//                cout << "  Invalid! Enter a value between 0 and 100: ";
//                cin >> defects[i][j];
//            }
//        }
//    }
//}
//
//
//void calculateAveragePerShift(float defects[shifts][days])
//{
//    cout << "Average Defect Percentage per Shift: " << endl;
//    for (int i = 0; i < shifts; i++)
//    {
//        float sum = 0;
//        for (int j = 0; j < days; j++)
//        {
//            sum += defects[i][j];
//        }
//        float average = sum / days;
//        cout << "Shift " << i + 1 << ": " << average << "%\n";
//    }
//}
//
//
//void calculateAveragePerDay(float defects[shifts][days])
//{
//    cout << "Average Defect Percentage per Day: " << endl;
//    for (int j = 0; j < days; j++)
//    {
//        float sum = 0;
//        for (int i = 0; i < shifts; i++)
//        {
//            sum += defects[i][j];
//        }
//        float average = sum / shifts;
//        cout << "Day " << j + 1 << ": " << average << "%" << endl;
//    }
//}
//
//
//void identifyCriticalShifts(float defects[shifts][days])
//{
//    cout << "Critical Shifts (Average defects > 10%):" << endl;
//    bool found = false;
//
//    for (int i = 0; i < shifts; i++)
//    {
//        float sum = 0;
//        for (int j = 0; j < days; j++)
//        {
//            sum += defects[i][j];
//        }
//        float average = sum / days;
//        if (average > 10) 
//        {
//            cout << "Shift " << i + 1 << " - Avg Defect: " << average << "%" << endl;
//            found = true;
//        }
//    }
//
//    if (!found) 
//    {
//        cout << "No critical shifts found." << endl;
//    }
//}
//
//int main() 
//{
//    float defects[shifts][days];
//
//    inputDefectData(defects);
//    calculateAveragePerShift(defects);
//    calculateAveragePerDay(defects);
//    identifyCriticalShifts(defects);
//
//    return 0;
//}
