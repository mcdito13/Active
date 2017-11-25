// Filename : User.hpp
// Author : Mike Dito
// Description : This is the specification and implementation file for the User class.
// It provides a blueprint for a User object, ie you're profile.

#ifndef _USER_HPP
#define _USER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include "Activity.hpp"
#include "Weights.hpp"
#include "Cardio.hpp"

using namespace std;

class User
{
	public:
		// Constructors
		User();
		User(istream & infile, string f);

		// Mutators
		void SetName();
		void SetAgeHeightWeight();
		void SetMaxs();
		void SetGoals();
		void SetFileName();
		void SetNewBPMax(int max);
		void SetNewDLMax(int max);
		void SetNewSQMax(int max);
		void SetNewBPGoal();
		void SetNewDLGoal();
		void SetNewSQGoal();

		template <class T>
		void Enter_Activity(T * & A);


		// Max and Goal Checker
		template <class FUNC, class FUNC2>
		void Max_Goal_Check(string dt, char name, string type, int & max, int goal, FUNC SetNewGoal, FUNC2 SetNewMax);
		
		// Misc
		void Print_Day_Summary(ostream & outs, string dt);
		bool Appending();

		// File Writers
		void Write_File_Heading();
		void Write_File_Profile();
		void Write_File_Activities();
		void Append_Activities(string date);

	private:
		vector <Activity *> XLog;
		string f_name;
		string l_name;
		int age;
		int height;
		int weight;
		int BP_max;
		int DL_max;
		int SQ_max;
		int BP_goal;
		int DL_goal;
		int SQ_goal;
		bool append;
		ifstream infile;
		ofstream outfile;
		string filename;
};

								// Beginning of Constructors //

/* Function : User()
 * Return value : none
 * Parameters : none
 * Description : Default constructor for a User object. It calls mutators to retrieve input from
 * the user, and set the attributes of the User obejct.
 */
User::User()
{	
	cout << "\n** If asked for more than one input, separate them with a space. **\n";
	SetFileName();
	outfile.open(filename.c_str());
	SetName();
	SetAgeHeightWeight();
	SetMaxs();
	SetGoals();
	cout << "\nThanks " << f_name << ", you're profile has been created.\n\n";
	append = false;
}

/* Function : User(istream & infile, string f)
 * Return value : none
 * Parameters : istream & infile, string f
 * Description : Parameterized constructor for a User object. It will extract data from the infile
 * passed to it, and use that data to construct a new User object. The outfile will be opened in
 * append mode.
 */
User::User(istream & infile, string f)
{
	string temp;
	filename = f;
	infile >> temp >> f_name >> l_name;
	infile >> temp >> age;
	infile >> temp >> height;
	infile >> temp >> weight;
	infile >> temp >> BP_max;
	infile >> temp >> DL_max;
	infile >> temp >> SQ_max;
	infile >> temp >> BP_goal;
	infile >> temp >> DL_goal;
	infile >> temp >> SQ_goal;
	outfile.open(filename.c_str(), ios::app);
	append = true;
}

							     // End of Constructors //

								// Beginning of Mutators //

/* Function : SetName()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the name attributes.
 */
void User::SetName()
{
	cout << "\nEnter your first and last name: ";
	cin >> f_name >> l_name;
}

/* Function : SetAgeHeightWeight()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the age, height, and weight
 * attributes.
 */
void User::SetAgeHeightWeight()
{
	cout << "\nEnter your age, height (inches), and weight (lbs): ";
	cin >> age >> height >> weight;
}

/* Function : SetMaxs()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the max attributes.
 */
void User::SetMaxs()
{
	cout << "\nEnter your current maxs for BP, DL, and SQ: ";
	cin >> BP_max >> DL_max >> SQ_max;
}

/* Function : SetGoals()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the goal attributes.
 */
void User::SetGoals()
{
	cout << "\nEnter your goals for BP, DL, and SQ: ";
	cin >> BP_goal >> DL_goal >> SQ_goal;
}

