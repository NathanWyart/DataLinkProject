#pragma once
#include "CLPerson.h"
#include "CLAddress.h"

ref class CLStaff : public CLPerson {

private:
	int Id_Staff;
	CLAddress^ staff_address;
	System::String^ hired_date;
	int Id_Staff_superior;
public:

	//*******Setup les infos Staff**************
	void setId_Staff(int);
	void setstaff_address(CLAddress^ staff_address);
	void sethired_date(System::String^ hired_date);
	void setsuperior(int);


	//*********Récuperer les infos Staff*************
	int getId_Staff();
	CLAddress^ getstaff_address();
	System::String^ gethired_date();
	int getsuperior();
};