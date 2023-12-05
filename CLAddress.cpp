#include "pch.h"
#include "CLAddress.h"

//************Setup toutes les infos de l'adresse*************
void CLAddress::setIdAddress(int id_address) {
	this->id_address = id_address;
}

void CLAddress::setcountry(System::String^ country) {
	this->country = country;
}

void CLAddress::setcity(System::String^ city) {
	this->city = city;
}

void CLAddress::setstreet(System::String^ street) {
	this->street = street;
}

void CLAddress::setstreet_number(System::String^ street_number) {
	this->street_number = street_number;
}

void CLAddress::setpostal(System::String^ postal) {
	this->postal = postal;
}

//****************Récupérer les infos de l'adresse*******************

int CLAddress::getIdAddress() {
	return this->id_address;
}

System::String^ CLAddress::getcountry() {
	return this->country;
}

System::String^ CLAddress::getcity() {
	return this->city;
}

System::String^ CLAddress::getstreet() {
	return this->street;
}

System::String^ CLAddress::getstreet_number() {
	return this->street_number;
}

System::String^ CLAddress::getpostal() {
	return this->postal;
}