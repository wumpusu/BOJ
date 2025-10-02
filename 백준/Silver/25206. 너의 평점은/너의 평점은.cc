#include <bits/stdc++.h>

using namespace std;

int main() 
{
  	map<string, float> grades =
		{ {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5},
		  {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0},
		  {"D+", 1.5}, {"D0", 1.0}, {"F", 0} };

  	float totalscore = 0, totalgrade = 0;

  	for (int i = 0; i < 20; i++)
  	{
	  string name, grade;
		float score;

  	cin >> name >> score >> grade;

		if (grade == "P")
			continue;
		
		totalscore += score;
		totalgrade += score * grades[grade];
	}

  cout << totalgrade / totalscore;
}