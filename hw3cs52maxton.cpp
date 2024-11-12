#include <iostream>
#include <string>


int main()
{   
    std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December",};
    int userIncome[12];
    int maxtaxIncome[6] = {9325, 28625, 53950, 99750, 225050, 1700};
    double taxPercent[7] = {0.1, 0.15, 0.25, 0.28, 0.33, 0.35, 0.396};

    int runningSum = 10000;
    double totalTax = 0;
    int runningtaxTotal = 0;
    int taxOwed = 0;
    // For loop for months
    for(int i = 0; i < 12;i++)
    {
        // std::cout << "Enter income for " << months[i] << ": $";
        // std::cin >> userIncome[i];
        //runningSum = runningSum + userIncome[i];
    }
    // For loop for income limits and tax percent
    for(int i = 0; i < 6;i++)
    {
        if(maxtaxIncome[i] > runningSum)
        {
            runningtaxTotal = maxtaxIncome[i]; 
        }
    }

    // 1. create variable that stores remainder of the maxtaxincome as we go through each tax bracket
    // 2. if the remaining amount is greater than 0 move to next tax bracket/element - tax it - then add it to the runningtaxtotal
    // 3. if we have any money left over tax it and add it to the runningtaxtotal.
    // 4. display the tax total and calculate tax rate
    
    std::cout << runningSum << std::endl;
    std::cout << totalTax << std::endl;
    std::cout << runningtaxTotal << std::endl;
    std::cout << taxOwed << std::endl;
    
    //std::cout << "Your total income is $" << runningSum << std::endl;


    return 0;
}