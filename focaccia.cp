/**
 * focaccia.cpp
 *
 * Caitlin Berry
 * cnberry
 *
 * EECS 183: Project 1
 * Fall 2023
 * 
 * Project UID: d435ced1b1ee1e06372665b53322301c67d2d4a0
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);



int main() {
    int people;
    cout << "How many people do you need to serve? ";
    cin >> people;
    cout << endl << endl;

    // COMPUTE NUMBER OF LOAVES NEEDED
    
    double numLoaves = people / 4.0;
    numLoaves = ceil(numLoaves);
    string pluralBread = pluralize ("loaf", "loaves", numLoaves);
    
    // COMPUTE AMOUNT AND PRICE OF FLOUR
    
    double amountFlour = 5 * numLoaves;
    // convert cups to pounds
    amountFlour /= 4.0;
    double bagsOfFlour = amountFlour / 5.0;
    bagsOfFlour = ceil(bagsOfFlour);
    double costOfFlour = 2.69 * bagsOfFlour;
    string pluralFlour = pluralize ("bag", "bags", bagsOfFlour);

    // COMPUTE AMOUNT AND PRICE OF YEAST
    
    double amountYeast = 1.75 * numLoaves;
    // convert teaspoons to packages
    amountYeast /= 2.25;
    double packagesOfYeast = ceil(amountYeast);
    double costOfYeast = 0.4 * packagesOfYeast;
    string pluralYeast = pluralize ("package", "packages", packagesOfYeast);
    
    // COMPUTE AMOUNT AND PRICE OF SALT
    
    double amountSalt = (1 + (7 / 8.0)) * numLoaves;
    // convert teaspoons to grams
    amountSalt *= 5.0;
    double canistersOfSalt = amountSalt / 30.0;
    canistersOfSalt = ceil(canistersOfSalt);
    double costOfSalt = 0.49 * canistersOfSalt;
    string pluralSalt = pluralize ("canister", "canisters", canistersOfSalt);
    
    // COMPUTE AMOUNT AND PRICE OF OLIVE OIL
    
    double amountOliveOil = 2 * numLoaves;
    // convert tablespoons to milliliters
    amountOliveOil *= 14.8;
    double bottlesOfOliveOil = amountOliveOil / 500.0;
    bottlesOfOliveOil = ceil(bottlesOfOliveOil);
    double costOfOliveOil = 6.39 * bottlesOfOliveOil;
    string pluralOliveOil = pluralize ("bottle", "bottles", bottlesOfOliveOil);
    
    // DETERMINE THE TOTAL COST
    
    double totalCost = costOfFlour + costOfYeast + costOfSalt + costOfOliveOil;
    

    // FINAL OUTPUT
    
    cout << "You need to make: " << numLoaves << " " << pluralBread
         << " of focaccia" << endl << endl;
    
    cout << "Shopping List for Focaccia Bread" << endl;
    cout << "--------------------------------" << endl;
    cout << bagsOfFlour << " " << pluralFlour << " of flour" << endl;
    cout << packagesOfYeast << " " << pluralYeast << " of yeast" << endl;
    cout << canistersOfSalt << " " << pluralSalt << " of salt" << endl;
    cout << bottlesOfOliveOil << " " << pluralOliveOil;
    cout << " of olive oil" << endl << endl;
    
    cout << "Total expected cost of ingredients: $";
    cout << totalCost << endl << endl;
    
    cout << "Have a great party!" << endl;
    
    
    return 0;
}

// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}
