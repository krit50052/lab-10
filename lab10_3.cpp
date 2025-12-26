#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    
    double sum = 0, sumSquare = 0;
    int count = 0;
    double score;
    
    while(source >> score){
        sum += score;
        sumSquare += score * score;
        count++;
    }
    
    source.close();
    
    double mean = sum / count;

    double variance = (sumSquare / count) - (mean * mean);
    double stdDev = sqrt(variance);

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << stdDev << "\n";
    
    return 0;
}