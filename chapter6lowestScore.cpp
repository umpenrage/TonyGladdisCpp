#include <iostream>

using namespace std;

void getScore(int &);
void calcAverage(int);
int findLowest(int, int , int , int , int);

int main()
{
    int score1=0;
    int score2=0;
    int score3=0;
    int score4=0;
    int score5=0;
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    int lowest = findLowest(score1, score2, score3, score4, score5);
    int sum = score1 + score2 + score3 +score4 +score5 - lowest;
    cout << "The average is ";
    calcAverage(sum);
    cout << ". With the lowest score being dropped: " << lowest;


    return 0;
}

void getScore(int &score){

    cout << "Please insert the score : ";
    cin >> score;
    if(score <0 || score>100){
        bool loop = true;
        while(loop){
            cout << "Invalid answer. Input must between 0 and 100. Please insert a score : ";
            cin>> score;
            if(score >=0 && score <=100){
                loop = false;
            }
        }
    }
}

int findLowest(int score1, int score2, int score3, int score4, int score5){
    int lowest = score1;

    if(score2 < score1){
        lowest = score2;
    }
    if(score3 < lowest){
        lowest = score3;
    }
    if(score4 < lowest){
        lowest = score4;
    }
    if(score5 < lowest){
        lowest = score5;
    }

    return lowest;
 }

 void calcAverage(int sum){
    const double DENOMINATOR = 4.0;
    double average = sum/DENOMINATOR;

    cout << average;


 }

