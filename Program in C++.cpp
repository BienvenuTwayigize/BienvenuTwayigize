#include <iostream>

using namespace std;

int main()
{
    const int num_students = 30;
    const int num_lessons = 5;
    int marks[num_students][num_lessons];

    // read in the marks of each student
    for (int i = 0; i < num_students; i++)
    {
        cout << "Enter the marks for student " << i+1 << ": ";
        for (int j = 0; j < num_lessons; j++)
        {
            cin >> marks[i][j];
        }
    }

    // compute the average marks for each student
    for (int i = 0; i < num_students; i++)
    {
        int sum = 0;
        for (int j = 0; j < num_lessons; j++)
        {
            sum += marks[i][j];
        }
        double average = sum / num_lessons;
        cout << "The average marks for student " << i+1 << " is " << average << endl;
    }

    return 0;
}

