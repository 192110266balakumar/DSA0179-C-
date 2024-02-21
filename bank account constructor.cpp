#include <iostream> // Include the necessary header for input/output stream
#include <string> // Include the necessary header for string operations

class BankAccount { // Define a class named BankAccount
  private: 
    std::string accountNumber; // Private member variable to store the account number
    double balance; // Private member variable to store the balance

  public:
    // Constructor to initialize BankAccount object with provided values
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount) {
      balance += amount;
      std::cout << "Deposit successful. Current balance: " << balance << std::endl; 
    }

    void withdraw(double amount) {
      if (amount <= balance) { 
        balance -= amount; 
        std::cout << "Withdrawal successful. Current balance: " << balance << std::endl; 
      } else {
        std::cout << "Insufficient balance. Cannot withdraw." << std::endl; 
      }
    }
};

int main() {
  
  std::string sacno = "SB-123";
  double Opening_balance, deposit_amt, withdrawal_amt; 
  Opening_balance = 1000; 
  std::cout << "A/c. No." << sacno << " Balance: " << Opening_balance << std::endl; 

  BankAccount account(sacno, 1000.0); // Create a BankAccount object with initial account number and balance

  // Deposit money into the account
  deposit_amt = 1500; // Define the deposit amount
  std::cout << "Deposit Amount: " << deposit_amt << std::endl; // Output the deposit amount
  account.deposit(deposit_amt); // Call the deposit method of the account object

  // Withdraw money from the account
  withdrawal_amt = 750; // Define the withdrawal amount
  std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  // Attempt to withdraw more money than the balance
  withdrawal_amt = 1800; // Define an amount higher than the balance for withdrawal
  std::cout << "Attempt to withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  return 0; // Return 0 to indicate successful completion
}
