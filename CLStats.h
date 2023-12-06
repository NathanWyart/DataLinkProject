#pragma once

ref class CLStats {
	
private:
	/*int moy_basket;
	int turnover;
	int under_treshold;
	int tot_purchase;
	System::String^ best_sell;
	System::String^ less_sell;
	int commercial_value; //changer le int
	int purchase_value;
	int variation; */

public:
	int moy_basket();
	int turnover();
	int under_treshold();
	System::String^ best_sell();
	System::String^ less_sell();
	int commercial_value();
	int purchase_value();
	int variation();
};