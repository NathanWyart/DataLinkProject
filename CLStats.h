#pragma once

ref class CLStats {

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