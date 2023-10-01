#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

double calculateIncome(double husbandIncome, double wifeIncome) {
	double totalIncome = husbandIncome + wifeIncome;
	return totalIncome;
}

double calculateExpense(double gasExpense, double foodExpense, double mortgageExpense, double utilityExpense, double groceriesExpense, double billsExpense) {
	double totalExpense = gasExpense + foodExpense + mortgageExpense + utilityExpense + groceriesExpense + billsExpense;
	return totalExpense;
}







int main() {

	/* Variables that will store
	income, savings and investment
	in dollar amount*/
	double totalIncome;
	double husbandIncome;
	double wifeIncome;
	double savings = 0;
	double investments = 0;

	/* Variables that will store
	all expenses in dollar amount*/
	double gasExpense;
	double foodExpense;
	double mortgageExpense;
	double utilityExpense;
	double groceriesExpense;
	double billsExpense;

	/* Variables that will store
	percent values of saving and investments*/
	double savingsPercent;
	double investmentPercent;
	double piggyBank;
	double piggyBankPercent;

	/* Variables that will store
	total income, total expense,
	money remaining after expense and savings*/
	double totalExpense;
	double moneyRemaining = 0;

	string save;
	string invest;


	do {
		cout << "What is the husband's income?\n";
		cin >> husbandIncome;

		if (husbandIncome >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);


	do {
		cout << "What is the wife's income?\n";
		cin >> wifeIncome;

		if (wifeIncome >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	do {
		cout << "How much was spent on gas?\n";
		cin >> gasExpense;

		if (gasExpense >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	do {
		cout << "How much was spent on eating out?\n";
		cin >> foodExpense;

		if (foodExpense >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	do {
		cout << "How much was spent on the mortgage?\n";
		cin >> mortgageExpense;

		if (mortgageExpense >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	do {
		cout << "How much was spent on utilities?\n";
		cin >> utilityExpense;

		if (utilityExpense >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	do {
		cout << "How much was spent on groceries?\n";
		cin >> groceriesExpense;

		if (groceriesExpense >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	do {
		cout << "How much was spent on bills?\n";
		cin >> billsExpense;

		if (billsExpense >= 0) {
			break;
		}
		else {
			cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
		}
	} while (true);

	cin.ignore();

	cout << "Do you put money in savings?\n";
	getline(cin, save);

	cout << "Do you put money aside for investing?\n";
	getline(cin, invest);

	cout << setprecision(2) << fixed;

	totalIncome = husbandIncome + wifeIncome;

	double gasPercent = (gasExpense / totalIncome) * 100;
	double foodPercent = (foodExpense / totalIncome) * 100;
	double mortgagePercent = (mortgageExpense / totalIncome) * 100;
	double utilityPercent = (utilityExpense / totalIncome) * 100;
	double groceriesPercent = (groceriesExpense / totalIncome) * 100;
	double billsPercent = (billsExpense / totalIncome) * 100;

	if (save == "yes" || save == "Yes" || save == "Y" || save == "y") {
		cout << "How much did you set aside into savings?\n";
		cin >> savings;
	}

	else if (save == "no" || save == "No" || save == "n" || save == "N") {
		cout << endl;
		savings = 0;
	}

	if (invest == "yes" || invest == "Yes" || invest == "Y" || invest == "y") {
		cout << "How much was set aside for investments?\n";
		cin >> investments;
	}

	else if (invest == "no" || invest == "No" || invest == "n" || invest == "N") {

		cout << endl;
		investments = 0;
	}


	totalIncome = calculateIncome(husbandIncome, wifeIncome);
	totalExpense = calculateExpense(gasExpense, foodExpense, mortgageExpense, utilityExpense, groceriesExpense, billsExpense);
	piggyBank = savings + investments;
	piggyBankPercent = (piggyBank / totalIncome) * 100;
	savingsPercent = (savings / totalIncome) * 100;
	investmentPercent = (investments / totalIncome) * 100;
	moneyRemaining = totalIncome - totalExpense - piggyBank;

	cout << endl;

	if (totalExpense > totalIncome) {
		cout << "How the fuck are you going to spend more than you make???\n";
	}

	cout << endl;

	cout << "Your total household income is $" << totalIncome << endl;
	cout << "Your total expense is $" << totalExpense << endl;
	cout << gasPercent << "% of the income was spent on gas." << endl;
	cout << foodPercent << "% of the income was spent on eating out." << endl;
	cout << mortgagePercent << "% of the income was spent on the mortgage." << endl;
	cout << utilityPercent << "% of the income was spent on utilities." << endl;
	cout << groceriesPercent << "% of the income was spent on groceries." << endl;
	cout << billsPercent << "% of the income was spent on bills." << endl;
	cout << endl;
	cout << "Your total amount set aside for savings and investment is $" << piggyBank << endl;
	cout << "This accounts for " << piggyBankPercent << "% of the total household income." << endl;
	cout << "Your remaining cash available is $" << moneyRemaining;

	cout << endl;
	return 0;
}










