#include <iostream> //  needed to use main function
#include <windows.h>// needed to use spleep function
#include <cstdlib> // needed to use random numbers

using namespace std;
//functions
void display(){ //void is used to avoid data type in functions
	cout<<endl<<endl; // for having space of 2 lines
	string var="\n==============================================================================================="
 	"\n      CCCCC      A        SSSSSSSSS   IIIIIIIII  NNN    NN    OOOOOOOO     "
 	"\n    CC          A  A      SS             III     NN N   NN   OO      OO    "
 	"\n    CC         A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    "
 	"\n    CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    " 
 	"\n      CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN    NNN    OOOOOOOO     "  
 	"\n===============================================================================================\n";
	 //taking variable(var) in string 
 	for(int i=0;i<var.size();i++){ // using for loop to emplement sleep function
 		Sleep(10); // sleep is used to slow down var 10 times
 		cout<<var[i];} // cout var (array)[i] which is starting from 0 to size of var which is 573 letters  
}  // display function

void rules(){
    system("cls");//used to clear previous code and continue from next line
    cout<<endl<<endl;// for having space of 2 lines
    cout << "	======CASINO NUMBER GUESSING RULES!======"<<endl<<endl;
    cout << "	1. Choose a number between 1 to 10"<<endl<<endl;
    cout << "	2. Winner gets 10 times of the money bet"<<endl<<endl;
    cout << "	3. Wrong bet, and you lose the amount you bet"<<endl<<endl; 
	//all couts to display all rules.
} // rules function 

int main(){
	display(); 
	// recalling display function
    string playerName;  
	// taking string data type for player's name 
    int balance, bettingAmount, guess, dice;
	//balance for player's balance, bettingAmount for betting amount, dice for random number, guess for gussing number 1 to 10.
    char choice;
	// taking character data type for choice because we have (y) for yes and (n) for no which are is single character.
    cout<<endl<<endl;
	// ussing 2 endl to have space of 2 empty lines.
    cout << "========WELCOME TO CASINO WORLD======="<<endl<<endl<<endl;
	//ussing 3 endl for ending this line and having space of 2 empty line 
    cout << "What's your Name : ";
    getline(cin, playerName);
	// ussing getline function for having full name in one line.
    cout<<endl<<endl;
	// for having space of 2 lines
    cout << "Enter the starting balance to play game : Rs.";
    cin >> balance;
    //user will enter starting balance in rupees which cannot be changed further in program.
	cout<<endl<<endl;
	// for having space of 2 lines
    do{ 
	system("cls");
	//system cls means clear pervious code and continue from here
	cout<<endl; 
	// for having space of 1 line
    rules();
    //recalling rules function.
    cout<<endl; 
	// for having space of 1 line
    cout << "Your current balance is Rs." << balance <<endl<<endl<<endl;
	//cout your current balance is . 
    	do{ 
		//using do while loop in main do loop
        cout << "Hey, " << playerName<<", enter amount you want to bet : Rs.";
        cin >> bettingAmount;
        //cout hey playername , enter betting amount you want to bet. 
        cout<<endl<<endl;
        //ussing 2 endl having space of 2 empty line 
        if(bettingAmount > balance)
            cout << "Betting balance can't be more than current balance!"<<endl<<"Re-enter balance"<<endl<<endl<<endl;
        //if betting amount is greater than balance cout  not enough balance reenter balance.
    } //do loop ends
		while(bettingAmount > balance); 
		//upper do loop will run while betting amount is equal or less then current balance
        do{
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            cout<<endl<<endl;
            if(guess <= 0 || guess > 10)
                cout << "Number should be between 1 to 10"<<endl<<"Re-enter number: "<<endl<<endl<<endl;
        }
		// this do loop while ask user to guess any number between 1 to 10 if number is less then 0 or greater then 10 then re enter number.  
		while(guess <= 0 || guess > 10);
		//upper do loop will run while guessing number is greater or equal to 0 or less then 10.
        dice = rand()%10 + 1;
        // dice is random number from 0 to 9 and then + 1 in it for example if dice is 0 then 1 will add and it will become 1. 
        if(dice == guess){
            cout << "You are in luck!! You have won Rs." << bettingAmount * 10 << endl;
            balance = balance + bettingAmount * 10;
            cout<<endl<<endl;
        } 
		//if dice is equal to selected number cout you are lucky then your betting amount will multipy by 10 and added to your current balance.
        else{
            cout << "Opps, better luck next time !! You lost Rs. "<< bettingAmount <<endl;
            balance = balance - bettingAmount;
            cout<<endl<<endl;
        }
        //else cout opps better luck next time then betting amount will be minus from current balance.  
        cout << "The winning number was : " << dice <<endl<<endl<<endl;
		//cout winning number was dice which is random number selected by computer.
        cout << playerName <<", You have balance of Rs. " << balance << endl<<endl<<endl;
        //cout player name and your balance. 
        if(balance == 0){
            cout << "You have no money to play "<<endl<<endl<<endl;
            break;
        } //if balance is equal to 0 then cout you have no money break then game will end.
        cout << "-->Do you want to play again (y/n)? ";
        cin >> choice;
        cout<< endl << endl;
        //else do you want to play again y for yes n for non.
    }
	while(choice =='Y'|| choice=='y');
    cout << "Thanks for playing the game. Your balance is Rs. " << balance << endl<<endl;
    //the upper do loop will run again while choice is equal to y . and if choice is n then game will end 
    return 0;
}
