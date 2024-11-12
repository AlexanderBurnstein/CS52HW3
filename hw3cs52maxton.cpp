#include <iostream>
// Need access to the string type
#include <string>

int main()
{   
    std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December",};
    int userMonthlyIncome[12];
    int taxBracket[6] = {9325, 28625, 53950, 99750, 225050, 1700};
    double taxPercent[7] = {0.1, 0.15, 0.25, 0.28, 0.33, 0.35, 0.396};

    // total earnings
    int totalIncome = 0;
    // var to store tax rate %
    double taxRatePercent = 0;
    // var to store the tax sum amounts
    int totalTaxOwed = 0;
    // var to store tax remainder
    int taxRemainder = 0;

    std::cout << "ITP tax calculator:" << std::endl;
    
    // Total income calculator
    for(int i = 0; i < 12;i++)
    {
        std::cout << "Enter income for " << months[i] << ": $";
        std::cin >> userMonthlyIncome[i];
        // could have used a local variable to store each month of input
        totalIncome = totalIncome + userMonthlyIncome[i];
    }

    // Set Tax Remainder to total income
    taxRemainder = totalIncome;

    // Tax calculations
    for(int i = 0; i < 6;i++)
    { 
        if(taxBracket[i] < taxRemainder)
        {
            totalTaxOwed += taxBracket[i] * taxPercent[i];
            taxRemainder = taxRemainder - taxBracket[i];

            if (i == 5)
            {
                totalTaxOwed += taxRemainder * taxPercent[i + 1];    
            }   
        }
        else
        {
            totalTaxOwed += taxRemainder * taxPercent[i];
            break;
        }     
    }

    //tax rate percent calc
    taxRatePercent = ((double)totalTaxOwed / totalIncome) * 100;
    
    //cout statements
    std::cout << "******************************" << std::endl;
    std::cout << "Your total income is $" << totalIncome << std::endl;
    std::cout << "You owe taxes in the amount of $" << totalTaxOwed << std::endl;
    std::cout << "Your effective tax rate is " << taxRatePercent << "%" << std::endl;

    return 0;
}
