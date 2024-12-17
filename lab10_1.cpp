#include<iostream>
using namespace std;

int main(){
    char grade;
	int count[5] = {0,0,0,0,0};
	int students = 1;//Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << students << "]: ";
		cin >> grade; 
		
		if(grade == 'A') {
		    count[0]++;
		    students++;
		}else if(grade == 'B'){ // if grade is A
			//Do something
			count[1]++;
		    students++;
		}else if(grade == 'C') {
		    count[2]++;
		    students++;
		}else if(grade == 'D'){ // if grade is A
			//Do something
			count[3]++;
		    students++;
		}else if(grade == 'F'){ // if grade is A
			//Do something
			count[4]++;
		    students++;
		}else if(grade == '0'){ // if grade is B
			//Do something
			break;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total " << students-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}