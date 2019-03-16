#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
	public : 
		string name;
		int score;
		Student(string name, int score)
		{
			this->name = name;
			this->score = score;
		}
		
		bool operator <(Student &student)
		{
			return this->score < student.score;
		}
};

int main()
{
	Student students[] = 
	{
		Student("a", 100),
		Student("b", 9),
		Student("d", 8),
		Student("c", 7),
		Student("e", 6),		
	};
	sort(students, students + 5, compare);
	for(int i = 0; i < 5; i++)
	{
		cout << students[i].name << " ";
	}
}
