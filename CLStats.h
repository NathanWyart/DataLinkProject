#pragma once

ref class CLStats {
private:
	int tva;
	int margin;
	int discount;
	int brand;

public:
	void settva(int tva);
	void setmargin(int margin);
	void setdiscount(int discount);
	void setbrand(int brand);

	int gettva();
	int getmargin();
	int getdiscount();
	int getbrand();

	int moy_basket();
	int turnover();
	int under_treshold();
	System::String^ best_sell();
	System::String^ less_sell();
	int commercial_value();
	int purchase_value();
	int variation();
};