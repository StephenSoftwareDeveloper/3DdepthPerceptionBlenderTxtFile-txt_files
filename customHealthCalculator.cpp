#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    double weight;
    double height;
    double desiredWeightLoss;
    int daysTillDeadline;
    double caloricDeficit;
    double targetWeight;

    cout << "What is your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "! Enter your age: ";
    cin >> age;

    cout << "What is your weight in lbs: ";
    cin >> weight;

    cout << "Finally, " << name << ", what is your height in inches: ";
    cin >> height;
    
    double bmi = (weight / (height * height)) * 703;

    cout << "How many pounds would you like to lose: ";
    cin >> desiredWeightLoss;

    cout << "How many days do you want to lose that in?";
    cin >> daysTillDeadline;

    caloricDeficit = desiredWeightLoss * 3500 / daysTillDeadline;
    targetWeight = weight - desiredWeightLoss;

    double targetBMI = (targetWeight / (height * height)) * 703;

    cout << "Your current BMI is " << bmi << "! If you maintain a caloric deficit of " << caloricDeficit << " daily, you will weigh " << targetWeight << " by the deadline, and your new BMI will be " << targetBMI << "!" << endl;

    return 0;
}
