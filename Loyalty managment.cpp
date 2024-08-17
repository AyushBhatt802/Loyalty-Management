#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer {
private:
    int customerID;
    string customerName;
    int loyaltyPoints;

public:
    Customer(int id, string name) {
        customerID = id;
        customerName = name;
        loyaltyPoints = 0;
    }

    int getCustomerID() {
        return customerID;
    }

    string getCustomerName() {
        return customerName;
    }

    int getLoyaltyPoints() {
        return loyaltyPoints;
    }

    void addPoints(double amountSpent) {
        if (amountSpent > 0) {
            int points = static_cast<int>(amountSpent / 10);  // 1 point for every $10 spent
            loyaltyPoints += points;
            cout << points << " points added successfully!" << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void redeemPoints(int points) {
        if (points > 0 && points <= loyaltyPoints) {
            loyaltyPoints -= points;
            cout << points << " points redeemed successfully!" << endl;
        } else {
            cout << "Invalid points or insufficient loyalty points!" << endl;
        }
    }

    void displayCustomerDetails() {
        cout << "Customer ID: " << customerID << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Loyalty Points: " << loyaltyPoints << endl;
    }
};

class LoyaltyManagementSystem {
private:
    vector<Customer> customers;

public:
    void addCustomer() {
        int id;
        string name;

        cout << "Enter Customer ID: ";
        cin >> id;
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, name);

        Customer newCustomer(id, name);
        customers.push_back(newCustomer);

        cout << "Customer added successfully!" << endl;
    }

    void addPointsToCustomer() {
        int id;
        double amountSpent;
        cout << "Enter Customer ID: ";
        cin >> id;
        cout << "Enter Amount Spent: ";
        cin >> amountSpent;

        for (auto &customer : customers) {
            if (customer.getCustomerID() == id) {
                customer.addPoints(amountSpent);
                return;
            }
        }
        cout << "Customer not found!" << endl;
    }

    void redeemPointsFromCustomer() {
        int id;
        int points;
        cout << "Enter Customer ID: ";
        cin >> id;
        cout << "Enter Points to Redeem: ";
        cin >> points;

        for (auto &customer : customers) {
            if (customer.getCustomerID() == id) {
                customer.redeemPoints(points);
                return;
            }
        }
        cout << "Customer not found!" << endl;
    }

    void displayCustomerDetails() {
        int id;
        cout << "Enter Customer ID: ";
        cin >> id;

        for (auto &customer : customers) {
            if (customer.getCustomerID() == id) {
                customer.displayCustomerDetails();
                return;
            }
        }
        cout << "Customer not found!" << endl;
    }
};

int main() {
    LoyaltyManagementSystem system;
    int choice;

    while (true) {
        cout << "\nLoyalty Management System" << endl;
        cout << "1. Add Customer" << endl;
        cout << "2. Add Points to Customer" << endl;
        cout << "3. Redeem Points from Customer" << endl;
        cout << "4. Display Customer Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addCustomer();
                break;
            case 2:
                system.addPointsToCustomer();
                break;
            case 3:
                system.redeemPointsFromCustomer();
                break;
            case 4:
                system.displayCustomerDetails();
                break;
            case 5:
                cout << "Thank you for using the Loyalty Management System!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
