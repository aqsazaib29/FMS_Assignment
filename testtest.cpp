#include <iostream>
#include <string>
#include <Windows.h>
#include <cassert>

using namespace std;
int menu_choice;
long total_price = 0;
int burger_price = 0;
int pizza_price = 0;
int drink_price = 0;
int roll_price = 0;
int q_table = 0;
int l_table = 0;
int b_q;
int r_q;
int d_q;
int p_q;

/*
I have used burger_price globally because it is initialed with zero when while loop is executed ,so to overcome this i globally used
*/
class menu {

public:
	int roll_choice;
    
	void menu_logo1() {
		HANDLE logo = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(logo, 11);
		cout << "\t\t\t||=========================================================||\n";

	}
	string cout_for_menu = "\t\t\t||\t\t ***** 5 STAR FOOD STATION \t\t   ||\t\t";
	void menu_logo2() {

		cout << "\t\t\t||=========================================================||\n\n";
		cout << "\t\t\t\t\t **!!!**   WELCOME   **!!!**\n";
		cout << "\t\t\t\t***  WILL BE HAPPY TO SERVE OUR CUSTOMERS  *** \n\n";
	}
	void menu_items() {
		HANDLE menu = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(menu, 14);
		cout << "\t\t\t||=========================================================||\n";
		cout << "\t\t\t||\t\t      ***** 5 STAR MENU \t\t   ||\t\t\n";
		cout << "\t\t\t||=========================================================||\n\n";

		cout << " What would you like to order Sir/Madam ? " << endl;
		cout << " Please select items from MENU CARD " << endl;
		cout << "1: Burgers " << endl;
		cout << "2: Rolls " << endl;
		cout << "3: Pizzas " << endl;
		cout << "4: Drinks " << endl;
		cout << "5: Book Tables " << endl;
		cout << "6: Total Bill " << endl;
		cout << "7: See Total Sell " << endl;
		cout << "0: Exit " << endl;
		cin >> menu_choice;
	}
	friend ostream& operator<< (ostream&, const menu);
};

ostream& operator << (ostream& obj, const menu obj2) {
	obj << obj2.cout_for_menu << endl;
	return obj;
}
class roll :public menu {
private:
	int p = 0;
public:
int r_q;
    int roll_price;
	int roll_quantity = 0;
	long ind_price = 0;
	long total_r_price = 0;
	void showdata() {
		HANDLE roll = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(roll, 10);
		cout << "Please order a Roll you want !!!" << endl;
		cout << "1: Mayo Roll	   Rs: 150 " << endl;
		cout << "2: Sasta Roll	   Rs: 100 " << endl;
		cout << "3: Beef Roll	   Rs: 180 " << endl;
		cout << "4: Chicken Roll   Rs: 150 " << endl;
		cout << "5: Garlic Roll	   Rs: 130 " << endl;
		cout << "enter 0 for exit " << endl;
		cout << "Enter roll you want!!!!!!!!!! " << endl;
		cin >> roll_choice;
	}

