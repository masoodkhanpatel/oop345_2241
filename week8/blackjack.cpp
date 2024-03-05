// #include <iostream>
// #include <cstdlib>
// #include <ctime>     // For the time function

// using namespace std;

// int main()
// {
//         int loop1 = 0;
//         int loop2 = 0;
//         char ans;
//         char ans2;

//         // setting the seed.
//         unsigned seed = 123;
   
//         // Seed the random number generator.
//         srand(seed);

//         cout << endl;
//         cout << "Welcome to black jack!" << endl;
//         cout << "Try to get as close to 21 without going over." << endl;
//         cout << "HIT means get another card (value), STAY means keep current values and." << endl;
//         cout << "Let's begin!" << endl << endl;

//         while (loop1 == 0)
//         {
//                 int usr_card1 = rand() % 11 + 1;
//                 int usr_card2 = rand() % 11 + 1;
//                 int deal_card1 = rand() % 11 + 1;
//                 int deal_card2 = rand() % 11 + 1;
//                 int usr_total = usr_card1 + usr_card2;
//                 int deal_total = deal_card1 + deal_card2;

//                 cout << "You have: [ " << usr_card1 << ", " << usr_card2 << " ]" << endl;

//                 while (loop2 == 0)
//                 {
//                         cout << "Hit or Stay? (H/S): ";
//                         cin >> ans;
//                         if (ans == 'h' || ans == 'H')
//                         {
//                                 int usr_cardn = rand() % 11 + 1;
//                                 usr_total = usr_cardn + usr_total;
//                                 cout << "[ " << usr_cardn << " ]" << endl;
//                                 continue;
//                         }
//                         else if (ans == 's' || ans == 'S')
//                                 break;
//                         else
//                                 return 0;
//                 }
//                 cout << usr_total << endl << endl;
//                 cout << "Play again? (Y/N): ";
//                 cin >> ans2;
//                 if (ans2 == 'y' || ans2 == 'Y')
//                         continue;
//                 else if (ans2 == 'n' || ans2 == 'N')
//                         break;
//         }
//         return 0;
// }