/* Function : SetFileName()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the filename attribute.
 */
void User::SetFileName()
{
	cout << "\nEnter a name for your log file (example.txt): ";
	cin >> filename;
}

/* Function : SetNewBPMax(int max)
 * Return value : none
 * Parameters : int max
 * Description : This is a mutator function that will set the BP_max attribute.
 */
void User::SetNewBPMax(int max)
{
	BP_max = max;
}

/* Function : SetNewDLMax(int max)
 * Return value : none
 * Parameters : int max
 * Description : This is a mutator function that will set the DL_max attribute.
 */
void User::SetNewDLMax(int max)
{
	DL_max = max;
}

/* Function : SetNewSQMax(int max)
 * Return value : none
 * Parameters : int max
 * Description : This is a mutator function that will set the SQ_max attribute.
 */
void User::SetNewSQMax(int max)
{
	SQ_max = max;
}

/* Function : SetNewBPGoal()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the BP_goal attribute.
 */
void User::SetNewBPGoal()
{
	cout << "Enter your new BP goal: ";
	cin >> BP_goal;
}

/* Function : SetNewDLGoal()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the DL_goal attribute.
 */
void User::SetNewDLGoal()
{
	cout << "Enter your new DL goal: ";
	cin >> DL_goal;
}

/* Function : SetNewSQGoal()
 * Return value : none
 * Parameters : none
 * Description : This is a mutator function that will set the SQ_goal attribute.
 */
void User::SetNewSQGoal()
{
	cout << "Enter your new SQ goal: ";
	cin >> SQ_goal;
}

/* Function : Enter_Activity(T * & A)
 * Return value : none
 * Parameters : T * & A
 * Description : This is a templated mutator function that will use the push_back()
 * vector function to add an activity pointer (or any objects derived from activity) to the
 * XLog vector attribute.
 */
template <class T>
void User::Enter_Activity(T * & A)
{
	XLog.push_back(A);
}

								  // End of Mutators //

							// Beginning of Misc Functions //

/* Function : Print_Day_Summary(ostream & outs, string dt)
 * Return value : none
 * Parameters : ostream & outs, string dt
 * Description : This function will print out a summary of todays activities. After
 * activities are printed to the output stream, it will make a call to a function to
 * check if any maxs or goals have been reached. If they have, the appropriate max
 * will be updated, and the user is asked for a new goal.
 */
void User::Print_Day_Summary(ostream & outs, string dt)
{
	outs << "\nSummary of todays activities\n----------------------------\n";
	for (int i = 0; i < XLog.size(); i++)
		if (XLog[i]->GetDate() == dt)
			outs << *XLog[i] << endl;
		
	Max_Goal_Check(dt, 'W', "BP", BP_max, BP_goal, &User::SetNewBPGoal, &User::SetNewBPMax);
	Max_Goal_Check(dt, 'W', "DL", DL_max, DL_goal, &User::SetNewDLGoal, &User::SetNewDLMax);
	Max_Goal_Check(dt, 'W', "SQ", SQ_max, SQ_goal, &User::SetNewSQGoal, &User::SetNewSQMax);
}

/* Function : Max_Goal_Check(string dt, char name, string type, int & max, int goal, FUNC SetNewGoal, FUNC2 SetNewMax)
 * Return value : none
 * Parameters : string dt, char name, string type, int & max, int goal, FUNC SetNewGoal, FUNC2 SetNewMax
 * Description : This is a templated function that will scan the XLog to see if the user has surpassed their current
 * max and goal for a particular Weights activity. If their max has been surpassed, then the appropriate max attribute
 * is updated, the bool attribute append is set to false, and the outfile is closed and opened so that the file can be
 * re-written to reflect these changes. If their goal has been reached, then the appropriate goal attribute is updated
 * and the user will be asked to set a new goal.
 */
