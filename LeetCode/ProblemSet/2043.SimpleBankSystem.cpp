#include<iostream>
#include<vector>
using namespace std;

class Bank {
private:
    vector<long long> balance;

    bool isValid(int account) {
        return account >= 1 && account <= balance.size();
    }

public:
    Bank(vector<long long>& balance) {
        this->balance = balance;
    }

    bool transfer(int account1, int account2, long long money) {
        if (!isValid(account1) || !isValid(account2)) return false;
        if (balance[account1 - 1] < money) return false;

        balance[account1 - 1] -= money;
        balance[account2 - 1] += money;
        return true;
    }

    bool deposit(int account, long long money) {
        if (!isValid(account)) return false;
        balance[account - 1] += money;
        return true;
    }

    bool withdraw(int account, long long money) {
        if (!isValid(account)) return false;
        if (balance[account - 1] < money) return false;

        balance[account - 1] -= money;
        return true;
    }
};

int main() {
    vector<long long> initialBalance = {1000, 2000, 3000};
    Bank bank(initialBalance);

    cout << bank.withdraw(1, 500) << endl; // true
    cout << bank.transfer(2, 3, 1000) << endl; // true
    cout << bank.deposit(3, 500) << endl; // true
    cout << bank.withdraw(1, 600) << endl; // false

    return 0;
}