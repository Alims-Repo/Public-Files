#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<cstring>

using namespace std;

#define clear system("cls");

int accountNumber = 101;
int size = 0, auth[2] = {0};



struct Statement {
    int type;
    int starting;
    int amount;
    int ending;
};

struct User {
    int acn;
    int stp = 0;
    int balance;
    string name;
    string email;
    string phone;
    string password;
    Statement statement[100];
} userData[100];

/*
* This menu function prints all the initial options for user
*/
int menu() {
    int choice; clear; cout << "**********************************************\n";
    if (auth[0] == 0) {
        cout << "*       Welcome to Bank of Munshigonj        *\n";
        cout << "**********************************************\n";
        cout << "*  1. Login                                  *\n";
        cout << "*  2. Create an account                      *\n";
        cout << "*  3. Exit                                   *\n";
        cout << "*                                            *\n";
        cout << "*  Enter your choice -> ";
        cin >> choice;
        if(choice==3)
            return 0;
        return choice;
    } else {
        cout << "*       Welcome to Bank of Munshigonj        *\n";
        cout << "**********************************************\n";
        cout << "*                                            *\n";
        cout << "*\tWelcome, " << userData[auth[1]].name << endl;
        cout << "*                                            *\n";
        cout << "*  1. Check Balance                          *\n";
        cout << "*  2. Deposit Money                          *\n";
        cout << "*  3. Withdraw Money                         *\n";
        cout << "*  4. Change Password                        *\n";
        cout << "*  5. Check Statement                        *\n";
        cout << "*  6. Delete Account                         *\n";
        cout << "*  7. Logout                                 *\n";
        cout << "*  8. Exit                                   *\n";
        cout << "*                                            *\n";
        cout << "*  Enter your choice -> ";
        cin >> choice;
        if(choice==8)
            return 0;
        return choice;
    }
}

/*
* This function checks if the user have permission to access
*/
void logIn() {
    auth[0] = 1;

}

void signUp() {

}

void initial(int choice) {
    switch(choice) {
        case 1:
            logIn();
            break;
        case 2:
            signUp();
            break;
    }
}


void checkBalance() {

}


void changePassword() {

}

void deposite() {

}

void withdraw() {

}

void statement() {

}
void deleteAc()
{

}

/*
* This function decides with function to call when user choose
* an option (for authenticated users only)
*/
void loggedIn(int choice) {
    switch(choice) {
        case 1:
            checkBalance();
            break;
        case 2:
            deposite();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            changePassword();
            break;
        case 5:
            statement();
            break;
        case 6:
            deleteAc();
            break;
        case 7:
            auth[0] = 0;
            auth[1] = 0;
            break;
        case 8:
            exit(0);
    }
}

/*
* Programe Executes from here
*/
int main() {
    int choice;
    do {
        choice = menu();
        (auth[0] == 1) ? loggedIn(choice) : initial(choice);
    } while(choice);
    clear; cout << "**********************************************\n";
    cout << "*       Thank you for banking with us        *\n";
    cout << "**********************************************\n"; return 0;
}
