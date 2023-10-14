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

double calculateExpense(double transportationExpense, double foodExpense, double mortgageExpense, double utilityExpense, double groceriesExpense, double billsExpense){
	double totalExpense = transportationExpense + foodExpense + mortgageExpense + utilityExpense + groceriesExpense + billsExpense;
	return totalExpense;
}

double calculateHousing(double mortgageExpense, double utilityExpense){
	double housingExpense = mortgageExpense + utilityExpense;
	return housingExpense;
}

double calculateHousingPercent(double mortgageExpense, double utilityExpense, double totalIncome){
	double housingExpense = calculateHousing(mortgageExpense, utilityExpense);
	double housingPercent = (housingExpense / totalIncome ) *100;
	return housingPercent;
}

void maxHousingRule(double housingPercent, double const MAXHOUSING){

	int adjustBudget;
	string expenseCut;
	std:: string expenseList[]= {"food", "Food", "transportation", "Transportation", "bills", "Bills", "utility", "Utility", "utilities", "Utilities", "mortgage", "Mortgage", "rent", "Rent", "groceries", "Groceries"};
	bool isValid = false;
	double cutAmount = 0.00;

	if(housingPercent <= MAXHOUSING){
		std:: cout << housingPercent << "% of your budget is allocated towards housing. You are well within housing budget! "<< endl;
	}
	else {
		std:: cout << housingPercent << "% of your income is allocated towards housing. You are above housing budget, consider adjusting expenses. " << endl;
		std:: cout << "Would you like to adjust your budget? " << endl;
		std:: cout << "1: Yes " << endl;
		std:: cout << "2: No " << endl;
		std:: cin >> adjustBudget;
		if(adjustBudget == 1){
			std:: cout << "Adjusting budget..." << endl;
			std:: cout << "What expense would you like to cut back on? " << endl;
			std:: cin >> expenseCut;
			
			for(const std:: string & validChoice : expenseList) {
				if(expenseCut == validChoice){
					isValid = true;
					break;
				}

			}
					if(isValid){
						std::cout << "How much would you like to cut back on in dollar amount? " << endl;
						std::cin >> cutAmount;
						std:: cout << "You are cutting " << expenseCut << " by $" << cutAmount << ". " << endl;
						
					}
					else {
						std::cout << "Invalid choice. " << endl;
					}
			


		} else {
			cout << "You have chosen not to budget. " << endl;
		}
	}
	
}

