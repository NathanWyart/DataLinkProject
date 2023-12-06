#include "pch.h"
#include "CLStock.h"

void CLStock::setref(int ref) {
	this->ref = ref;
}

void CLStock::setarticle_name(System::String^ article_name) {
	this->article_name = article_name;
}

void CLStock::setreorder_treshold(int reorder_treshold) {
	this->reorder_treshold = reorder_treshold;
}

void CLStock::setTVA(int TVA) {
	this->TVA = TVA;
}

void CLStock::setnature(System::String^ nature) {
	this->nature = nature;
}

void CLStock::setquantity(int quantity) {
	this->quantity = quantity;
}

void CLStock::setprice(int price){
	this->price = price;
}

//************Récupération infos stock**************
int CLStock::getref(int) {
	return this->ref;
}

System::String^ CLStock::getarticle_name(System::String^ article_name) {
	return this->article_name;
}

int CLStock::getreorder_treshold(int) {
	return this->reorder_treshold;
}

int CLStock::getTVA(int) {
	return this->TVA;
}

System::String^ CLStock::getnature(System::String^ nature) {
	return this->nature;
}

int CLStock::getquantity(int) {
	return this->quantity;
}

int CLStock::getprice(int) {
	return this->price;
}