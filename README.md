# **Project 1 - Focaccia Bread Calculator**
A C++ program that calculates ingredient quantities and total cost for making focaccia bread based on user input. Uses unit conversions, rounding logic, and formatted output to generate a complete shopping list. 
## **Overview**
This program prompts the user for the number of people they need to serve and determines:
- The number of focaccia loaves required (1 loaf per 4 people, rounded up)
- The amount of each ingredient needed
- The number of packages to purchase
- The total cost of all ingredients
The output is displayed as a formatted shopping list.
## **How to Run**
Compile the program:
```bash
g++ focaccia.cpp -o focaccia
```
Run the program:
```bash
./focaccia
```
Then enter the number of people when prompted.
## **Concepts Used**
- Input/output using cin and cout
- Arithmetic calculations and rounding (ceil)
- Use of constants instead of magic numbers
- Step-by-step program development and testing
- Careful output formatting
## **Example Output**
```
How many people do you need to serve? 5


You need to make: 2 loaves of focaccia

Shopping List for Focaccia Bread
--------------------------------
1 bag of flour
2 packages of yeast
1 canister of salt
1 bottle of olive oil

Total expected cost of ingredients: $10.37

Have a great party!
```