	void setdata() {
		HANDLE roll = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(roll, 10);
		while (roll_choice != 0) {
			switch (roll_choice) {
			case 1:
				cout << "Enter Mayo Roll quantity you want!!! " << endl;
				cin >> roll_quantity;
				cout << "You have ordered " << roll_quantity << " Mayo Rolls " << endl;
				break;
			case 2:
				cout << "Enter Sasta Roll quantity you want!!!" << endl;
				cin >> roll_quantity;
				cout << "You have ordered " << roll_quantity << " Sasta Rolls " << endl;
				break;
			case 3:
				cout << "Enter Beef Roll quantity you want!!!" << endl;
				cin >> roll_quantity;
				cout << "You have ordered " << roll_quantity << " Beef Rolls " << endl;
				break;
			case 4:
				cout << "Enter Chicken Roll quantity you want!!!" << endl;
				cin >> roll_quantity;
				cout << "You have ordered " << roll_quantity << " Chicken Rolls " << endl;
				break;
			case 5:
				cout << "Enter Garlic Roll quantity you want!!!" << endl;
				cin >> roll_quantity;
				cout << "You have ordered " << roll_quantity << " Garlic Roll " << endl;
				break;
			default:
				cout << "invalid selection" << endl;
			}
			switch (roll_choice) {
			case 1:
				p = 150;
				roll_price = roll_price + (p * roll_quantity);
				r_q += roll_quantity;
				p_q += roll_quantity;
				break;
			case 2:
				p = 100;
				roll_price = roll_price + (p * roll_quantity);
				r_q += roll_quantity;
				 p_q += roll_quantity;
				break;
			case 3:
				p = 180;
				roll_price = roll_price + (p * roll_quantity);
				r_q += roll_quantity;
				 p_q += roll_quantity;
				break;
			case 4:
				p = 150;
				roll_price = roll_price + (p * roll_quantity);
				r_q += roll_quantity;
				 p_q += roll_quantity;
				break;
			case 5:
				p = 130;
				roll_price = roll_price + (p * roll_quantity);
				r_q += roll_quantity;
				 p_q += roll_quantity;
				break;
			default:
				cout << "invalid selection" << endl;
			}
			cout << endl << "Please again order a Roll you want !!!" << endl;
			cout << "1: Mayo Roll	   Rs: 150 " << endl;
			cout << "2: Sasta Roll	   Rs: 100 " << endl;
			cout << "3: Beef Roll	   Rs: 180 " << endl;
			cout << "4: Chicken Roll   Rs: 150 " << endl;
			cout << "5: Garlic Roll	   Rs: 130 " << endl;
			cout << "enter 0 for exit " << endl;
			cout << "Enter roll you want!!!!!!!!!! " << endl;
			cin >> roll_choice;
		}
		
	}
};
class burger :public menu {
private:
	int p = 0;
public:
    int b_q;
    int burger_price;
	int burger_choice;
    int burger_quantity;
	long total_r_price = 0;
	void showdata() {
		HANDLE burger = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(burger, 13);
		cout << "Please order a Burger you want !!!" << endl;
		cout << "1: Sasta Burger		Rs: 150 " << endl;
		cout << "2: Chicken Burger	 Rs: 200 " << endl;
		cout << "3: Zinger Burger	 Rs: 300 " << endl;
		cout << "4: Beef Burger		 Rs: 250 " << endl;
		cout << "5: Mighty Burger	 Rs: 500 " << endl;
		cout << "Enter burger you want!!!!!!!!!! " << endl;
		cin >> burger_choice;
	}
	void setdata() {
		HANDLE burger = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(burger, 13);
		while (burger_choice != 0) {
			switch (burger_choice) {
			case 1:
				cout << "Enter Sasta Burger quantity you want!!!" << endl;
				cin >> burger_quantity;
				cout << "You have ordered " << burger_quantity << " Sasta Burgers " << endl;
				break;
			case 2:
				cout << "Enter Chicken Burger  quantity you want!!!" << endl;
				cin >> burger_quantity;
				cout << "You have ordered " << burger_quantity << " Chicken Burgers " << endl;
				break;
			case 3:
				cout << "Enter Zinger Burger quantity you want!!!" << endl;
				cin >> burger_quantity;
				cout << "You have ordered " << burger_quantity << " Zinger Burgers " << endl;
				break;
			case 4:
				cout << "Enter Beef Burger quantity you want!!!" << endl;
				cout << "You have ordered " << burger_quantity << " Beef Burgers " << endl;
				break;
			case 5:
				cout << "Enter Mighty Burger quantity you want!!!" << endl;
				cin >> burger_quantity;
				cout << "You have ordered " << burger_quantity << " Mighty Burgers " << endl;
				break;
			default:
				cout << "invalid selection \n" << endl;
				break;
			}
			switch (burger_choice) {
			case 1:
				p = 150;
				burger_price = burger_price + (p * burger_quantity);
				b_q += burger_quantity;
				break;
			case 2:
				p = 200;
				burger_price = burger_price + (p * burger_quantity);
				b_q += burger_quantity;
				break;
			case 3:
				p = 300;
				burger_price = burger_price + (p * burger_quantity);
				b_q += burger_quantity;
				break;
			case 4:
				p = 250;
				burger_price = burger_price + (p * burger_quantity);
				b_q += burger_quantity;
				break;
			case 5:
				p = 500;
				burger_price = burger_price + (p * burger_quantity);
				b_q += burger_quantity;
				break;
			default:
				cout << "invalid selection \n" << endl;
				break;
			}
			cout << endl << "Please again order a Burger you want !!!" << endl;
			cout << "1: Sasta Burger	 Rs: 150 " << endl;
			cout << "2: Chicken Burger	 Rs: 200 " << endl;
			cout << "3: Zinger Burger	 Rs: 300 " << endl;
			cout << "4: Beef Burger		 Rs: 250 " << endl;
			cout << "5: Mighty Burger	 Rs: 500 " << endl;
			cout << "enter 0 for exit " << endl;
			cout << "Enter burger you want!!!!!!!!!! " << endl;

			cin >> burger_choice;
        }

	}
};
/*                      Pizza class               */
class pizza :public menu {
private:
	int p = 0;
public:
int p_q;
    int pizza_price;
	int pizza_choice;
    int pizza_quantity = 0;
	long total_r_price = 0;
	void showdata() {
		HANDLE pizza = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(pizza, 11);
		cout << "Please order a Pizza you want !!!" << endl;
		cout << "1: Arabic Ranch Pizza		 Rs: 1000 " << endl;
		cout << "2: Dancing Fajila Pizza	 Rs: 800 " << endl;
		cout << "3: Vegetable Pizza			 Rs: 600 " << endl;
		cout << "4: Chicken Pizza			 Rs: 850 " << endl;
		cout << "5: Tikka Masala Pizza		 Rs: 1200 " << endl;
		cout << "Enter Pizza you want!!!!!!!!!! " << endl;
		cin >> pizza_choice;
	}
	void setdata() {
		HANDLE pizza = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(pizza, 11);
		while (pizza_choice != 0) {
			switch (pizza_choice) {
			case 1:
				cout << "Enter Arabic Ranch Pizza quantity you want!!!" << endl;
				cin >> pizza_quantity;
				cout << "You have ordered " << pizza_quantity << " Arabic Ranch Pizzas " << endl;
				break;
			case 2:
				cout << "Enter Dancing Fajila Pizza  quantity you want!!!" << endl;
				cin >> pizza_quantity;
				cout << "You have ordered " << pizza_quantity << " Dancing Fajila Pizzas " << endl;
				break;
			case 3:
				cout << "Enter Vegetable Pizza quantity you want!!!" << endl;
				cin >> pizza_quantity;
				cout << "You have ordered " << pizza_quantity << " Vegetable Pizzas " << endl;
				break;
			case 4:
				cout << "Enter Chicken Pizza quantity you want!!!" << endl;
				cin >> pizza_quantity;
				cout << "You have ordered " << pizza_quantity << " Chicken Pizzas " << endl;
				break;
			case 5:
				cout << "Enter Tikka Masala Pizza quantity you want!!!" << endl;
				cin >> pizza_quantity;
				cout << "You have ordered " << pizza_quantity << " Tikka Masala Pizzas " << endl;
				break;
			default:
				cout << "invalid selection \n" << endl;
				break;
			}
			switch (pizza_choice) {
			case 1:
				p = 1000;
				pizza_price = pizza_price + (p * pizza_quantity);
				 p_q += pizza_quantity;
				break;
			case 2:
				p = 800;
				pizza_price = pizza_price + (p * pizza_quantity);
				 p_q += pizza_quantity;
				break;
			case 3:
				p = 600;
				pizza_price = pizza_price + (p * pizza_quantity);
				 p_q += pizza_quantity;
				break;
			case 4:
				p = 850;
				pizza_price = pizza_price + (p * pizza_quantity);
				 p_q += pizza_quantity;
				break;
			case 5:
				p = 1200;
				pizza_price = pizza_price + (p * pizza_quantity);
				 p_q += pizza_quantity;
				break;
			default:
				cout << "invalid selection \n" << endl;
				break;
			}
			cout << endl << "Please again a order a Pizza you want !!!" << endl;
			cout << "1: Arabic Ranch Pizza		 Rs: 1000 " << endl;
			cout << "2: Dancing Fajila Pizza	 Rs: 800 " << endl;
			cout << "3: Vegetable Pizza			 Rs: 600 " << endl;
			cout << "4: Chicken Pizza			 Rs: 850 " << endl;
			cout << "5: Tikka Masala Pizza		 Rs: 1200 " << endl;
			cout << "enter 0 for exit " << endl;
			cout << "Enter Pizza you want!!!!!!!!!! " << endl;

			cin >> pizza_choice;
		}
		

	}
};
/*                      Drink class               */
class drink :public menu {
private:
	int p = 0;
public:
int d_q;
    int drink_price;
	int drink_choice;
	int drink_quantity = 0;
	long total_r_price = 0;
	void showdata() {
		HANDLE drink = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(drink, 10);
		cout << "Please order a Drink you want !!!" << endl;
		cout << "1: Water Bottle	 Rs: 70 " << endl;
		cout << "2: Fanta 			 Rs: 60 " << endl;
		cout << "3: Pepsi 			 Rs: 60 " << endl;
		cout << "4: Sting 			 Rs: 80 " << endl;
		cout << "5: Dew				 Rs: 70 " << endl;
		cout << "Enter Drink you want!!!!!!!!!! " << endl;
		cin >> drink_choice;
	}
	void setdata() {
		HANDLE drink = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(drink, 10);
		while (drink_choice != 0) {
			switch (drink_choice) {
			case 1:
				cout << "Enter Water Bottle quantity you want!!!" << endl;
				cin >> drink_quantity;
				cout << "You have ordered " << drink_quantity << " Water Bottles " << endl;
				break;
			case 2:
				cout << "Enter Fanta  quantity you want!!!" << endl;
				cin >> drink_quantity;
				cout << "You have ordered " << drink_quantity << " Fantas " << endl;
				break;
			case 3:
				cout << "Enter Pepsi quantity you want!!!" << endl;
				cin >> drink_quantity;
				cout << "You have ordered " << drink_quantity << " Pepsis " << endl;
				break;
			case 4:
				cout << "Enter Sting quantity you want!!!" << endl;
				cin >> drink_quantity;
				cout << "You have ordered " << drink_quantity << " Stings " << endl;
				break;
			case 5:
				cout << "Enter Dew quantity you want!!!" << endl;
				cin >> drink_quantity;
				cout << "You have ordered " << drink_quantity << " Dews " << endl;
				break;
			default:
				cout << "invalid selection \n" << endl;
				break;
			}
			switch (drink_choice) {
			case 1:
				p = 70;
				drink_price = drink_price + (p * drink_quantity);
				d_q += drink_quantity;
				break;
			case 2:
				p = 60;
				drink_price = drink_price + (p * drink_quantity);
				d_q += drink_quantity;
				break;
			case 3:
				p = 60;
				drink_price = drink_price + (p * drink_quantity);
				d_q += drink_quantity;
				break;
			case 4:
				p = 80;
				drink_price = drink_price + (p * drink_quantity);
				d_q += drink_quantity;
				break;
			case 5:
				p = 70;
				drink_price = drink_price + (p * drink_quantity);
				d_q += drink_quantity;
				break;
			default:
				cout << "invalid selection \n" << endl;
				break;
			}
			cout << endl << "Please again order a Drink you want !!!" << endl;
			cout << "1: Water Bottle	 Rs: 70 " << endl;
			cout << "2: Fanta 			 Rs: 60 " << endl;
			cout << "3: Pepsi 			 Rs: 60 " << endl;
			cout << "4: Sting 			 Rs: 80 " << endl;
			cout << "5: Dew				 Rs: 70 " << endl;
			cout << "enter 0 for exit " << endl;
			cout << "Enter Drink you want!!!!!!!!!! " << endl;

			cin >> drink_choice;
		}
		

	}
};
class total_bill :public menu, public roll, public burger {
public:
int total_price;
	void cal_total_bill() {
		HANDLE bill = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(bill, 13);

        // Header of the bill
        cout << "YOUR BILL:\n";
        cout << "===========================================================\n";
        cout << "You have Booked " << q_table << " tables." << endl;
        cout << "Product\t\tQuantity\t\tTotal\n";

        // Display burger details
        if (burger_price > 0) {
            cout << "Burgers\t\t" << b_q << "\t\t\t" << burger_price << "\n";
        }

        // Display roll details
        if (roll_price > 0) {
            cout << "Rolls\t\t" << r_q << "\t\t\t" << roll_price << "\n";
        }

        // Display pizza details
        if (pizza_price > 0) {
            cout << "Pizzas\t\t" << p_q << "\t\t\t" << pizza_price << "\n";
        }

        // Display drink details
        if (drink_price > 0) {
            cout << "Drinks\t\t" << d_q << "\t\t\t" << drink_price << "\n";
        }

        // Footer of the bill
        cout << "===========================================================\n";

        // Calculate and display the total bill
        total_price = burger_price + roll_price + pizza_price + drink_price;
        cout << "Total bill is: " << total_price << "\n";
    }
};

