// Filename : Active.cpp
// Author : Mike Dito
// Description : This is the application file for the Active Personal Fitness Log program.
// It will first return a User profile (either from a previously made one, or create a new one).
// Next, control transfers to a function that will log you're activities. Once you're activities
// logged, the program will decide if it should append these activities to you're file, or if 
// the whole file needs to be re-written (because you reached a new max or goal).

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "User.hpp"
#include "Activity.hpp"
#include "Weights.hpp"
#include "Cardio.hpp"

using namespace std;

User StartUp();
User CreateProfile();
User ReadFile();
string Log_Activity(ostream & outs, User & U);

int main ()
{
	User U = StartUp();

	string dt = Log_Activity(cout, U);

	if (U.Appending())
		U.Append_Activities(dt);
	else
		U.Write_File_Activities();

	return 0;
}

/* Function : StartUp()
 * Return value : User
 * Parameters : none
 * Description : This function will be run upon execution of the application. It gives the user
 * two options, to login or create an account. Both options transfer control to functions to
 * perform the appropriate action, and return a User object.
 */
User StartUp()
{
	cout << "Welcome to ACTIVE, you're personal fitness log. Enter you're selection:\n";

	int answer;
	cout << "1 - Login\n";
	cout << "2 - Create an account\n";
	do
	{
		cin >> answer;
		switch (answer)
		{
			case 1: { return ReadFile(); }
			case 2: { return CreateProfile(); }
			default: { cout << endl << answer << " is not a valid option\n"; }
		}
	} while (answer != 1 && answer != 2);
}

/* Function : CreateProfile()
 * Return value : User
 * Parameters : none
 * Description : This function will call the default constructor for a User object, and return it
 * to main.
 */
User CreateProfile()
{
	User U;
	return U;
}

/* Function : ReadFile()
 * Return value : User
 * Parameters : none
 * Description : This function will be executed if the User decides to 'Login' to their account.
 * It will open the input file, extract the User profile data, and continue on to extract 
 * activities. It uses pointers to the objects, and the parameterized constructors for each
 * activity. By doing this we can use polymorphism to group all activities together in the 
 * User's XLog (Exercise Log). The mutator function Enter_Activity will use the vector function
 * push_back() to add all activities to the XLog. The User object is returned after the file
 * has been read.
 */
User ReadFile()
{
	cout << "\nEnter the name of you're log file (example.txt): ";
	string filename;
	cin >> filename;
	ifstream infile(filename.c_str());
	User U(infile, filename);
	string temp;
	getline(infile, temp);
	getline(infile, temp);
	getline(infile, temp);

	char which = ' ';
	while (infile >> which)
		switch (which)
		{
			case 'A':
			{
				Activity * A = new Activity(infile);
				U.Enter_Activity(A);
				break;
			}
			case 'W':
			{
				Weights * W = new Weights(infile);
				U.Enter_Activity(W);
				break;
			}
			case 'C':
			{
				Cardio * C = new Cardio(infile);
				U.Enter_Activity(C);
				break;
			}
		}
	cout << "\nFile reading complete\n";

	return U;
}

/* Function : Log_Activity(ostream & outs, User & U)
 * Return value : string
 * Parameters : ostream & outs, User & U
 * Description : This function will log all activities that the User did for the day. 
 * First it asks for the date, then it enters a do-while loop to obtain all activities.
 * A switch-case control structure in the loop is designed to construct a pointer to a
 * new activity based upon the choice. When the User is finished logging activities,
 * a summary is printed, and the date is returned to main.
 */
string Log_Activity(ostream & outs, User & U)
{
	outs << "\nEnter the date (MM/DD/YYYY): ";
	string date;
	cin >> date;

	char choice = ' ';
	do
	{
		outs << "\nEnter A for general activity [Stretching, Yoga, ...]\n";
		outs << "Enter W for weight lifting activities [BP (bench press), DL (deadlift), SQ (squat), ...]\n";
		outs << "Enter C for cardio activities [Run, Hike, Bike, ...]\n";
		outs << "Enter D when done\n\n";

		cin >> choice;

		switch (toupper(choice))
		{
			case 'A':
			{
				Activity * A = new Activity(date);
				U.Enter_Activity(A);
				break;
			}
			case 'W':
			{
				Weights * W = new Weights(date);
				U.Enter_Activity(W);
				break;
			}
			case 'C':
			{
				Cardio * C = new Cardio(date);
				U.Enter_Activity(C);
				break;
			}
			case 'D':
				break;
			default: outs << endl << choice << " is not an option\n";
		}
	} while (toupper(choice) != 'D');

	U.Print_Day_Summary(cout, date);

	return date;
}