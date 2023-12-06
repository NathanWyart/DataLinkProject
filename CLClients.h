#pragma once
#include "CLPerson.h"
#include "CLAddress.h"


ref class CLClients : public CLPerson {
private:
	int Id_Client;
	CLAddress^ delivery_address;
	CLAddress^ billing_address;
	System::String^ date_first_order;

public:

	//****Setup les infos********
	void setId_Client(int Id_Client);
	void setdelivery_address(CLAddress^ delivery_address);
	void setbilling_address(CLAddress^ billing_address);
	void setdate_first_order(System::String^ date_first_order);

	//****Récuperer les infos******
	int getId_Client();
	CLAddress^ getdelivery_address();
	CLAddress^ getbilling_address();
	System::String^ getdate_first_order();

};
