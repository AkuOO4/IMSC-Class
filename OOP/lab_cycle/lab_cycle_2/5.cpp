#include <iostream>
#include <iomanip>
using namespace std;

class product
{
protected:
    string name;
public:
    product() {};
    product(string n1) { name = n1; }
    void show(void) { cout << "product: " << name << endl; }
};

class quantity :public product
{ 
protected:
    int qty;
public:
    quantity() {};
    quantity(string n1,int n2):product(n1)
    {
        qty = n2;
    }
    void show(void) { cout << "quantity " << qty<<endl; }
};

class customer
{
protected:
    string cust_name;
public:
    customer() {};
    customer(string n3) { cust_name=n3; }
    void show(void) { cout << "customer name " << cust_name<<endl; }
};

class receipt : public quantity, public customer
{
public:
    receipt() {};
    receipt(string n1, int n2, string n3):quantity(n1, n2), customer(n3){};
    void show(void)
    {
        customer::show();
        product::show();
        quantity::show();
    }
};

int main()
{
    string item_name, cust_name;
    int qty;
    cout << "\nEnter costumer name: ";
    cin >> cust_name;
    cout << "\nEnter item name: ";
    cin >> item_name;
    cout << "\nEnter the quatity of item purchased: ";
    cin >> qty;
    receipt r(item_name,qty,cust_name);
    r.show();
}