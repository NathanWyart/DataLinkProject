#include "pch.h"
#include "CLSociety.h"


//**********Setup info société**************
void CLSociety::setId_Society(int Id_Staff) {
	this->Id_Society = Id_Staff;
}

void CLSociety::setsociety_name(System::String^ society_name) {
	this->society_name = society_name;
}

void CLSociety::setsociety_address(CLAddress^ society_address) {
	this->society_address = society_address;
}

void CLSociety::setservice_phone(int service_phone) {
	this->service_phone = service_phone;
}


//*********Récupération d'info societé**********
int CLSociety::getId_Society() {
	return this->Id_Society;
}

System::String^ CLSociety::getsociety_name() {
	return this->society_name;
}

CLAddress^ CLSociety::getsociety_address() {
	return this->society_address;
}

int CLSociety::getservice_phone(int) {
	return this->service_phone;
}