class table :public menu {
public:
	int table_choice = 0;
	void total_table() {
		HANDLE table = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(table, 11);
		cout << " *** Available number of tables in our hotel : 10";
	}
	void reserve_table() {
		HANDLE table = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(table, 11);
		cout << " Enter number of tables you want to reserve :  ";
		cin >> q_table;


	}
	void booked_table() {
		HANDLE table = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(table, 11);
		l_table = l_table + q_table;
		cout << "You have Booked " << l_table << endl;

	}
};
class total_sell :public menu, public roll, public burger {
public:
	void show_sell() {
		HANDLE sell = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(sell, 14);
		cout << " The total sell of items is given below !!! " << endl;
		cout << " Total sell of burgers is " << burger_price << endl;
		cout << " Total sell of Pizzas is " << pizza_price << endl;
		cout << " Total sell of Drinks is " << drink_price << endl;
		cout << " Total sell of rolls is " << roll_price << endl;
		HANDLE overallsell = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(overallsell, 13);
		cout << " *** Overall Sell is : " << total_price << "  *** " << endl;
	}
};

class TestSwitchCases {
public:
    static void testBurgerOrder() {
        try {
            burger b1;

            // Simulate user input for burger order
            b1.burger_choice = 1;  // Choose Sasta Burger
            b1.setdata();

            // Add assertions or print statements to check the expected output
            assert(b1.burger_price > 0);  // Ensure that burger_price is greater than 0
            assert(b1.b_q > 0);  // Ensure that burger quantity is greater than 0
            // You can add more assertions based on the expected behavior of your program

            std::cout << "Test for Burger Order passed successfully!\n";

        } catch (const std::exception& e) {
            std::cerr << "Exception in testBurgerOrder: " << e.what() << "\n";
        }
    }

