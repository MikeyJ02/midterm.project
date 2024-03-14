#include <iostream>
#include <string>
#include <iomanip>

double F_to_M(double x) {
	double value;
	value = x * .3048;
	std::cout << "------------------" << std::endl << "Calculations" << std::endl;
	std::cout << "meters = x .3048 " << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << x << "* .3048 = " << value << std::endl << "------------------" << std::endl;
	std::cout << x << " feet is converted to " << value << " m!" << std::endl;
	return value;
}
double M_to_F(double x) {
	double value; 
	value = x * 3.28084;
		if (value < 0) {
			std::cout << "invalid input, can't have negative distance!";
			return EXIT_FAILURE;
	}
	std::cout << "------------------" << std::endl << "Calculations" << std::endl;
	std::cout << "feet = x * 3.28084 " << std::endl;
	std::cout << "x = " << x << std::endl; 
	std::cout << x << " * 3.28084 = " << value << std::endl << "------------------" << std::endl;
	std::cout << x << " meters is converted to " << value << " ft!" << std::endl;
	return value;
}
double C_to_F(double x) {
	double value;
	std::string state;
	value = (x * (9.0 / 5.0) + 32);
	double absolute_zero = (-273.15 * (9 / 5) + 32);
	if (x < absolute_zero) {
		std::cout << "Invalid input, temperature cannot be below absolute zero!";
		return EXIT_FAILURE;
	}
	if (value < (0 * (9 / 5)+ 32)) {
		state = "solid";
	}
	else if (value < (100 * (9/5) + 32)) {
		state = "liquid";
	}
	else {
		state = "Gas";
	}
	std::cout << "------------------" << std::endl << "Calculations" << std::endl;
	std::cout << "Fahrenheit = (x * (9 / 5) + 32) " << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << "( "<< x << " * (9 / 5) + 32) = " << value << std::endl << "------------------" << std::endl;
	std::cout << x << " C" << " is converted into " << value << " F!" << std::endl;
	std::cout << "In this temperature water is a " << state << "!" << std::endl;
	return value;
}
double F_to_C(double x) {
	double value; 
	std::string state;
	value = ((x - 32) * 5) / 9;
	    if  (value < -273.15) {
			std::cout << "temperature cannot go below absolute zero";
			return EXIT_FAILURE;
		}
	
	if (value < 0) {
		state = "solid";
	}
	else if (value < 100) {
		state = "liquid";
	}
	else {
		state = "Gas";
	
	}
	std::cout << "------------------" << std::endl << "Calculations" << std::endl;
	std::cout << "Celcius = ((x - 32) * 5) / 9 " << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << "((" << x << " - 32) * 5) / 9 = " << value << std::endl << "------------------" << std::endl;
	std::cout << x << " F" << " is converted into " << value << " C!" << std::endl;
	std::cout << "In this temperature water is a  " << state << "!" << std::endl;
	return value; 
}
double G_to_P(double x) {
	double value;
	value = x / 453.592;
	if (value < 0) {
		std::cout << "Invalid input, mass can't be negative!";
		return EXIT_FAILURE;
	}
	std::cout << "------------------" << std::endl << "Calculations" << std::endl;
	std::cout << "pounds = x / 453.592" << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << x << " / 453.592 = " << value << std::endl << "------------------" << std::endl;
	std::cout << x << " g" << " is converted into " << value << " lbs!" << std::endl;
	return value;
}
double P_to_G(double x) {
	double value;
	value = x * 453.592;
	if (value < 0) {
		std::cout << "invalid input, mass can't be negative!";
		return EXIT_FAILURE;

	}
	std::cout << "------------------" << std::endl << "Calculations" << std::endl;
	std::cout << "grams  = x * 453.592" << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << x << " * 453.592 = "<< std::fixed << std::setprecision(3) << value << std::endl << "------------------" << std::endl;
	std::cout << x << " lbs" << " is converted into "<< std::fixed << std::setprecision(3) << value << " g!" << std::endl;
	return value;
}

