#include "pch.h"
#include "CLOrder.h"


//***********Setup des infos***********
void CLOrder::setref(int ref) {
	this->ref = ref;
}

void CLOrder::setdelivery_date(System::String^ delivery_date) {
	this->delivery_date = delivery_date;
}

void CLOrder::setemission_date(System::String^ emission_date) {
	this->emission_date = emission_date;
}

void CLOrder::setpayment_date(System::String^ payment_date) {
	this->payment_date = payment_date;
}

void CLOrder::setpayment_means(int payment_means) {
	this->payment_means = payment_means;
}

void CLOrder::settot_items(int tot_items) {
	this->tot_items = tot_items;
}

void CLOrder::settotal_amount_HT(int total_amount_HT) {
	this->total_amount_HT = total_amount_HT;
}

void CLOrder::settotal_amount_TVA(int total_amount_TVA) {
	this->total_amount_TVA = total_amount_TVA;
}

void CLOrder::settotal_amount_TTC(int total_amount_TTC) {
	this->total_amount_TTC = total_amount_TTC;
}

void CLOrder::setitem(System::String^ item) {
	this->item = item;
}

//***********Récuperer les infos**********
int CLOrder::getref() {
	return this->ref;
}

System::String^ CLOrder::getdelivery_date() {
	return this->delivery_date;
}

System::String^ CLOrder::getemission_date() {
	return this->emission_date;
}

System::String^ CLOrder::getpayment_date() {
	return this->payment_date;
}

int CLOrder::getpayment_means() {
	return this->payment_means;
}

int CLOrder::gettot_items() {
	return this->tot_items;
}

int CLOrder::gettotal_amount_HT() {
	return this->total_amount_HT;
}

int CLOrder::gettotal_amount_TVA() {
	return this->total_amount_TVA;
}

int CLOrder::gettotal_amount_TTC() {
	return this->total_amount_TTC;
}

System::String^ CLOrder::getitem() {
	return this->item;
}