    static void testRollOrder() {
        try {
            roll r1;

            // Simulate user input for roll order
            r1.roll_choice = 1;  // Choose Mayo Roll
            r1.setdata();

            // Add assertions or print statements to check the expected output
            assert(r1.roll_price > 0);  // Ensure that roll_price is greater than 0
            assert(r1.r_q> 0);  // Ensure that roll quantity is greater than 0
            // You can add more assertions based on the expected behavior of your program

            std::cout << "Test for Roll Order passed successfully!\n";

        } catch (const std::exception& e) {
            std::cerr << "Exception in testRollOrder: " << e.what() << "\n";
        }
    }



    static void testPizzaOrder() {
    try {
            pizza p1;

            // Simulate user input for pizza order
            p1.pizza_choice = 1;  // Choose Arabic Ranch Pizza
            p1.setdata();

            // Add assertions or print statements to check the expected output
            assert(p1.pizza_price > 0);  // Ensure that pizza_price is greater than 0
            assert(p1.p_q > 0);  // Ensure that pizza quantity is greater than 0
            // You can add more assertions based on the expected behavior of your program

            std::cout << "Test for Pizza Order passed successfully!\n";

        } catch (const std::exception& e) {
            std::cerr << "Exception in testPizzaOrder: " << e.what() << "\n";
        }
    }

