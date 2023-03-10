#include <iostream>
using namespace std;

#pragma region Task1
//class Distance {
//private:
//	int feet, yards, miles;
//public:
//	// Constructor
//	Distance(int feet = 0, int yards = 0, int miles = 0);
//
//	// Getters
//	int getFeet() const;
//	int getYards() const;
//	int getMiles() const;
//
//	// ConvertFeet method
//	Distance ConvertFeet(int feet);
//
//	// ConvertYards method
//	Distance ConvertYards(int yards);
//
//	// Add method
//	Distance Add(const Distance& other) const;
//};
//
//Distance::Distance(int feet, int yards, int miles)
//	: feet(feet), yards(yards), miles(miles) {}
//
//int Distance::getFeet() const {
//	return feet;
//}
//
//int Distance::getYards() const {
//	return yards;
//}
//
//int Distance::getMiles() const {
//	return miles;
//}
//
//Distance Distance::ConvertFeet(int feet) {
//	int totalYards = feet / 3;
//	int remainingFeet = feet % 3;
//	int totalMiles = totalYards / 1760;
//	int remainingYards = totalYards % 1760;
//	cout << remainingFeet << " feet, " << remainingYards << " yards, " << totalMiles << " miles ";
//	return Distance(remainingFeet, remainingYards, totalMiles);
//}
//
//Distance Distance::ConvertYards(int yards) {
//	int totalFeet = yards * 3;
//	return ConvertFeet(totalFeet);
//}
//
//Distance Distance::Add(const Distance& other) const {
//	int totalFeet = feet + other.feet + (yards + other.yards) / 3;
//	int remainingYards = (yards + other.yards) % 3;
//	int totalYards = remainingYards + (miles + other.miles) * 1760;
//	cout << totalFeet << " , " << totalYards;
//	return Distance(totalFeet, totalYards, 0);
//}
#pragma endregion

#pragma region Task2
//class Invoice {
//private:
//	string number, description;
//	int quantity, price;
//public:
//	// Constructor
//	Invoice(string number = "", string description = "", int quantity = 0, int price = 0);
//
//	//Setters
//	void setNumber(string number);
//	void setDescription(string description);
//	void setQuantity(int quantity);
//	void setPrice(int price);
//
//	// Getters
//	string getNumber() const;
//	string getDescription() const;
//	int getQuantity() const;
//	int getPrice() const;
//
//
//	int getInvoiceAmount() const;
//};
//
//Invoice::Invoice(string number, string description, int quantity, int price)
//	: number(number), description(description), quantity(quantity), price(price) {}
//
//
//
//void Invoice::setNumber(string number) {
//	this->number = number;
//}
//
//void Invoice::setDescription(string description) {
//	this->description = description;
//}
//
//void Invoice::setQuantity(int quantity) {
//	if (quantity < 0) {
//		this->quantity = 0;
//	}
//	else {
//		this->quantity = quantity;
//	}
//}
//
//void Invoice::setPrice(int price) {
//	if (price < 0) {
//		this->price = 0;
//	}
//	else {
//		this->price = price;
//	}
//}
//
//string Invoice::getNumber() const {
//	return number;
//}
//
//string Invoice::getDescription() const {
//	return description;
//}
//
//int Invoice::getQuantity() const {
//	return quantity;
//};
//
//int Invoice::getPrice() const {
//	return price;
//};
//
//int Invoice::getInvoiceAmount() const {
//	int amount = quantity * price;
//	if (quantity < 0) {
//		return 0;
//	}
//	else if (price < 0) {
//		return 0;
//	}
//	else {
//		return amount;
//	}
//}
#pragma endregion


int main() {

#pragma region Task1 method callers
	//Distance dist(1, 1, 1);
	//Distance dist2(1, 1, 1);

	//dist.ConvertFeet(6002);
	//dist.ConvertYards(5230);
	//dist.Add(dist2);
#pragma endregion

#pragma region Task2 testers
		//Invoice invoice("1234", "Hammer", 5, 200); 
	//cout << "Part Number: " << invoice.getNumber();
	//cout << "Part Description: " << invoice.getDescription(); 
	//cout << "Quantity: " << invoice.getQuantity(); 
	//cout << "Price Per Item: " << invoice.getPrice(); 
	//cout << "Invoice Amount: " << invoice.getInvoiceAmount(); 

	//invoice.setQuantity(10);
	//invoice.setPrice(-50);
	//cout << "Updated Quantity: " << invoice.getQuantity();
#pragma endregion


}


