// Filename : Cardio.hpp
// Author : Mike Dito
// Description : This is the specification and implementation file for the Cardio class.
// It provides a blueprint for a Cardio object. It is derived from the Activity class,
// and modifies virtual functions to satisfy the requirements for a Cardio object.

#ifndef _CARDIO_HPP
#define _CARDIO_HPP

#include <iostream>
#include <iomanip>
#include "Activity.hpp"

using namespace std;

class Cardio : public Activity
{
	public:
		// Constructors
		Cardio();
		Cardio(string d);	
		Cardio(istream & ins);

		/*  
			Inherited Functions
			-------------------
			void SetDate(string d);
			void SetLocation(istream & ins);
			char Get_A_name();
			string GetDate();
			string GetType();
			string GetLocation();
			int GetDuration();
			void Make_All_UPPER();
			friend ostream & operator << (ostream & outs, const Activity & A);
		*/

		// Modified Virtual Functions
		void WriteFile(ostream & outs);
		void SetType(istream & ins);
		void SetDuration(istream & ins);

	private:
		/* 
			Inherited Attributes
			--------------------
			char A_name;
  			string date;
  			string type;
  			string location;
 			int duration;
		 */

};

								// Beginning of Constructors //

/* Function : Cardio()
 * Return value : none
 * Parameters : none
 * Description : This function is the default constructor.
 */
Cardio::Cardio()
{
	A_name = 'C';
	date = "";
	type = "";
	location = "";
	duration = 0;
}

/* Function : Cardio(string d)
 * Return value : none
 * Parameters : string d
 * Description : This function is a parameterized constructor. It accepts a string
 * object as a parameter and sets the date attribute to that value. It then calls the
 * mutators to finish constructing the object.
 */
Cardio::Cardio(string d)
{
	A_name = 'C';
	date = d;
	cin.ignore();
	SetType(cin);
	SetLocation(cin);
	SetDuration(cin);
	Make_All_UPPER();
}

/* Function : Cardio(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This function is a parameterized constructor. It accepts an istream
 * object as a parameter and uses the extraction operator to extract data from the file
 * into appropriate attributes, and calls a function to make all strings uppercase.
 */
Cardio::Cardio(istream & ins)
{
	ins >> A_name >> date >> type >> duration >> location;
	Make_All_UPPER();
}

								// End of Constructors //

						// Beginning of Modified Virtual Functions //

/* Function : WriteFile(ostream & outs)
 * Return value : none
 * Parameters : ostream & outs
 * Description : This function will write the contents of a Cardio object to
 * the ouput stream in a nice format.
 */
void Cardio::WriteFile(ostream & outs)
{
	outs << setw(5) << left << "C";
	outs << setw(10) << left << date;
	outs << setw(20) << right << type;
	outs << setw(20) << right << duration;
	outs << setw(20) << right << location << endl;
}

/* Function : SetType(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator functioon that will set the type attribute.
 */
void Cardio::SetType(istream & ins)
{
	cout << "\nEnter the type of cardio activity: ";
	getline(ins, type);
}

/* Function : SetDuration(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator functioon that will set the duration attribute.
 */
void Cardio::SetDuration(istream & ins)
{
	cout << "\nEnter the duration of cardio activity: ";
	ins >> duration;
}

							// End of Virtual Functions //

#endif