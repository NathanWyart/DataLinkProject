#pragma once

ref class CLOrder {
private:
	int ref;
	System::String^ delivery_date;
	System::String^ emission_date;
	System::String^ payment_date;
	int payment_means;
	int tot_items;
	int total_amount_HT;
	int total_amount_TVA;
	int total_amount_TTC;
	System::String^ item;
public:
	void setref(int ref);
	void setdelivery_date(System::String^ delivery_date);
	void setemission_date(System::String^ emission_date);
	void setpayment_date(System::String^ payment_date);
	void setpayment_means(int payment_means);
	void settot_items(int tot_item);
	void settotal_amount_HT(int total_amount_HT);
	void settotal_amount_TVA(int total_amount_TVA);
	void settotal_amount_TTC(int total_amount_TCC);
	void setitem(System::String^ item);

	int getref();
	System::String^ getdelivery_date();
	System::String^ getemission_date();
	System::String^ getpayment_date();
	int getpayment_means();
	int gettot_items();
	int gettotal_amount_HT();
	int gettotal_amount_TVA();
	int gettotal_amount_TTC();
	System::String^ getitem();
};