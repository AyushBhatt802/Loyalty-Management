# Loyalty Management System

This is a simple Loyalty Management System written in C++. The system allows you to add customers, record the amount they have spent to calculate loyalty points, redeem points, and display customer details.

## Features

- Add new customers
- Add points to customers based on the amount spent
- Redeem points from customers
- Display customer details

## Requirements

- C++ compiler (e.g., g++)

## How to Compile and Run

1. **Clone the repository:**

   ```sh
   git clone https://github.com/AyushBhatt802/loyalty-management.git
   cd loyalty-management-system

Compile the code:

g++ -o loyalty_management loyalty_management.cpp

Run the executable:

./loyalty_management

Usage
After running the executable, you will be presented with a menu with the following options:

Add Customer: Add a new customer by entering their ID and name.
Add Points to Customer: Add points to a customer by entering their ID and the amount they have spent.
Redeem Points from Customer: Redeem points from a customer by entering their ID and the number of points to redeem.
Display Customer Details: Display the details of a customer by entering their ID.
Exit: Exit the program

Example
Add a Customer:

Enter Customer ID: 1
Enter Customer Name: John Doe

Add Points to Customer:
Enter Customer ID: 1
Enter Amount Spent: 100

Redeem Points from Customer:

Enter Customer ID: 1
Enter Points to Redeem: 5

Display Customer Details:

Enter Customer ID: 1

This will display the details of John Doe, including his ID, name, and remaining loyalty points.

Contributing
Contributions are welcome! Please open an issue or submit a pull request for any changes
