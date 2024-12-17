#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    double sum1 = 0;
    double mean;
    ifstream source;
	source.open("score.txt");
	string textline;
	while(getline(source,textline)){
	    sum += atof(textline.c_str());
	    sum1 += pow(atof(textline.c_str()),2);
	    count++;
	}
	
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    mean = sum/count;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt((sum1/count)-pow(mean,2)) << endl;
}