    static void testDrinkOrder() {
        try {
            drink d1;

            // Simulate user input for drink order
            d1.drink_choice = 1;  // Choose Water Bottle
            d1.setdata();

            // Add assertions or print statements to check the expected output
            assert(d1.drink_price > 0);  // Ensure that drink_price is greater than 0
            assert(d1.d_q > 0);  // Ensure that drink quantity is greater than 0
            // You can add more assertions based on the expected behavior of your program

            std::cout << "Test for Drink Order passed successfully!\n";

        } catch (const std::exception& e) {
            std::cerr << "Exception in testDrinkOrder: " << e.what() << "\n";
        }
    }

    static void testTotalBill() {
        try {
            // Create objects for other menu items
            burger b1;
            roll r1;
            pizza p1;
            drink d1;

            // Simulate user orders for different menu items
            b1.burger_choice = 1;  // Choose Sasta Burger
            b1.setdata();

            r1.roll_choice = 2;  // Choose Sasta Roll
            r1.setdata();

            p1.pizza_choice = 3;  // Choose Vegetable Pizza
            p1.setdata();

            d1.drink_choice = 2;  // Choose Fanta
            d1.setdata();

            // Create total_bill object and calculate the total bill
            total_bill bill;
            bill.cal_total_bill();

            // Add assertions or print statements to check the expected output
            assert(bill.total_price > 0);  // Ensure that total_price is greater than 0
            // You can add more assertions based on the expected behavior of your program

            std::cout << "Test for Total Bill Calculation passed successfully!\n";

        } catch (const std::exception& e) {
            std::cerr << "Exception in testTotalBill: " << e.what() << "\n";
        }
    }


};

int main() {
    // Call your test functions here
    cout<<"TEST FOR BURGER CLASS:"<<endl;
    TestSwitchCases::testBurgerOrder();
    cout<<"TEST FOR ROLL CLASS:"<<endl;
    TestSwitchCases::testRollOrder();
    cout<<"TEST FOR PIZZA CLASS:"<<endl;
    TestSwitchCases::testPizzaOrder();
    cout<<"TEST FOR DRINK CLASS:"<<endl;
    TestSwitchCases::testDrinkOrder();
    cout<<"TEST FOR TOTAL BILL CLASS:"<<endl;
    TestSwitchCases::testTotalBill();
    return 0;
}
