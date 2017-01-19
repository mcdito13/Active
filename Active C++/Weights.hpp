// Filename : Weights.hpp
// Author : Mike Dito
// Description : This is the specification and implementation file for the Weights class.
// It provides a blueprint for a Weights object. It is derived from the Activity class, and
// extends the class by having it's own unique functions, modifying virtual functions, and
// having unique attributes that general activities do not have.

#ifndef _WEIGHTS_HPP
#define _WEIGHTS_HPP

#include <iostream>
#include <iomanip>
#include "Activity.hpp"

using namespace std;

class Weights : public Activity
{
	public:
		// Constructors
		Weights();
		Weights(string d);
		Weights(istream & ins);

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
		int GetSets();
		int * GetWeights();

		// Functions Unique to Weights
		string GetSetReps();
		string GetSetWeights();
		void SetSets(istream & ins);
		void SetSetRepsAndWeights(istream & ins);
		void ReadSetRepsAndWeights(istream & ins);
		
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
		int sets;
		int * set_reps;
		int * set_weights;
};

								// Beginning of Constructors //

/* Function : Weights()
 * Return value : none
 * Parameters : none
 * Description : This function is the default constructor.
 */
Weights::Weights()
{
	A_name = 'W';
	date = "";
	type = "";
	location = "";
	duration = 0;
	sets = 0;
	set_reps = NULL;
	set_weights = NULL;
}

/* Function : Weights(string d)
 * Return value : none
 * Parameters : string d
 * Description : This function is a parameterized constructor. It accepts a string
 * object as a parameter and sets the date attribute to that value. It then calls the
 * mutators to finish constructing the object.
 */
Weights::Weights(string d)
{
	A_name = 'W';
	date = d;
	duration = 0;
	cin.ignore();
	SetLocation(cin);
	SetType(cin);
	SetSets(cin);
	SetSetRepsAndWeights(cin);
	Make_All_UPPER();
}

/* Function : Weights(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This function is a parameterized constructor. It accepts an istream
 * object as a parameter, uses the extraction operator to extract data from the file
 * into appropriate attributes, uses a special mutator function to read the dynamic
 * arrays for set_reps and set_weights, and calls a function to make all strings uppercase. 
 */
Weights::Weights(istream & ins)
{
	ins >> A_name >> date >> type >> duration >> location >> sets;
	ReadSetRepsAndWeights(ins);
	Make_All_UPPER();
}

								// End of Constructors //

						// Beginning of Modified Virtual Functions //

/* Function : WriteFile(ostream & outs)
 * Return value : none
 * Parameters : ostream & outs
 * Description : This function will write the contents of a Weights object to
 * the ouput stream in a nice format.
 */
void Weights::WriteFile(ostream & outs)
{
	outs << left << setw(5) << "W";
	outs << left << setw(10) << date;
	outs << right << setw(20) << type;
	outs << right << setw(20) << duration;
	outs << right << setw(20) << location;
	outs << right << setw(10) << sets;
	outs << right << setw(20) << GetSetReps();
	outs << right << setw(30) << GetSetWeights() << endl;
}

/* Function : SetType(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator functioon that will set the type attribute.
 */
void Weights::SetType(istream & ins)
{
	cout << "\nEnter the type of weight activity: ";
	getline(ins, type);
}

/* Function : SetDuration(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the duration attribute.
 */
void Weights::SetDuration(istream & ins)
{
	cout << "\nEnter the duration of weight activity: ";
	ins >> duration;
}

								// End of Virtual Functions //

						// Beginning of Functions unique to Weights //

/* Function : GetSets()
 * Return value : int
 * Parameters : none
 * Description : This is an accessor function that will return the value of the sets 
 * attribute.
 */
int Weights::GetSets()
{
	return sets;
}

/* Function : GetSetReps()
 * Return value : string
 * Parameters : none
 * Description : This is an accessor function that will return the contents of the set_reps
 * dynamic array as a string variable. It is used when writing data to the outfile.
 */
string Weights::GetSetReps()
{
	string reps;
	for (int i = 0; i < sets; i++)
	{
		reps += to_string(set_reps[i]);
		if (i + 1 != sets)
			reps += ' ';
	}
		return reps;
}

/* Function : GetSetWeights()
 * Return value : string
 * Parameters : none
 * Description : This is an accessor function that will return the contents of the set_weights
 * dynamic array as a string variable. It is used when writing data to the outfile.
 */
string Weights::GetSetWeights()
{
	string weights;
	for (int i = 0; i < sets; i++)
	{
		weights += to_string(set_weights[i]);
		if (i + 1 != sets)
			weights += ' ';
	}
	return weights;
}

/* Function : GetWeights()
 * Return value : int *
 * Parameters : none
 * Description : This is an accessor function that will return a pointer to the set_weights
 * dynamic array. It is used in User::Max_Goal_Check(...). 
 */
int * Weights::GetWeights()
{
	return set_weights;
}

/* Function : SetSets(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the sets attribute.
 */
void Weights::SetSets(istream & ins)
{
	cout << "\nEnter the # sets completed: ";
	ins >> sets;
}

/* Function : SetSetRepsAndWeights(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the attribute values in the 
 * dynamic arrays for set_reps and set_weights. It is designed to receive input directly
 * from the user.
 */
void Weights::SetSetRepsAndWeights(istream & ins)
{
	set_reps = new int[sets];
	set_weights = new int[sets];
	for (int i = 1; i <= sets; i++)
	{
		cout << "Enter # reps for set[" << i << "]: ";
		ins >> set_reps[i - 1];
		cout << "Enter weight amount for set[" << i << "]: ";
		ins >> set_weights[i - 1];
	}
}

/* Function : ReadSetRepsAndWeights(istream & ins)
 * Return value : none
 * Parameters : istream & ins
 * Description : This is a mutator function that will set the attribute values in the dynamic
 * arrays for set_reps and set_weights. It is designed to extract input from a file.
 */
void Weights::ReadSetRepsAndWeights(istream & ins)
{
	set_reps = new int[sets];
	set_weights = new int[sets];
	for (int i = 1; i <= sets; i++)
		ins >> set_reps[i - 1];
	for (int i = 1; i <= sets; i++)
		ins >> set_weights[i - 1];
}

							// End of Functions unique to Weights //

#endif
