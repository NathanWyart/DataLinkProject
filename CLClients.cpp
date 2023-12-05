#include "pch.h"
#include "CLClients.h"


//**********Setup des infosClients*************
void CLClients::setId_Client(int Id_Client) {
	this->Id_Client = Id_Client;
}

void CLClients::setdelivery_address(CLAddress^ delivery_address) {
	this->delivery_address = delivery_address;
}

void CLClients::setbilling_address(CLAddress^ billing_address) {
	this->billing_address = billing_address;
}

void CLClients::setdate_first_order(System::String^ date_first_order) {
	this->date_first_order = date_first_order;
}


//***************Récuperation InfosClients****************
int CLClients::getId_Client() {
	return this->Id_Client;
}

CLAddress^ CLClients::getdelivery_address() {
	return this->delivery_address;
}

CLAddress^ CLClients::getbilling_address() {
	return this->billing_address;
}

System::String^ CLClients::getdate_first_order() {
	return this->date_first_order;
}
