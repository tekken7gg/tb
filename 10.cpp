//#include <iostream>
//using namespace std;
//
//const int candidates = 4;
//const int stations = 6;
//
//
//void inputVotes(int votes[candidates][stations])
//{
//    cout << "Enter votes for 4 candidates across 6 polling stations: " << endl;
//    for (int i = 0; i < candidates; i++)
//    {
//        for (int j = 0; j < stations; j++)
//        {
//            cout << "Candidate " << i + 1 << ", Station " << j + 1 << ": ";
//            cin >> votes[i][j];
//
//            
//            while (votes[i][j] < 0) 
//            {
//                cout << "  Invalid! Votes cannot be negative. Enter again: ";
//                cin >> votes[i][j];
//            }
//        }
//    }
//}
//
//
//void totalVotesPerCandidate(int votes[candidates][stations]) {
//    cout << "Total Votes Per Candidate: " << endl;
//    for (int i = 0; i < candidates; i++)
//    
//    {
//        int total = 0;
//        for (int j = 0; j < stations; j++)
//        {
//            total += votes[i][j];
//        }
//        cout << "Candidate " << i + 1 << ": " << total << " votes\n";
//    }
//}
//
//
//void totalVotesPerStation(int votes[candidates][stations])
//{
//    cout << "Total Votes Per Polling Station: " << endl;
//    for (int j = 0; j < stations; j++)
//    {
//        int total = 0;
//        for (int i = 0; i < candidates; i++)
//        {
//            total += votes[i][j];
//        }
//        cout << "Station " << j + 1 << ": " << total << " votes " <<endl;
//    }
//}
//
//
//void identifyWinners(int votes[candidates][stations])
//{
//    int maxVotes = -1;
//    int totals[candidates] = { 0 };
//
//        for (int i = 0; i < candidates; i++)
//        {
//        for (int j = 0; j < stations; j++)
//        {
//            totals[i] += votes[i][j];
//        }
//        if (totals[i] > maxVotes)
//            maxVotes = totals[i];
//        }
//
//   
//    cout << "Winner " << endl;
//    for (int i = 0; i < candidates; i++)
//    {
//        if (totals[i] == maxVotes)
//            cout << "Candidate " << i + 1 << " with " << totals[i] << " votes " <<endl;
//    }
//}
//
//
//void checkLowTurnoutStations(int votes[candidates][stations])
//{
//    cout << "Polling Stations with Turnout Less Than 100: " << endl;
//    bool found = false;
//
//    for (int j = 0; j < stations; j++)
//    {
//        int total = 0;
//        for (int i = 0; i < candidates; i++)
//        {
//            total += votes[i][j];
//        }
//
//        if (total < 100) 
//        {
//            cout << "Station " << j + 1 << " had " << total << " votes "<<endl;
//            found = true;
//        }
//    }
//
//    if (!found)
//        cout << "All stations had 100 or more votes " << endl;
//}
//
//int main()
//{
//    int votes[candidates][stations];
//
//    inputVotes(votes);
//    totalVotesPerCandidate(votes);
//    totalVotesPerStation(votes);
//    identifyWinners(votes);
//    checkLowTurnoutStations(votes);
//
//    return 0;
//}