bool run_program = true;
int main() {
	while (run_program) {
		std::cout << "what do you wish to convert, distance(meters to feet), Temperature(Celsius/Fahrenheit), or mass (gram/pound)?" << std::endl;
		std::cout << "Please write distance, temperature, or mass" << std::endl;
		std::cout << ": ";
		std::string type;
		std::getline(std::cin, type);
		if (type == "distance" || type == "Distance") {
			std::cout << "which system is the input? Metric or Imperial." << std::endl;
			std::cout << "type 1 for Metric(M to F) or 2 for imperial(f to M): ";
			std::string choice;
			std::getline(std::cin, choice);
			int the_choice = stoi(choice);
			if (the_choice == 1) {
				std::cout << "you chose Metric, please enter the distance in meters you want to convert to feet: ";
				std::string meter;
				std::getline(std::cin, meter);
				double meter_db = std::stod(meter);
				if (meter_db < 0) {
					std::cout << "Distance input cannot be negative!";
					return EXIT_FAILURE;
				}
				M_to_F(meter_db);

			}
			else if (the_choice == 2) {
				std::cout << "you chose Imperial, please enter the distance in feet you want to convert to meters: ";
				std::string feet;
				std::getline(std::cin, feet);
				double feet_db = std::stod(feet);
				if (feet_db < 0) {
					std::cout << "Distance input cannot be negative!";
					return EXIT_FAILURE;
				}
				F_to_M(feet_db);
			}
			else {
				std::cout << "Invalid number inputted" << std::endl;
				return	EXIT_FAILURE;
			}
		}

		if (type == "Temperature" || type == "temperature") {
			std::cout << "which system is the input? Metric or Imperial." << std::endl;
			std::cout << "Type 1 for Metric(C to F) or 2 for Imperial(F to C): ";
			std::string choice;
			std::getline(std::cin, choice);
			int the_choice = stoi(choice);
			if (the_choice == 1) {
				std::cout << "you chose Metric, please enter the temperature in Celcius you wish to convert to Fahrenheit: ";
				std::string Celcius;
				double absolute_zero = -273.15;
				std::getline(std::cin, Celcius);
				double Celcius_db = std::stod(Celcius);
				if (Celcius_db < absolute_zero) {
					std::cout << "Invalid input, can't get colder than absolute zero!";
					return EXIT_FAILURE;
				}
				C_to_F(Celcius_db);
			}
			if (the_choice == 2) {
				std::cout << "you chose Imperial, please enter the temperature in Fahrenheit you wish to convert to Celcius: ";
				std::string fahrenheit;
				double absolute_zero =  (- 273.15 * (9 / 5)) + 32;
				std::getline(std::cin, fahrenheit);
				double fahrenheit_db = std::stod(fahrenheit);
				if (fahrenheit_db < absolute_zero) {
					std::cout << "Invalid input, temp can't go below absolute zero!";
					return EXIT_FAILURE;
				}
				F_to_C(fahrenheit_db);
			}
			else if (the_choice != 1 && the_choice != 2) {
				std::cout << "Invalid input" << std::endl;
				return EXIT_FAILURE;
			}

		}

		else if (type == "Mass" || type == "mass") {
			std::cout << "Which system is the input? Metric or Imperial." << std::endl;
			std::cout << "Type 1 for Metric(G to P), or 2 for Imperial(P to G): ";
			std::string choice;
			std::getline(std::cin, choice);
			int the_choice = stoi(choice);
			if (the_choice == 1) {
				std::cout << "you chose Metric, please enter the mass in grams  you want to convert to pounds: ";
				std::string grams;
				std::getline(std::cin, grams);
				double grams_db = std::stod(grams);
				if (grams_db < 0) {
					std::cout << "Mass input cannot be negative!";
					return EXIT_FAILURE;
				}
				G_to_P(grams_db);
			}
			else if (the_choice == 2) {
				std::cout << "you chose Imperial, please enter the mass in pounds you wish to convert to Grams: ";
				std::string pounds;
				std::getline(std::cin, pounds);
				double pounds_db = std::stod(pounds);
				if (pounds_db < 0) {
					std::cout << "Mass input cannot be negative!";
					return EXIT_FAILURE;
				}
				P_to_G(pounds_db);
			}
		}

		if (type != "distance" && type != "Distance" && type != "Temperature" && type != "temperature" && type != "Mass" && type != "mass") {
			std::cout << "invalid input!";
			return EXIT_FAILURE;
		}

		std::cout << "Would you like to do another calculation? y/n: ";
		std::string answer;
		std::getline(std::cin, answer);
		if (answer == "Y" || answer == "y") {
			run_program = true;
		}
		else if (answer == "N" || answer == "n"){
			run_program = false;
		}
	}
	std::cout << "thanks for using this conversion calculator!";
	return EXIT_SUCCESS;
}