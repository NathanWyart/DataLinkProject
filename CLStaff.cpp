#include "pch.h"
#include "CLStaff.h"


//*************Setup infos staff******************
void CLStaff::setId_Staff(int Id_Staff) {
	this->Id_Staff = Id_Staff;
}

void CLStaff::setstaff_address(CLAddress^ staff_address) {
	this->staff_address = staff_address;
}

void CLStaff::sethired_date(System::String^ hire_date) {
	this->hired_date = hire_date;
}

void CLStaff::setsuperior(int Id_Staff_superior) {
	this->Id_Staff_superior = Id_Staff_superior;
}


//**********Récupération infos staff************
int CLStaff::getId_Staff() {
	return this->Id_Staff;
}

CLAddress^ CLStaff::getstaff_address() {
	return this->staff_address;
}

System::String^ CLStaff::gethired_date() {
	return this->hired_date;
}

int CLStaff::getsuperior() {
	return this->Id_Staff_superior;
}