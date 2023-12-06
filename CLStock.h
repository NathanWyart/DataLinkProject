#pragma once

ref class CLStock {

private:
	int	ref;
	System::String^ article_name;
	int reorder_treshold;
	int TVA;
	System::String^ nature;
	int quantity;
	int price;
public:
	void setref(int ref);
	void setarticle_name(System::String^ article_name);
	void setreorder_treshold(int reorder_treshold);
	void setTVA(int TVA);
	void setnature(System::String^ nature);
	void setquantity(int quantity);
	void setprice(int price);

	int getref();
	System::String^ getarticle_name();
	int getreorder_treshold();
	int getTVA();
	System::String^ getnature();
	int getquantity();
	int getprice();
};