
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int score[11] = {0};
    int all = 0;
    double totalScore = 0;
    cout << "How many A+ do you have: ";
    cin >> score[0];
    totalScore = totalScore + (4.3 * score[0]);
    cout << "How many A do you have: ";
    cin >> score[1];
    totalScore = totalScore + (4.0 * score[1]);
    cout << "How many A- do you have: ";
    cin >> score[2];
    totalScore = totalScore + (3.7 * score[2]);
    cout << "How many B+ do you have: ";
    cin >> score[3];
    totalScore = totalScore + (3.3 * score[3]);
    cout << "How many B do you have: ";
    cin >> score[4];
    totalScore = totalScore + (3.0 * score[4]);
    cout << "How many B- do you have: ";
    cin >> score[5];
    totalScore = totalScore + (2.7 * score[5]);

    cout << "How many C+ do you have: ";
    cin >> score[6];
    totalScore = totalScore + (2.3 * score[6]);

    cout << "How many C do you have: ";
    cin >> score[7];
    totalScore = totalScore + (2.0 * score[7]);

    cout << "How many C- do you have: ";
    cin >> score[8];
    totalScore = totalScore + (1.7 * score[8]);

    cout << "How many D do you have: ";
    cin >> score[9];
    totalScore = totalScore + (1.0 * score[9]);

    cout << "How many E do you have: ";
    cin >> score[10];
    totalScore = totalScore + (0.0 * score[10]);

    for (int i = 0; i < 11; i++)
    {
        all = all + score[i];
    }
    cout << "Total credits: " << all << " units" << endl;
    cout << "totalScore : " << totalScore << endl;
    cout << "Your GPA is :  " << totalScore / all << endl;

    return 0;
}