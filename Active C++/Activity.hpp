// Filename : Activity.hpp
// Author : Mike Dito
// Description : This is the specification and implementation file for the Activity class.
// It provides a blueprint for an Activity object. It is the base class which two classes
// (Cardio & Weights) will be derived from.

#ifndef _ACTIVITY_HPP
#define _ACTIVITY_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/* Function : Make_UPPER(string s)
 * Return value : string
 * Parameters : string s
 * Description : This function will modify a string so that all it's characters are upper case.
 */
string Make_UPPER(string s)
{
	for (int i = 0; i < s.size(); i++)
		s.at(i) = toupper(s.at(i));
	return s;
}

class Activity
{
	public:
		// Constructors
		Activity();
		Activity(string d);
		Activity(istream & ins);

		// Virtual Functions
		virtual void WriteFile(ostream & outs);
		virtual	void SetType(istream & ins);
		virtual void SetDuration(istream & ins);

		// Virtual Functions defined in child classes
		virtual int GetSets();
		virtual int * GetWeights();

		// Inherited Functions that children will not change
		void SetDate(string d);
		void SetLocation(istream & ins);
		char Get_A_name();
		string GetDate();
		string GetType();
		string GetLocation();
		int GetDuration();
		void Make_All_UPPER();

		// Friend Functions
		friend ostream & operator << (ostream & outs, const Activity & A);

	protected:
		char A_name;
		string date;
		string type;
		string location;
		int duration;
};

							// Beginning of Constructors //

/* Function : Activity()
 * Return value : none
 * Parameters : none
 * Description : This function is the default constructor.
 */
Activity::Activity()
{
	A_name = 'A';
	date = "";
	type = "";
	location = "";
	duration = 0;
}

/* Function : Activity(string d)
 * Return value : none
 * Parameters : string d
 * Description : This function is a parameterized constructor. It accepts a string
 * object as a parameter and sets the date attribute to that value. It then calls the
 * mutators to finish constructing the object.
 */
Activity::Activity(string d)
{
	A_name = 'A';
	date = d;
	cin.ignore();
	SetType(cin);
	SetLocation(cin);
	SetDuration(cin);
	Make_All_UPPER();
}

/* Function : Activity(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This function is a parameterized constructor. It accepts an istream
 * object as a parameter and uses the extraction operator to extract data from the file
 * into appropriate attributes, and calls a function to make all strings uppercase.
 */
Activity::Activity(istream & ins)
{
	ins >> A_name >> date >> type >> duration >> location;
	Make_All_UPPER();
}

							// End of Constructors //

						// Beginning of Virtual Functions //

/* Function : WriteFile(ostream & outs)
 * Return value : none
 * Parameters : ostream & outs
 * Description : This function will write the contents of an Activity object to
 * the ouput stream in a nice format.
 */
void Activity::WriteFile(ostream & outs)
{
	outs << setw(5) << left << "A";
	outs << setw(10) << left << date;
	outs << setw(20) << right << type;
	outs << setw(20) << right << duration;
	outs << setw(20) << right << location << endl;
}

/* Function : SetType(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the type attribute of an 
 * Activity object.
 */
void Activity::SetType(istream & ins)
{  
	cout << "\nEnter the type of activity: ";
	getline(ins, type);
}

/* Function : SetDuration(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the duration attribute of
 * an Activity object.
 */
void Activity::SetDuration(istream & ins)
{
	cout << "\nEnter the duration of the activity (minutes): ";
	ins >> duration;
}

					// Virtual Functions defined in child classes //

/* Function : GetSets()
 * Return value : int
 * Parameters : none
 * Description : This is an accessor function that will return the sets attribute
 * of an Activity object. Sets are used in the Weights class, a class derived from
 * Activity. Here we simply return 0. This function will be modified in the Weights class.
 */
int Activity::GetSets()
{
	return 0;
}

/* Function : GetWeights()
 * Return value : int *
 * Parameters : none
 * Description : This is an accessor function that will return an integer pointer to
 * an attribute containing the weights used for each set. That attribute is defined in
 * the Weights class, a class derived from Activity. Here we simply return a NULL 
 * pointer. This function will be modified in the Weights class.
 */
int * Activity::GetWeights()
{
	int * temp = NULL;
	return temp;
}

							// End of Virtual Functions //

						// Beginning of Inherited Functions //

/* Function : SetDate(string d)
 * Return value : none
 * Parameters : string d
 * Description : This is a mutator function that will set the date attribute.
 */
void Activity::SetDate(string d)
{
	date = d;
}

/* Function : SetLocation(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the location attribute.
 */
void Activity::SetLocation(istream & ins)
{
	cout << "\nEnter the location it was done at: ";
	getline(ins, location);
}

/* Function : Get_A_name()
 * Return value : char
 * Parameters : none
 * Description : This is an accessor function that will return the A_name attribute.
 */
char Activity::Get_A_name()
{
	return A_name;
}

/* Function : GetDate()
 * Return value : string
 * Parameters : none
 * Description : This is an accessor function that will return the date attribute.
 */
string Activity::GetDate()
{
	return date;
}

/* Function : GetType()
 * Return value : string
 * Parameters : none
 * Description : This is an accessor function that will return the type attribute.
 */
string Activity::GetType()
{
	return type;
}		

/* Function : GetLocation()
 * Return value : string
 * Parameters : none
 * Description : This is an accessor function that will return the location attribute.
 */
string Activity::GetLocation()
{
	return location;
}		

/* Function : GetDuration()
 * Return value : int
 * Parameters : none
 * Description : This is an accessor function that will return the duration attribute.
 */
int Activity::GetDuration()
{
	return duration;
}

/* Function : Make_All_UPPER()
 * Return value : none
 * Parameters : none
 * Description : This function will change the contents of the 'type' and 'location' attributes
 * to be upper-case characters.
 */
void Activity::Make_All_UPPER()
{
	type = Make_UPPER(type);
	location = Make_UPPER(location);
}

							// End of Inherited Functions //

						// Beginning of the Friend Functions //

/* Function : ostream & operator << (ostream & outs, const Activity & A)
 * Return value : ostream 
 * Parameters : ostream & outs, const Activity & A
 * Description : This is a friend function of the Activity class, the insertion operator.
 * It will insert the type of Activity to the output stream.
 */
ostream & operator << (ostream & outs, const Activity & A)
{
	outs << A.type << endl;
	return outs;
}

							// End of the Friend Functions //

#endif