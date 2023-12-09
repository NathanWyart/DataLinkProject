#include "pch.h"
#include "CLStats.h"

void CLStats::settva(int tva) {
	this->tva = tva;
}

void CLStats::setmargin(int margin) {
	this->margin = margin;
}

void CLStats::setdiscount(int discount) {
	this->discount = discount;
}

void CLStats::setbrand(int brand) {
	this->brand = brand;
}

int CLStats::gettva() {
	return this->tva;
}

int CLStats::getmargin() {
	return this->margin;
}

int CLStats::getdiscount() {
	return this->discount;
}

int CLStats::getbrand() {
	return this->brand;
}

int CLStats::moy_basket() {
	return 0;
	;
}

int CLStats::turnover() {
	return 0;
}

int CLStats::under_treshold() {
	return 0;
}

System::String^ CLStats::best_sell() {
	return "a";
}

System::String^ CLStats::less_sell() {
	return "a";
}

int CLStats::commercial_value() {
	return 0;
}

int CLStats::purchase_value() {
	return 0;
}

int CLStats::variation() {
	return 0;
}