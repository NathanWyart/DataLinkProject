#pragma once
#include "CLAddress.h"

ref class CLSociety {

private:
	int Id_Society;
	System::String^ society_name;
	CLAddress^ society_address;
	int service_phone;
public:
	void setId_Society(int);
	void setsociety_name(System::String^ society_name);
	void setsociety_address(CLAddress^ society_address);
	void setservice_phone(int);

	int getId_Society();
	System::String^ getsociety_name(System::String^ society_name);
	CLAddress^ getsociety_address(CLAddress^ society_address);
	int getservice_phone();
};