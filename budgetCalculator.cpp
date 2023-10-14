#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>



using namespace std;


double calculateIncome(double singleIncome, double spouseIncome) {
	double totalIncome = singleIncome + spouseIncome;
	return totalIncome;
}

double calculateExpense(double gasExpense, double foodExpense, double mortgageExpense, double utilityExpense, double groceriesExpense, double billsExpense){
	double totalExpense = gasExpense + foodExpense + mortgageExpense + utilityExpense + groceriesExpense + billsExpense;
	return totalExpense;
}

void expenseMode(int programChoice){

	double totalIncome;
	double singleIncome;
	double spouseIncome;
	double savings = 0;
	double investments = 0;
	
	double gasExpense = 0;
	double foodExpense = 0;
	double mortgageExpense = 0;
	double utilityExpense = 0;
	double groceriesExpense = 0;
	double billsExpense = 0;
	
	
	
	double savingsPercent;
	double investmentPercent;
	double piggyBank;
	double piggyBankPercent;
	
	double totalExpense;
	double moneyRemaining = 0;
	double remainingPercent;
	string save;
	string invest;
	



	do {
				cout << "What is your income?\n";
				cin >> singleIncome;

				if (singleIncome >= 0) {
					break;
				}
				else {
					cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				cout << "What is the spouse's income?\n";
				cin >> spouseIncome;

				if (spouseIncome >= 0) {
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

			totalIncome = singleIncome + spouseIncome;

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

			totalIncome = calculateIncome(singleIncome, spouseIncome);
			totalExpense = calculateExpense(gasExpense, foodExpense, mortgageExpense, utilityExpense, groceriesExpense, billsExpense);
			piggyBank = savings + investments;
			piggyBankPercent = (piggyBank / totalIncome) * 100;
			savingsPercent = (savings / totalIncome) * 100;
			investmentPercent = (investments / totalIncome) * 100;
			moneyRemaining = totalIncome - totalExpense - piggyBank;
			remainingPercent = (moneyRemaining / totalIncome) * 100;

			cout << endl;

			if (totalExpense > totalIncome) {
				cout << "How the fuck are you going to spend more than you make???\n";
			}

			cout << endl;

			cout << "Your total household income is $" << totalIncome << endl;
			cout << "Your total expense is $" << totalExpense << endl;
			cout << endl;
			cout << gasPercent << "% of the income was spent on gas." << endl;
			cout << foodPercent << "% of the income was spent on eating out." << endl;
			cout << mortgagePercent << "% of the income was spent on the mortgage." << endl;
			cout << utilityPercent << "% of the income was spent on utilities." << endl;
			cout << groceriesPercent << "% of the income was spent on groceries." << endl;
			cout << billsPercent << "% of the income was spent on bills." << endl;
			cout << endl;
			cout << "Your total amount set aside for savings and investment is $" << piggyBank << endl;
			cout << "This accounts for " << piggyBankPercent << "% of the total household income." << endl;
			cout << "Your remaining cash available is, $" << moneyRemaining << " this is " << remainingPercent << "% of the total income." << endl;


}

void budgetMode(int programChoice){


	double totalIncome;
	double singleIncome;
	double spouseIncome;
	double savings = 0;
	double investments = 0;
	
	double gasExpense = 0;
	double foodExpense = 0;
	double mortgageExpense = 0;
	double utilityExpense = 0;
	double groceriesExpense = 0;
	double billsExpense = 0;
	
	
	
	double savingsPercent;
	double investmentPercent;
	double piggyBank;
	double piggyBankPercent;
	
	double totalExpense;
	double moneyRemaining = 0;
	string save;
	string invest;
		double savingsRate;
		double investRate;
		double gasRate;
		double foodRate;
		double mortgageRate;
		double utilityRate;
		double billRate;
		double groceriesRate;
		string incomeChoice;
		const int arraySize = 3;
		string topExpense[arraySize];

		
			do {
				cout << "Single income or dual income" << endl;
				cin >> incomeChoice;

				if (incomeChoice == "single" || incomeChoice == "Single") {
					cout << "What is your income? " << endl;
					cin >> singleIncome;
					cout << endl;
					cout << "$" << singleIncome << endl;

					for (int i = 0; i < arraySize; i++) {
						cout << "Top 3 expenses? " << endl;
						cin >> topExpense[i];
					}

					for (int i = 0; i < arraySize; i++) {
						do {

							if (topExpense[i] == "gas" || topExpense[i] == "Gas") {
								cout << "What is your monthly cost of gas? " << endl;
								cin >> gasExpense;
								break;
							}
							if (topExpense[i] == "food" || topExpense[i] == "Food") {
								cout << "What is your monthly cost of eating out? " << endl;
								cin >> foodExpense;
								break;
							}
							if (topExpense[i] == "mortgage" || topExpense[i] == "Mortgage" || topExpense[i] == "rent" || topExpense[i] == "Rent") {
								cout << "What is your monthly cost of mortgage/rent? " << endl;
								cin >> mortgageExpense;
								break;
							}
							if (topExpense[i] == "groceries" || topExpense[i] == "Groceries") {
								cout << "What is your monthly cost of groceries? " << endl;
								cin >> groceriesExpense;
								break;
							}
							if (topExpense[i] == "bills" || topExpense[i] == "Bills") {
								cout << "What is your monthly cost of bills (non-utility)? " << endl;
								cin >> billsExpense;
								break;
							}
							if (topExpense[i] == "utility" || topExpense[i] == "Utilitiy" || topExpense[i] == "Utilities" || topExpense[i] == "utilities") {
								cout << "What is your monthly cost of utilities? " << endl;
								cin >> utilityExpense;
								break;
							} 
							
						} while (true);
					}
					cout << endl;
					cout << "Gas expense: $" << gasExpense << endl;
					cout << "Food expense: $" << foodExpense << endl;
					cout << "Mortgage/Rent expense: $" << mortgageExpense << endl;
					cout << "Groceries expense: $" << groceriesExpense << endl;
					cout << "Bills expense: $" << billsExpense << endl;
					cout << "Utility expense: $" << utilityExpense << endl;
					
				}

				if (incomeChoice == "dual" || incomeChoice == "Dual") {
					cout << "What is your spouse's income? " << endl;
					cin >> spouseIncome;
					cout << endl;
					cout << "What is your income? " << endl;
					cin >> singleIncome;
					totalIncome = singleIncome + spouseIncome;
					cout << endl;
					cout << "$" << totalIncome << endl;

					for (int i = 0; i < arraySize; i++) {
						cout << "Top 3 expenses? " << endl;
						cin >> topExpense[i];
					}

					for (int i = 0; i < arraySize; i++){
						do {

							if (topExpense[i] == "gas" || topExpense[i] == "Gas") {
								cout << "What is your monthly cost of gas? " << endl;
								cin >> gasExpense;
								break;
							}
							if (topExpense[i] == "food" || topExpense[i] == "Food") {
								cout << "What is your monthly cost of eating out? " << endl;
								cin >> foodExpense;
								break;
							}
							if (topExpense[i] == "mortgage" || topExpense[i] == "Mortgage" || topExpense[i] == "rent" || topExpense[i] == "Rent") {
								cout << "What is your monthly cost of mortgage/rent? " << endl;
								cin >> mortgageExpense;
								break;
							}
							if (topExpense[i] == "groceries" || topExpense[i] == "Groceries") {
								cout << "What is your monthly cost of groceries? " << endl;
								cin >> groceriesExpense;
								break;
							}
							if (topExpense[i] == "bills" || topExpense[i] == "Bills") {
								cout << "What is your monthly cost of bills (non-utility)? " << endl;
								cin >> billsExpense;
								break;
							}
							if (topExpense[i] == "utility" || topExpense[i] == "Utilitiy" || topExpense[i] == "Utilities" || topExpense[i] == "utilities") {
								cout << "What is your monthly cost of utilities? " << endl;
								cin >> utilityExpense;
								break;
							}

						} while (true);
					}
				}
				

			break;	
			} while (true);

			cout << endl;
			cout << "Gas expense: $" << gasExpense << endl;
			cout << "Food expense: $" << foodExpense << endl;
			cout << "Mortgage/Rent expense: $" << mortgageExpense << endl;
			cout << "Groceries expense: $" << groceriesExpense << endl;
			cout << "Bills expense: $" << billsExpense << endl;
			cout << "Utility expense: $" << utilityExpense << endl;
			
			
		

}


int main(){
	
	


	
	
	
	double totalIncome;
	double singleIncome;
	double spouseIncome;
	double savings = 0;
	double investments = 0;
	
	double gasExpense = 0;
	double foodExpense = 0;
	double mortgageExpense = 0;
	double utilityExpense = 0;
	double groceriesExpense = 0;
	double billsExpense = 0;
	
	double gasPercent;
	double foodPercent;
	double mortgagePercent;
	double utilityPercent;
	double groceriesPercent;
	double billsPercent;

	double savingsPercent;
	double investmentPercent;
	double piggyBank;
	double piggyBankPercent;
	
	double totalExpense;
	double moneyRemaining = 0;
	
	string save;
	string invest;
	string startProgram;
	int programChoice;

	double savingsRate;
	double investRate;
	double gasRate;
	double foodRate;
	double mortgageRate;
	double utilityRate;
	double billRate;
	double groceriesRate;
	string incomeChoice;
	const int arraySize = 3;
	string topExpense[arraySize];
	


	do{
	cout << "Would you like to continue the program?? " << endl;
	cin >> startProgram;
	cout << endl;

	if(startProgram == "yes" || startProgram == "Yes" || startProgram == "y" || startProgram == "Y"){
		

	cout << "Which program would you like to run? " << endl;
	cout << "1: Expense Mode " << endl; 
	cout << "2: Budget Mode " << endl;
	cin >> programChoice;
	cout << endl;

	


	switch(programChoice){
		
		
		case 1: cout << "You have chosen expense mode " << endl;
			expenseMode(programChoice);
		break;

		case 2: cout << "You have chosen budget mode " << endl;
			budgetMode(programChoice);
		break;

		default: cout << "Invalid choice, please try again " << endl;	

	} 	
			
		}
		else {
			cout << endl;
			cout << "Ending program, goodbye. " << endl;
			cout << endl;
			return 0;
			
		}
	
	
		}while(true);
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	