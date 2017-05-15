#include<string>
#include<vector>

using namespace std;

class Order
{
	 vector<string> list;
	 vector<int> col;
public:
	Order()
	{
		list.clear();
		col.clear();
	}
	void order_add(string it, int num)
	{
		list.push_back(it);
		col.push_back(num);
	}
};

class Order_make:public Order
{
	int balance;
	int summary_price;
	Order *ord;
public:
	Order_make(int bal)
	{
		balance = bal;
		ord = new Order();
		summary_price = 0;
	}
	bool add_to_order(int price, string item, int col)
	{
		if (price*col > balance)
			return false;
		balance -= price*col;
		ord->order_add(item, col);
		summary_price += price*col;
		return true;
	}
	int getBalance()
	{
		return balance;
	}
	int get_sum_price()
	{
		return summary_price;
	}
};

class order_proxy
{
	Order_make *real_order_object;
	vector<string> items_offered;
	vector<int> prices;
public:

	order_proxy(int bal)
	{
		items_offered = { "Classic pavement", "Triangle pavement", "Stone-imitated pavement", "Pavement made in soft technology", "Colored pavement" };
		prices = { 100, 140, 275, 385, 176 };
		real_order_object = new Order_make(bal);
	}

	bool add_to_order(string item, int col)
	{
		int indx = 0;
		while (indx<items_offered.size() && items_offered[indx]!=item)
		{
			indx++;
		}
		
		if (indx < items_offered.size())
			return real_order_object->add_to_order(prices[indx], item, col);
		else
			return false;
	}
	int getBalance()
	{
		return real_order_object->getBalance();
	}
	int get_sum()
	{
		return real_order_object->get_sum_price();
	}
};
