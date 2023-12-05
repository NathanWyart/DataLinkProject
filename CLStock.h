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

	int getref(int);
	System::String^ getarticle_name(System::String^ article_name);
	int getreorder_treshold(int);
	int getTVA(int);
	System::String^ getnature(System::String^ nature);
	int getquantity(int);
	int getprice(int);
};