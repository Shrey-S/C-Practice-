//
//  main.cpp
//  Playground
//
//  Created by Shrey Sethi on 7/5/17.
//  Copyright © 2017 Shrey Sethi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

class Inventory {
	int itemNumber, quantity;
	double cost, totalCost;
	
public:
	Inventory() {
		itemNumber = quantity = 0;
		cost = totalCost = 0;
	}
	Inventory(int i, int q, double c) {
		itemNumber = i;
		quantity = q;
		cost = c;
		setTotalCost();
	}
	
	void setItemNumber(int val) {
		itemNumber = val;
	}
	void setQuantity(int val) {
		quantity = val;
	}
	void setCost(double val) {
		cost = val;
	}
	void setTotalCost() {
		totalCost = cost * quantity;
	}
	
	int getItemNumber() const {
		return itemNumber;
	}
	int getQuantity() const {
		return quantity;
	}
	int getCost() const {
		return cost;
	}
	int getTotalCost() const {
		return totalCost;
	}
};



int main() {
	int itemNumber, quantity;
	double cost;
	Inventory myInventory;
	
	cout << "Enter the item nummber, quantity, and cost seperated by spaces: " << endl;
	cin >> itemNumber >> quantity >> cost;
	
	myInventory.setItemNumber(itemNumber);
	myInventory.setQuantity(quantity);
	myInventory.setCost(cost);
	myInventory.setTotalCost();
	
	cout << setw(12) << left << "Item number " << ": " << myInventory.getItemNumber() << endl
		<< setw(12) << left << "Quantity "  << ": " << myInventory.getQuantity() << endl
		<< setw(12) << left << "Cost " << ": " << myInventory.getCost() << endl
		<< setw(12) << left << "Total Cost " << ": " << myInventory.getTotalCost() << endl;
	
}

