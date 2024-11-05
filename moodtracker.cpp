// moodtracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Atharva Usturge
// 10/7
// Mood

#include <iostream>
using namespace std;
int main()
{
	int mood;
	// ask for mood
	cout << "What is your mood \n1)Happy \n2)Sad \n3)Mad \n4)Anxiety \n5)Fear \n6) Press for a secret suprise";
	cin >> mood;
	// siwtch 
	switch (mood) {
	case 1:
		cout << "You are Happy Gang"; break;
	case 2:
		cout << "What are you sad dude"; break;
	case 3:
		cout << "Ok bro why are you mad not that deep"; break;
	case 4:
		cout << "Just take a nap if you anxious"; break;
	case 5:
		cout << "What is bro fearing"; break;
		// if they dont put valid input
	case 6:
		cout <<"haha get pranked no suprise"; break;
	default:
		cout << "Not an emotion"; break;
	}

}
