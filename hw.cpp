#include <iostream>
#include <string>
using namespace std;
int main()
{
	char grade;
	double gradepoints=0,gpa=0;
	int counter=0;
		do
	{ cout<<"Enter the letter grade (Enter'X' to exit) \n";
		cin>>grade;
       if (grade == 'A'||grade == 'a') gradepoints+=4;
	   else if (grade == 'B'||grade == 'b') gradepoints+=3;
	   else if (grade == 'C'||grade == 'c') gradepoints+=2;
	   else if (grade == 'D'||grade == 'd') gradepoints+=1;
	   else if (grade == 'F'||grade == 'f') gradepoints+=0;
	   else if (grade == 'X'||grade == 'x') break;
	   counter++;
	}while (grade !='X'||grade !='x');
	 cout<<"Total Grade points :"<<gradepoints<<endl;
	 cout<<"GPA :"<<(float)gradepoints/counter--<<endl;
	return 0;
}