//This program takes orders from user
//and calculates the total while storing
//items in array

//Alberto Williams

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//constant used to limit the price and items lists to 13, making them parallel arrays.
//items hold the name of items on MENU
//while price holds the price
const int MENU = 13;
string items[MENU] = { "McDouble", "McChicken", "Big Mac", "Cheeseburger", "Double Cheeseburger", "Hamburger", "Quarter Pounder w/cheese", "Quarter Pounder w/cheese and bacon", "Chicken Nuggets", "Double Quarter Pounder w/cheese", "Quarter Pounder w/cheese deluxe", "Fries", "Fountain Drink" };
float price[MENU] = { 2.29, 1.79, 4.72, 1.59, 2.89, 1.39, 4.79, 5.89, 4.64, 5.99, 4.99, 2.79, 1.00 };

//function prototypes
void menu(string [], float []);
void order(string [], float []);

//main function that calls the menu and order
int main() {
	
    cout << "Welcome to McDonald's! May I take your order?\n\n";
    menu(items, price);
    order(items, price);
    return 0;
}

//menu function that shows the items on the menu
void menu(string picks[], float cost[]) {
    
    cout << setprecision(2) << fixed << showpoint;
    
    cout << "**************** -MENU- *******************\n";

    for(int x = 0; x < MENU; x++) {
        cout << (x + 1) << ".) " << picks[x] << "\t" << cost[x] << "\n"; //for loop used to display items and prices
                                                                         //which are passed as arguments in parameter.
    }

    cout << "********************************************\n\n";
}

//order function which allows users to choose what they want
//via item number, as well as size or # of items
//(only for chicken nuggets and fries)
void order(string pix[], float cost[]) {
    
    //Order is placed in a list which is dynamically allotted 
    //by how many items the user wants
    string *ord = nullptr;
    float total;
    int option, list = 0, nugs;
    ord = new string[list];
    char more = 'Y', size;

    cout << setprecision(2) << fixed;
   
   //while loop used to iterate based on if the user wants more than one item
   //on their list
    while(more == 'Y' || more == 'y') {
        list++;
        cout << "Please pick item by its number\n";
        cin >> option;
        
        //switch statement which cases are based on the order number
        switch(option) {
            case 1:
                total += cost[0];
                ord[list] = pix[0];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
            
            case 2:
                total += cost[1];
                ord[list] = pix[1];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
            
            case 3:
                total += cost[2];
                ord[list] = pix[2];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 4:
                total += cost[3];
                ord[list] = pix[3];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 5:
                total += cost[4];
                ord[list] = pix[4];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 6:
                total += cost[5];
                ord[list] = pix[5];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 7:
                total += cost[6];
                ord[list] = pix[6];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 8:
                total += cost[7];
                ord[list] = pix[7];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 9:
                cout << "\nHow many nuggets do you want, 4, 6, 10, 20, or 40?\n";
                cin >> nugs;
                
                //switch statement which cases are based on how many nuggets
                //the customer wants
                switch(nugs) {
                    case 4:
                          total += (cost[8] - 2.15);
                          ord[list] = pix[8];
                          break;
                    
                    case 6:
                          total += (cost[8] - 2.64);
                          ord[list] = pix[8];
                          break;
                          
                    case 10:
                          total += cost[8];
                          ord[list] = pix[8];
                          break;
                          
                    case 20:
                          total += (cost[8] + 2.35);
                          ord[list] = pix[8];
                          break;
                          
                    case 40:
                          total += (cost[8] + 8.35);
                          ord[list] = pix[8];
                          break;
                          
                    default:
                        do{
                            cout << "Insufficient choice! Try again!\n";
                            break;
                        } while(nugs != 4 && nugs != 6 && nugs != 10 && nugs != 20 && nugs != 40);
                }
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 10:
                total += cost[9];
                ord[list] = pix[9];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 11:
                total += cost[10];
                ord[list] = pix[10];
            
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 12:
                cout << "What size of fries do you want? 'S' for small, 'M' for medium, 'L' for large\n";
                cin >> size;
                
                //switch statement which cases are based on the size which the user wants
                switch(size) {
                    case 'S':
                    case 's': 
                            total += (cost[11] - 0.80);
                            ord[list] = pix[11];
                            break;
                    
                    case 'M':
                    case 'm':
                            total += cost[11];
                            ord[list] = pix[11];
                            break;
                    
                    case 'L':
                    case 'l':
                            total += (cost[11] + 1.00);
                            ord[list] = pix[11];
                            break;
                    
                    default:
                        do{
                            cout << "Insufficient choice! Try again!\n";
                            break;
                        } while(size != 's' && size != 'm' && size != 'l');
                }
                
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
            
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
                
            case 13:
                total += cost[12];
                ord[list] = pix[12];
                cout << "*********************************\n";    
                cout << "Your order is: \n";
                
                for(int x = 0; x <= list; x++) {
                    cout << ord[x] << "\n";
                }
                cout << "\n\nAnd your total is: " << total;
                cout << "\n*********************************\n";
                break;
        }    
        cout << "\nWould there be anything else?(Y for yes, N for no)\n";
        cin >> more;
        
        if(more == 'N' || more == 'n') {
            cout << "\nWe hope to see you again!\n";
            delete [] ord;
            break;
        }
        else {
            menu(items, price);
        }
    }
}
