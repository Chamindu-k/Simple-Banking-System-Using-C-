#include <iostream>
#include <iomanip>

void showBlance(double balance);
double deposit();
double withdraw(double balance);




int main(){
    double balance = 0;
    int choice;

        do {
            std::cout << "*********************** \n";
            std::cout << " Enter Your choice: \n";
            std::cout << "*********************** \n";
            std::cout << "1.Show Balance\n";
            std::cout << "2.Make a Deposit\n";
            std::cout << "3.Make a Withdraw\n";
            std::cout << "4.Exit\n";
            std::cin >> choice;
            // prevent entering character
            std::cin.clear();
            fflush(stdin);

            switch (choice) {
            case 1: showBlance(balance);
                break;
            case 2: balance += deposit ();
                    showBlance(balance);
                break;
            case 3:balance -= withdraw(balance);
                   showBlance(balance);
                break;
            case 4: std::cout << "Thank for visiting  Have a nice day!!!\n";
                break;
                
            default: std::cout << "invalid Choice\n";
                
            }

        } while (choice!=4);


    return 0;
}

void showBlance(double balance) {
    std::cout << " Your Balance is : $"<<std::setprecision(2)<<std:: fixed << balance << '\n';
}
double deposit() {
    double amount = 0;

    std::cout << " Enter the amount to be Deposit: $";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "Invalid Value please enter again \n";
    }

    
}
double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter your withdraw amount: $";
    std::cin >> amount;

    if (amount  > balance) {
        std::cout << "Insufficient funds \n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Thats not a valid amount ";
        return 0;
    }
    else {
        return amount;
    }
    
    

    
}

