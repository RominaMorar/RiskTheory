
#include <iostream>

using namespace std;

int main()
{
    float possibility, usefulness_home, usefulness_forest;
    int feelings_grading[4];

    cout << "On a scale from 1 to 10 where:" << endl;
    cout << " 1 - very bad\n 3 - bad\n 6 - mediocre\n 8 - okay\n 10 - great" << endl;

    cout << "\n Rate your feelings when you are at home and it's\n raining:";
    cin >> feelings_grading[0];

    cout << " sunny:";
    cin >> feelings_grading[1];

    cout << "\n\n And when you are in a forest and it's\n raining:";
    cin >> feelings_grading[2];

    cout << " sunny:";
    cin >> feelings_grading[3];

   
    cout << "\n Now enter the possibility of a rain from 0 to 1: ";
    cin >> possibility;

    if (possibility < 0 || possibility>1) {
        cout << "\n Enter a value from 0 to 1";
     }

    else {

          usefulness_home = possibility * feelings_grading[0] + (1 - possibility) * feelings_grading[1];
          usefulness_forest = possibility * feelings_grading[2] + (1 - possibility) * feelings_grading[3];

           if (usefulness_home > usefulness_forest){
               cout << "\n Because the usefulness of staying at home is greater than the usefulness of going to the forest, it's recommended to stay at home";
            }
           
           else{
               cout << "\n Because the usefulness of going to the forest is greater than the usefulness of staying at home, it's recommended to go to the forest";
           }
     }
       
    return 0;
}

