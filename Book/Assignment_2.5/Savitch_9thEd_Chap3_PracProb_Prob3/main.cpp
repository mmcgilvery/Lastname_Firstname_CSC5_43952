/*
 Matthew McGilvery
 3-17-15
 Professor Mark Lehr
 Savitch, 9th Ed, Ch 3, Practice Problems #3
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    short bdyMnth, bdyDay, k=1;
    //Request input
   do { 
    cout << endl;
    cout << "_________" << endl;
    cout << "Horoscopes" << endl;
    cout << endl;
    cout << "Please enter your birth month in the form M if months 1-9, and MM " << endl;
    cout << "if months 10-12, followed by the enter key" << endl;
    cin >> bdyMnth;
    cout << "Please enter your birth date in the form D or DD, followed by the enter key" << endl;
    cin >> bdyDay;
    //Output results
    if (bdyMnth == 1 ){ 
        if ((bdyDay >= 20) && (bdyDay <= 31))
        {
        cout << "You are an Aquarius." << " It's easy to lose focus of your objective, but persist."<< endl;
        cout << "The incentive will come soon."<< endl;
        }
        if ((bdyDay < 20) && (bdyDay >= 1))
        {
         cout << "You are a Capricorn." << " Don't let your recent successes take you off of your path."<< endl;
         cout << "The most consistently successful of persons are humble."<< endl; 
        }     
    }
    if (bdyMnth == 2 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 18))
        {
        cout << "You are an Aquarius." << " It's easy to lose focus of your objective, but persist."<< endl;
        cout << "The incentive will come soon."<< endl;
        }
        if ((bdyDay <= 29) && (bdyDay >= 19))
        {
         cout << "You are a Pisces." << " Try to spend more time with those who love you. You've been lonely of late."<< endl; 
        }
    }
    if (bdyMnth == 3 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 20))
        {
        cout << "You are a Pisces." << " Try to spend more time with those who love you. You've been lonely of late."<< endl; 
        }
        if ((bdyDay <= 31) && (bdyDay >= 21))
        {
         cout << "You are an Aries." << " try to spend more time focusing on yourself. You've been overwhelmed by everything as of late, "<< endl; 
         cout << "so try to focus on doing what makes you happy." << endl;
        }
        
    }
    if (bdyMnth == 4 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 19))
        {
        cout << "You are an Aries." << " try to spend more time focusing on yourself."<< endl; 
        cout << "You've been overwhelmed by everything as of late, so try to focus on doing what makes you happy." << endl;
        }
        if ((bdyDay <= 30) && (bdyDay >= 20))
        {
         cout << "You are an Taurus." << " Those investments you've been making, monetarily and "<< endl; 
         cout << "personally are about to start paying off, so try to focus on doing what makes you happy." << endl;
        }
        
    }
    if (bdyMnth == 5 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 20))
        {
        cout << "You are an Taurus." << " Those investments you've been making, monetarily and "<< endl; 
        cout << "personally are about to start paying off, so try to focus on doing what makes you happy." << endl;
        }
        if ((bdyDay <= 31) && (bdyDay >= 21))
        {
         cout << "You are a Gemini." << " You're impatient about something due. "<< endl;
         cout << "Make sure to give it your all regardless."<< endl; 
         
        }
        
    }
    if (bdyMnth == 6 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 21))
        {
        cout << "You are a Gemini." << " You're impatient about something due. Make sure to give it your all regardless."<< endl; 
        }
        if ((bdyDay <= 30) && (bdyDay >= 22))
        {
         cout << "You are a Cancer." << " You've been looking for love, and that soulmate is near."<< endl; 
        }
        
    }
    if (bdyMnth ==  7 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 22))
        {
        cout << "You are a Cancer." << " You've been looking for love, and that soulmate is near."<< endl; 
        }
        if ((bdyDay <= 31) && (bdyDay >= 23))
        {
        cout << "You are a Leo." << " You have it all together at the moment, "<< endl;
        cout << "and have finally found balance. Keep it!"<< endl;
        }
        
    }
    if (bdyMnth == 8 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 22))
        {  
        cout << "You are a Leo." << " You have it all together at the moment, "<< endl;
        cout << "and have finally found balance. Keep it!"<< endl;         
        }
        if ((bdyDay <= 30) && (bdyDay >= 23))
        {
        cout << "You are a Virgo." << " Opportunities are opening up for you, so be prepared for work."<< endl; 
        }
        
    }
    if (bdyMnth == 9 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 22))
        {  
        cout << "You are a Virgo." << " Opportunities are opening up for you, so be prepared for work."<< endl;
        }
        if ((bdyDay <= 31) && (bdyDay >= 23))
        {
        cout << "You are a Libra." << " Unexpected incidents may dig into your pockets."<< endl; 
        }
        
    }
    if (bdyMnth == 10 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 22))
        {  
        cout << "You are a Libra." << " Unexpected incidents may dig into your pockets."<< endl; 
        }
        if ((bdyDay <= 31) && (bdyDay >= 23))
        {
        cout << "You are a Scorpio." << " Your temper may drive away potential opportunites. "<< endl;
        cout << "Try to be active in calming activities."<< endl; 
        }
        
    }
    if (bdyMnth == 11 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 21))
        {  
        cout << "You are a Scorpio." << " Your temper may drive away potential opportunites. "<< endl;
        cout << "Try to be active in calming activities."<< endl;
        }
        if ((bdyDay <= 30) && (bdyDay >= 22))
        {
        cout << "You are a Sagittarius." << " Take a moment to process the past positives and negatives, and plan ahead."<< endl; 
        }
        
    }
    if (bdyMnth == 12 ){ 
        if ((bdyDay >= 1) && (bdyDay <= 21))
        {  
        cout << "You are a Sagittarius." << " Take a moment to process the past positives and negatives, and plan ahead."<< endl; 
        }
        if ((bdyDay <= 30) && (bdyDay >= 22))
        {
        cout << "You are a Capricorn."<< "Don't let your recent successes take you off of your path."<< endl;
        }
        
    }
   }
    while (k==1);
    //Exit stage right
    return 0;
}