template <class FUNC, class FUNC2>
void User::Max_Goal_Check(string dt, char name, string type, int & max, int goal, FUNC SetNewGoal, FUNC2 SetNewMax)
{
	for (int i = 0; i < XLog.size(); i++)
		if (XLog[i]->GetDate() == dt)
			if (XLog[i]->Get_A_name() == name)
				if (XLog[i]->GetType() == type)
				{
					int * temp = XLog[i]->GetWeights();
					for (int j = 0; j < XLog[i]->GetSets(); j++)
					{
						if (temp[j] >= max)
						{
							int m = temp[j];
							cout << "Congratulations! You surpassed you're " << type << " max!\n";
							(this->*SetNewMax)(m);
							append = false;
							outfile.close();
							outfile.open(filename.c_str());
						}
						if (temp[j] >= goal)
						{
							cout << "Congratulations! You reached you're " << type << " goal!\n";
							(this->*SetNewGoal)();
						}
					}
				}
}

/* Function : Appending()
 * Return value : bool
 * Parameters : none
 * Description : This function will return the bool value of append. It is used in the application
 * program to determine how data is written to the user's log file.
 */
bool User::Appending()
{
	return append;
}

							  // End of Misc Functions //

							// Beginning of File Writers //

/* Function : Write_File_Heading() 
 * Return value : none
 * Parameters : none
 * Description : This function will write a heading to the outfile just above where all
 * activities are listed.
 */
void User::Write_File_Heading() 
{
	outfile << left << setw(5) << "KEY";
	outfile << left << setw(10) << "DATE";
	outfile << right << setw(20) << "TYPE";
	outfile << right << setw(20) << "DURATION";
	outfile << right << setw(20) << "LOCATION";
	outfile << right << setw(10) << "SETS";
	outfile << right << setw(20) << "SET_REPS";
	outfile << right << setw(30) << "SET_WEIGHT" << endl;
	outfile << string(140, '-') << endl;
}

/* Function : Write_File_Profile()
 * Return value : none
 * Parameters : none
 * Description : This function will write out the user's profile to the outfile in a format that
 * can be easily extracted by the parameterized constructor.
 */
void User::Write_File_Profile()
{
	outfile << "Name: " << f_name << ' ' << l_name << endl;
	outfile << "Age: " << age << endl;
	outfile << "Height(inches): " << height << endl;
	outfile << "Weight(lbs): " << weight << endl;
	outfile << "Bench_Press_Max: " << BP_max << endl;
	outfile << "Dead_Lift_Max: " << DL_max << endl;
	outfile << "Squat_Max: " << SQ_max << endl;
	outfile << "Bench_Press_Goal: " << BP_goal << endl;
	outfile << "Dead_Lift_Goal: " << DL_goal << endl;
	outfile << "Squat_Goal: " << SQ_goal << endl;
	outfile << string(140, '-') << endl;
}

/* Function : Write_File_Activities()
 * Return value : none
 * Parameters : none
 * Description : This function will write the user's profile, the file heading, and activities 
 * currently in the XLog to the outfile, and will close the outfile upon completion.
 */
void User::Write_File_Activities()
{
	cout << "\nWriting activities to your file... ";
	Write_File_Profile();
	Write_File_Heading();
	for (int i = 0; i < XLog.size(); i++)
		XLog[i]->WriteFile(outfile);
	outfile.close();
	cout << "done\n";
}

/* Function : Append_Activities(string date)
 * Return value : none
 * Parameters : string date
 * Description : This function will append activities in the XLog to the outfile if the date
 * of the activity is the one passed to the function. It is used in the application file to
 * only write the current day's activities.
 */
void User::Append_Activities(string date)
{
	cout << "Appending activities to your file... ";
	for (int i = 0; i < XLog.size(); i++)
		if(XLog[i]->GetDate() == date)
			XLog[i]->WriteFile(outfile);
	outfile.close();
	cout << "done\n";
}

							// End of File Writing Functions //

#endif