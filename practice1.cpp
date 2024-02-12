//Bank Account Inheritance:
/*Create a base class BankAccount with attributes like accountNumber and balance.
Derive two classes, SavingsAccount and CheckingAccount, from BankAccount. Add specific attributes like interestRate for savings and monthlyFee for checking.
Implement methods to deposit and withdraw funds in the base class, and override these methods in the derived classes to incorporate specific rules for savings and checking accounts.*/


#include<iostream>
using namespace std;
class bank_account
{
    public:
    string account_name;
    double balance;
    bank_account(string ac,double bal):account_name(ac),balance(bal){}
    virtual void display_info() const
    {
        cout<<"the account name is "<<account_name<<endl;
        cout<<"the balance in account name. "<<account_name<<" is Rs"<<balance<<endl;
    }
};
class saving_accounts:public bank_account
{
   public:
   double interest_rate;
   saving_accounts(string ac,double bal,double interest):bank_account(ac,bal),interest_rate(interest){}
   void display_info() const override
   {
    bank_account::display_info();
    cout<<"the interest rate on that account is Rs"<<interest_rate<<endl;
   }
};
class checking_account:public bank_account
{
    public:
    double monthly_fee;
    checking_account(string ac,double bal,double mf):bank_account(ac,bal),monthly_fee(mf){}
    void display_info() const override
    {
        bank_account::display_info();
        cout<<"monthly fee is Rs"<<monthly_fee<<endl;
    }
};
int main()
{
    saving_accounts sa("cora_belle",12000,80000);
    sa.display_info();
    checking_account ca("cora_belle",12000,800);
    ca.display_info();
    return 0;
}