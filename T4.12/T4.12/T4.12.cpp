#include <iostream>
using namespace std;

class Address {
private:
	string street;
	int streetNumber;
public:
	Address() {

	}
	Address(string street, int streetNumber) {
		this->street = street;
		this->streetNumber = streetNumber;
	}
	void setStreet(string street) {
		this->street = street;
	}
	void setStreetNumber(int streetNumber) {
		this->streetNumber = streetNumber;
	}
	string getStreet() {
		return this->street;
	}
};

class Restaurant {
private:
	Address* address;
public:
	Restaurant(Address* address) {
		this->address = address;
	}
	Address* getAddress() {
		return this->address;
	}
};

class Service {
	vector<string> menu;
	unsigned int places;
	vector<int> commandes;

public:
	Service();
	void show_menu();
	bool check_item(int item);
	void take_order(int item);
	void payment();
	int next_order();

	Service::Service() {
	
		menu.push_back("pizza");
		menu.push_back("pasta");
		menu.push_back("french fries");
		
	}

	void Service::show_menu() {
		cout << endl << "The menu is:" << endl;

		for (int i = 0; i < menu.size(); i++) {
			cout << i << " - " << menu[i] << endl;
		}

	bool Service::check_item(int item) {
			return item >= 0 && item < menu.size();
		}
	}
	void Service::take_order(int item) {
		commandes.push_back(item);
	}
	void Service::payment() {
	}
	int Service::next_order() {
		int item = commandes.back();
		commandes.pop_back();
		return item;
	}
	
};

class Kitchen {
	vector<int> orders;
	Service& waiter;
	int nr_orders;
public:
	Kitchen(Service& service);
	void receive_orders();
	void prepare_orders();
	void notify();
};

Kitchen::Kitchen(Service& s) : waiter(s) {

}

void Kitchen::receive_orders() {
	for (int i = 0; i < waiter.nr_orders(); i++) {
		orders.push_back(waiter.next_order());
	}
}

void Kitchen::prepare_orders() {}

void Kitchen::notify() {}


int main()
	{
	Address* address = new Address("Aleea Piersicului", 111);
	Restaurant* restaurant = new Restaurant(address);
	cout << restaurant->getAddress()->getStreet();

	Address* address1 = new Address();
	address1->setStreet("George Enescu");
	address1->setStreetNumber(9);
	Restaurant* restaurant1 = new Restaurant(address1);
	cout << restaurant1->getAddress()->getStreet();

	Service waiter;
	Kitchen kitchen(waiter);

	while (true)
	{
		cout << "Buna ziua!" << endl;
		cout << "Ce doriti?" << endl;

		int nr_clients;
		cin >> nr_clients;

			waiter.show_menu();

			int i = 0;
			while (i < nr_clients) {

				cout << "Clientul " << i << ", ce doreste?" << endl;

				int item = -1;
				while (!waiter.check_item(item)) {
					cin >> item;

					if (!waiter.check_item(item)) {
						cout << " nu exista" << endl;
					}
				}
		
				waiter.take_order(item);
				i = i + 1;
			}
	
		kitchen.receive_orders();
		kitchen.prepare_orders();
		kitchen.notify();
		waiter.payment();
	}
	return 0;
}














