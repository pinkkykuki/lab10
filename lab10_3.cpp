#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_s = 0;
    string line;
    ifstream source("score.txt");
    while (getline(source,line)) {
        float value = atof(line.c_str());
        sum += value;
        sum_s += value*value;
        count++;
    }
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    float mean = sum/count;
    cout << "Mean = "<<mean<<endl;
    float variance = (sum_s/count) - (mean * mean);
    float std_de = sqrt(variance);
    cout << "Standard deviation = "<<std_de<<endl;
}
