/**
 * @file functions.c
 * @author Alrich Roshan
 * @brief Functions
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<math.h>

/**
 * @brief CAGR Calculation
 * 
 * @return int 
 */
int cagr()  
{  
    int beginningvalueofinvestment,endingvalueofinvestment,noofyearsofinvestment,cagr,value,futurevalue;

    printf (" Enter the Beginning Value Of Investment: ");  
    scanf ("%d", &beginningvalueofinvestment);

    printf (" Enter the Ending Value Of Investment: ");  
    scanf ("%d", &endingvalueofinvestment);

    printf (" Enter the No.of Years Of Investment: ");  
    scanf ("%d", &noofyearsofinvestment);

    //value = (1/noofyearsofinvestment);  

    futurevalue = (endingvalueofinvestment/beginningvalueofinvestment)/noofyearsofinvestment;

    printf (" CAGR is: %d", futurevalue);   
} 

/**
 * @brief Discount Calculation
 * 
 * @return int 
 */
int discountcalculator()  
{  
    int totalprice,discount,futurevalue;

    printf (" Enter the Price: ");  
    scanf ("  %d", &totalprice);  
    printf (" Enter the Discount (in percentage): ");  
    scanf ("  %d", &discount);  
    
    futurevalue = (discount*totalprice)/100;

    printf (" Total Discount is: %d", futurevalue);  
}

/**
 * @brief PPF Calculation
 * 
 * @return int 
 */
int ppf()  
{  
    int yearlyinvestment,timeperiod,totalvalue;

    printf (" Enter the Yearly Investment: ");  
    scanf ("  %d", &yearlyinvestment);  
    printf (" Enter the Time Period (in years): ");  
    scanf ("  %d", &timeperiod);  
    totalvalue = (yearlyinvestment*7.1*timeperiod)/100;    
    printf (" The Total Value is: %d", totalvalue);  
}

/**
 * @brief EMI Calculation
 * 
 * @return int 
 */
int emi()  
{
    float totalamount, interestrate, timeperiod, emi;

    printf("Enter Total Amount: ");
    scanf("%f", &totalamount);

    printf("Enter Interest rate: ");
    scanf("%f", &interestrate);

    printf("Enter Time Period (in year): ");
    scanf("%f", &timeperiod);

    interestrate = interestrate / (12 * 100);
    timeperiod = timeperiod * 12;

    emi = (totalamount * interestrate * pow(1 + interestrate, timeperiod)) / (pow(1 + interestrate, timeperiod) - 1);

    printf("Monthly EMI is= %f\n", emi);

    return 0; 
}

/**
 * @brief RD Calculation
 * 
 * @return int 
 */
int rd()  
{  
    int deposit, years, interest, totalvalue, months, totaldeposit, totalinterest;

    printf (" Enter the Monthly RD Deposit: ");  
    scanf ("  %d", &deposit);

    printf (" Enter Number of Years: ");  
    scanf ("  %d", &years);

    printf (" Enter RD Interest Rate: ");  
    scanf ("  %d", &interest); 

    months = years * 12;

    totaldeposit = months * deposit;

    totalinterest = deposit * months * (months + 1) * interest/24;

    totalvalue = totaldeposit + totalinterest;

    printf (" \n The Square of is: %d", totalvalue);  
} 

/**
 * @brief FD Calculation
 * 
 * @return int 
 */
int fd()  
{    
    int principle, interest, term, totalvalue;

    printf (" Enter the Principle Amount: ");  
    scanf ("  %d", &principle);

    printf (" Enter the Interest Rate: ");  
    scanf ("  %d", &interest);

    printf (" Enter the Term: ");  
    scanf ("  %d", &term);  
  
    totalvalue = principle * (1 + (interest * term));

    printf (" \n The Total Value is: %d", totalvalue);  
}

/**
 * @brief SIP Calculation
 * 
 * @return int 
 */
int sip()  
{  
    float monthlysipamount,sipperiod,expectedreturnrate,futurevalue,totalvalue;

    printf (" Enter a Monthly SIP Amount: ");  
    scanf ("  %f", &monthlysipamount);

    printf (" Enter a SIP Period(in Years): ");  
    scanf ("  %f", &sipperiod);

    printf (" Enter a Expected Return Rate: ");  
    scanf ("  %f", &expectedreturnrate);

    futurevalue = monthlysipamount * ((pow((1 + expectedreturnrate / 100), sipperiod) - 1));

    totalvalue = futurevalue + monthlysipamount; 


    printf ("Total Value is: %0.2f", totalvalue); 
}

/**
 * @brief LumpSum Calculation
 * 
 * @return int 
 */
int lumpsum()  
{    
    int presentvalue, rateofinterest, numberofyears,lumpsum,futurevalue;


    printf (" Enter a number to get the Present Value: ");  
    scanf ("  %d", &presentvalue);

    printf (" Enter a number to get the Rate of Interest (Annual): ");  
    scanf ("  %d", &rateofinterest);

    printf (" Enter a number to get the Number of Years: ");  
    scanf ("  %d", &numberofyears);  

    futurevalue = presentvalue * pow(1 + rateofinterest/12, numberofyears);

    printf (" \n The Future Value is: %d", futurevalue); 
}