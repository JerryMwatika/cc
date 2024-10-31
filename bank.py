from abc import ABC, abstractmethod

class Account(ABC):
    """Abstract class representing a bank account."""
    
    def __init__(self, account_number, balance=0):
        self._account_number = account_number  # Encapsulation: Private attribute
        self._balance = balance

    @abstractmethod
    def account_type(self):
        pass

    def deposit(self, amount):
        """Method to deposit money into the account."""
        if amount > 0:
            self._balance += amount
            print(f"Deposited ${amount} to account {self._account_number}. New balance: ${self._balance}")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        """Method to withdraw money from the account."""
        if amount > 0 and amount <= self._balance:
            self._balance -= amount
            print(f"Withdrew ${amount} from account {self._account_number}. New balance: ${self._balance}")
        elif amount > self._balance:
            print("Insufficient funds for this withdrawal.")
        else:
            print("Withdrawal amount must be positive.")

    def get_balance(self):
        return self._balance


class SavingsAccount(Account):
    """Savings account with a basic interest feature."""

    def account_type(self):
        return "Savings"

    def apply_interest(self):
        """Apply interest to the savings balance."""
        interest = self._balance * 0.02  # 2% interest rate
        self._balance += interest
        print(f"Applied interest to Savings Account {self._account_number}. New balance: ${self._balance}")


class CheckingAccount(Account):
    """Checking account with different transaction policies."""

    def account_type(self):
        return "Checking"


class User:
    """Class to manage user and their accounts."""

    def __init__(self, name):
        self.name = name
        self.accounts = {}

    def create_account(self, account_type, account_number, initial_balance=0):
        """Creates a specific account type (savings or checking)."""
        if account_type.lower() == 'savings':
            account = SavingsAccount(account_number, initial_balance)
        elif account_type.lower() == 'checking':
            account = CheckingAccount(account_number, initial_balance)
        else:
            print("Invalid account type.")
            return

        self.accounts[account_number] = account
        print(f"{account_type.capitalize()} account created for {self.name} with account number {account_number}.")

    def deposit_to_account(self, account_number, amount):
        """Deposit to a specific account by account number."""
        account = self.accounts.get(account_number)
        if account:
            account.deposit(amount)
        else:
            print("Account not found.")

    def withdraw_from_account(self, account_number, amount):
        """Withdraw from a specific account by account number."""
        account = self.accounts.get(account_number)
        if account:
            account.withdraw(amount)
        else:
            print("Account not found.")

    def get_account_balance(self, account_number):
        """Retrieve the balance of a specific account."""
        account = self.accounts.get(account_number)
        if account:
            print(f"Balance for account {account_number}: ${account.get_balance()}")
        else:
            print("Account not found.")


# Main program
if __name__ == "__main__":
    # Creating a user
    user = User("Alice")

    # User creates a savings account and a checking account
    user.create_account("savings", 101, 1000)
    user.create_account("checking", 102, 500)

    # Performing some transactions
    user.deposit_to_account(101, 200)   # Deposit into savings
    user.withdraw_from_account(102, 100)  # Withdraw from checking
    user.get_account_balance(101)  # Check balance of savings

    # Apply interest to savings account
    savings_account = user.accounts[101]
    if isinstance(savings_account, SavingsAccount):
        savings_account.apply_interest()

    user.get_account_balance(101)  