void expenseMode(int programChoice){

	double totalIncome;
	double singleIncome;
	double spouseIncome;
	double savings = 0;
	double investments = 0;
	
	double transportationExpense = 0;
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
				std::cout << "What is your income?\n";
				std::cin >> singleIncome;

				if (singleIncome >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "What is the spouse's income?\n";
				std::cin >> spouseIncome;

				if (spouseIncome >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "How much was spent on transportation?\n";
				std:: cin >> transportationExpense;

				if (transportationExpense >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "How much was spent on eating out?\n";
				std:: cin >> foodExpense;

				if (foodExpense >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "How much was spent on the mortgage?\n";
				std:: cin >> mortgageExpense;

				if (mortgageExpense >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "How much was spent on utilities?\n";
				std:: cin >> utilityExpense;

				if (utilityExpense >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "How much was spent on groceries?\n";
				std:: cin >> groceriesExpense;

				if (groceriesExpense >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			do {
				std::cout << "How much was spent on bills?\n";
				std:: cin >> billsExpense;

				if (billsExpense >= 0) {
					break;
				}
				else {
					std::cout << "Invalid input please try to input a numerical value representing a dollar amount\n";
				}
			} while (true);

			std:: cin.ignore();


			do{
			std::cout << "Do you put money in savings?\n";
			std:: getline(std::cin, save);

			
				if (save == "yes" || save == "Yes" || save == "Y" || save == "y") {
				std::cout << "How much did you set aside into savings?\n";
				std::cin >> savings;
				break;
			}

				if (save == "no" || save == "No" || save == "n" || save == "N") {
				std::cout << endl;
				savings = 0;
				break;
			}
			else {
				cout << "Invalid choice, please try again. " << endl;
			}
			}while(true);

			do{
			std::cout << "Do you put money aside for investing?\n";
			std::getline(std::cin, invest);

				if (invest == "yes" || invest == "Yes" || invest == "Y" || invest == "y") {
				std::cout << "How much was set aside for investments?\n";
				std::cin >> investments;
				break;
			}

				if (invest == "no" || invest == "No" || invest == "n" || invest == "N") {
				std::cout << endl;
				investments = 0;
				break;
			}
			else {
				cout << "Invalid choice, please try again. " << endl;
			}
			}while(true);



			std::cout << setprecision(2) << fixed;

			totalIncome = singleIncome + spouseIncome;

			double transportationPercent = (transportationExpense / totalIncome) * 100;
			double foodPercent = (foodExpense / totalIncome) * 100;
			double mortgagePercent = (mortgageExpense / totalIncome) * 100;
			double utilityPercent = (utilityExpense / totalIncome) * 100;
			double groceriesPercent = (groceriesExpense / totalIncome) * 100;
			double billsPercent = (billsExpense / totalIncome) * 100;


			
			
			
			

			totalIncome = calculateIncome(singleIncome, spouseIncome);
			totalExpense = calculateExpense(transportationExpense, foodExpense, mortgageExpense, utilityExpense, groceriesExpense, billsExpense);
			piggyBank = savings + investments;
			piggyBankPercent = (piggyBank / totalIncome) * 100;
			savingsPercent = (savings / totalIncome) * 100;
			investmentPercent = (investments / totalIncome) * 100;
			moneyRemaining = totalIncome - totalExpense - piggyBank;
			remainingPercent = (moneyRemaining / totalIncome) * 100;

			std::cout << endl;

			if (totalExpense > totalIncome) {
				std::cout << "How the fuck are you going to spend more than you make???\n";
			}

			std::cout << endl;

			std::cout << "Your total household income is $" << totalIncome << endl;
			std::cout << "Your total expense is $" << totalExpense << endl;
			std::cout << endl;
			std::cout << transportationPercent << "% of the income was spent on transportation." << endl;
			std::cout << foodPercent << "% of the income was spent on eating out." << endl;
			std::cout << mortgagePercent << "% of the income was spent on the mortgage." << endl;
			std::cout << utilityPercent << "% of the income was spent on utilities." << endl;
			std::cout << groceriesPercent << "% of the income was spent on groceries." << endl;
			std::cout << billsPercent << "% of the income was spent on bills." << endl;
			std::cout << endl;
			std::cout << "Your total amount set aside for savings and investment is $" << piggyBank << endl;
			std::cout << "This accounts for " << piggyBankPercent << "% of the total household income." << endl;
			std::cout << "Your remaining cash available is, $" << moneyRemaining << " this is " << remainingPercent << "% of the total income." << endl;


}

void budgetMode(int programChoice){


	double totalIncome;
	double singleIncome;
	double spouseIncome;
	double savings = 0;
	double investments = 0;
	
	double transportationExpense = 0;
	double foodExpense = 0;
	double mortgageExpense = 0;
	double utilityExpense = 0;
	double groceriesExpense = 0;
	double billsExpense = 0;
	double housingExpense = 0;
	double wantsExpense = 0;
	const double MAXHOUSING = 35.00;
	int adjustBudget;
	
	
	
	double savingsPercent;
	double investmentPercent;
	double piggyBank;
	double piggyBankPercent;
	double housingPercent;
	
	double totalExpense;
	double moneyRemaining = 0;

	string save;
	string invest;

	double savingsRate;
	double investRate;
	double transportationRate;
	double foodRate;
	double mortgageRate;
	double utilityRate;
	double billRate;
	double groceriesRate;

	string incomeChoice;
	const int arraySize = 3;
	string topExpense[arraySize];

		
			do {
				std::cout << "Single income or dual income" << endl;
				std::cin >> incomeChoice;

				if (incomeChoice == "single" || incomeChoice == "Single") {
					std::cout << "What is your income? " << endl;
					std::cin >> singleIncome;
					std::cout << endl;
					std::cout << "$" << singleIncome << endl;

					for (int i = 0; i < arraySize; i++) {
						std::cout << "Top 3 expenses? " << endl;
						std::cin >> topExpense[i];
					}

					for (int i = 0; i < arraySize; i++) {
						do {

							if (topExpense[i] == "gas" || topExpense[i] == "Gas" ||topExpense[i] == "tansportation" || topExpense[i] == "transportation") {
								std::cout << "What is your monthly cost of transportation? " << endl;
								std::cin >> transportationExpense;
								break;
							}
							if (topExpense[i] == "food" || topExpense[i] == "Food") {
								std::cout << "What is your monthly cost of eating out? " << endl;
								std::cin >> foodExpense;
								break;
							}
							if (topExpense[i] == "mortgage" || topExpense[i] == "Mortgage" || topExpense[i] == "rent" || topExpense[i] == "Rent") {
								std::cout << "What is your monthly cost of mortgage/rent? " << endl;
								std::cin >> mortgageExpense;
								break;
							}
							if (topExpense[i] == "groceries" || topExpense[i] == "Groceries") {
								std::cout << "What is your monthly cost of groceries? " << endl;
								std::cin >> groceriesExpense;
								break;
							}
							if (topExpense[i] == "bills" || topExpense[i] == "Bills") {
								std::cout << "What is your monthly cost of bills (non-utility)? " << endl;
								std::cin >> billsExpense;
								break;
							}
							if (topExpense[i] == "utility" || topExpense[i] == "Utilitiy" || topExpense[i] == "Utilities" || topExpense[i] == "utilities") {
								std::cout << "What is your monthly cost of utilities? " << endl;
								std::cin >> utilityExpense;
								break;
							} 
							
						} while (true);
					}
					std:: cout << setprecision(2) << fixed;
					totalIncome = calculateIncome(singleIncome, spouseIncome);
					housingExpense = calculateHousing(mortgageExpense, utilityExpense);
					housingPercent = calculateHousingPercent(mortgageExpense, utilityExpense, totalIncome);


					std::cout << endl;
					std::cout << "Transportation expense: $" << transportationExpense << endl;
					std::cout << "Food expense: $" << foodExpense << endl;
					std::cout << "Mortgage/Rent expense: $" << mortgageExpense << endl;
					std::cout << "Groceries expense: $" << groceriesExpense << endl;
					std::cout << "Bills expense: $" << billsExpense << endl;
					std::cout << "Utility expense: $" << utilityExpense << endl;
					std::cout << "Housing expense: $" << housingExpense << endl;		

					maxHousingRule(housingPercent, MAXHOUSING);
					
					
				}

				if (incomeChoice == "dual" || incomeChoice == "Dual") {
					std::cout << "What is your spouse's income? " << endl;
					std::cin >> spouseIncome;
					std::cout << endl;
					std::cout << "What is your income? " << endl;
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

							if (topExpense[i] == "gas" || topExpense[i] == "Gas" || topExpense[i] == "transportation" || topExpense[i] == "Transportation") {
								cout << "What is your monthly cost of transportation? " << endl;
								cin >> transportationExpense;
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

				std:: cout << setprecision(2) << fixed;
				totalIncome = calculateIncome(singleIncome, spouseIncome);
				housingExpense = calculateHousing(mortgageExpense, utilityExpense);
				housingPercent = calculateHousingPercent(mortgageExpense, utilityExpense, totalIncome);
				

			break;	
			} while (true);

			cout << endl;
			cout << "Transportation expense: $" << transportationExpense << endl;
			cout << "Food expense: $" << foodExpense << endl;
			cout << "Mortgage/Rent expense: $" << mortgageExpense << endl;
			cout << "Groceries expense: $" << groceriesExpense << endl;
			cout << "Bills expense: $" << billsExpense << endl;
			cout << "Utility expense: $" << utilityExpense << endl;
			
			maxHousingRule(housingPercent, MAXHOUSING);
			
			
		

}


int main(){
	
	


	
	
	
	double totalIncome;
	double singleIncome;
	double spouseIncome;
	double savings = 0;
	double investments = 0;
	
	double transportationExpense = 0;
	double foodExpense = 0;
	double mortgageExpense = 0;
	double utilityExpense = 0;
	double groceriesExpense = 0;
	double billsExpense = 0;
	
	double transportationPercent;
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
	double transportationRate;
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

	
	
	
	
	
	
	
	
	
	
	