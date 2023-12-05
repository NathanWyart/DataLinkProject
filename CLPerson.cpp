#include "pch.h"
#include "CLPerson.h"


//*******Setup les infos*****************

void CLPerson::setname(System::String^ name) {
	this->name = name;
}

void CLPerson::setfirstname(System::String^ firstname) {
	this->firstname = firstname;
}

void CLPerson::setbirth_date(System::String^ birth_date) {
	this->birth_date = birth_date;
}

//******Récuperer les infos********

int CLPerson::getid() {
	return id;
}

System::String^ CLPerson::getname() {
	return name;
}

System::String^ CLPerson::getfirstname() {
	return firstname;
}

System::String^ CLPerson::getbirth_date() {
	return birth_date;
}