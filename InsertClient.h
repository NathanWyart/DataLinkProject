#pragma once
#include "pch.h"
#include "CLClients.h"
#include "CLStaff.h"
#include "CLAddress.h"
#include "CLPerson.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de InsertClient
	/// </summary>
	public ref class InsertClient : public System::Windows::Forms::Form
	{
	public:
		InsertClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InsertClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;








	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ DateBirth;


	private: System::Windows::Forms::Label^ FirstName;
	private: System::Windows::Forms::Label^ LastName;


	private: System::Windows::Forms::TextBox^ tbFN;
	private: System::Windows::Forms::TextBox^ tbLN;
	private: System::Windows::Forms::Label^ PostalCode;

	private: System::Windows::Forms::Label^ CityName;
	private: System::Windows::Forms::Label^ StreetName;
	private: System::Windows::Forms::Label^ StreetNumber;




	private: System::Windows::Forms::TextBox^ tbCN;
	private: System::Windows::Forms::TextBox^ tbPC;
	private: System::Windows::Forms::TextBox^ tbSN;
	private: System::Windows::Forms::TextBox^ tbSNumber;


	private: System::Windows::Forms::DateTimePicker^ DateBirthPicker;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ CityNameBilling;
	private: System::Windows::Forms::TextBox^ tbCNB;
	private: System::Windows::Forms::Label^ BillingPostal;
	private: System::Windows::Forms::TextBox^ tbPCB;

	private: System::Windows::Forms::Label^ streetBilling;
	private: System::Windows::Forms::TextBox^ tbSNB;

	private: System::Windows::Forms::Label^ streetNumberBilling;
	private: System::Windows::Forms::TextBox^ tbSNumberB;
	private: System::Windows::Forms::Panel^ panel2;












	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->DateBirth = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::Label());
			this->tbFN = (gcnew System::Windows::Forms::TextBox());
			this->tbLN = (gcnew System::Windows::Forms::TextBox());
			this->PostalCode = (gcnew System::Windows::Forms::Label());
			this->CityName = (gcnew System::Windows::Forms::Label());
			this->StreetName = (gcnew System::Windows::Forms::Label());
			this->StreetNumber = (gcnew System::Windows::Forms::Label());
			this->tbCN = (gcnew System::Windows::Forms::TextBox());
			this->tbPC = (gcnew System::Windows::Forms::TextBox());
			this->tbSN = (gcnew System::Windows::Forms::TextBox());
			this->tbSNumber = (gcnew System::Windows::Forms::TextBox());
			this->DateBirthPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CityNameBilling = (gcnew System::Windows::Forms::Label());
			this->tbCNB = (gcnew System::Windows::Forms::TextBox());
			this->BillingPostal = (gcnew System::Windows::Forms::Label());
			this->tbPCB = (gcnew System::Windows::Forms::TextBox());
			this->streetBilling = (gcnew System::Windows::Forms::Label());
			this->tbSNB = (gcnew System::Windows::Forms::TextBox());
			this->streetNumberBilling = (gcnew System::Windows::Forms::Label());
			this->tbSNumberB = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(494, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Client";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &InsertClient::label1_Click);
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatAppearance->BorderSize = 0;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnOK->Location = System::Drawing::Point(525, 540);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 47);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Confirm";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &InsertClient::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(752, 540);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 46);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &InsertClient::button2_Click);
			// 
			// DateBirth
			// 
			this->DateBirth->AutoSize = true;
			this->DateBirth->BackColor = System::Drawing::Color::Transparent;
			this->DateBirth->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateBirth->Location = System::Drawing::Point(860, 150);
			this->DateBirth->Name = L"DateBirth";
			this->DateBirth->Size = System::Drawing::Size(145, 27);
			this->DateBirth->TabIndex = 7;
			this->DateBirth->Text = L"Date of Birth";
			// 
			// FirstName
			// 
			this->FirstName->AutoSize = true;
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->Location = System::Drawing::Point(9, 150);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(125, 27);
			this->FirstName->TabIndex = 9;
			this->FirstName->Text = L"First name";
			this->FirstName->Click += gcnew System::EventHandler(this, &InsertClient::label5_Click);
			// 
			// LastName
			// 
			this->LastName->AutoSize = true;
			this->LastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastName->Location = System::Drawing::Point(433, 150);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(126, 27);
			this->LastName->TabIndex = 10;
			this->LastName->Text = L"Last name";
			// 
			// tbFN
			// 
			this->tbFN->Location = System::Drawing::Point(140, 143);
			this->tbFN->Name = L"tbFN";
			this->tbFN->Size = System::Drawing::Size(252, 38);
			this->tbFN->TabIndex = 11;
			// 
			// tbLN
			// 
			this->tbLN->Location = System::Drawing::Point(566, 143);
			this->tbLN->Name = L"tbLN";
			this->tbLN->Size = System::Drawing::Size(262, 38);
			this->tbLN->TabIndex = 12;
			// 
			// PostalCode
			// 
			this->PostalCode->AutoSize = true;
			this->PostalCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostalCode->Location = System::Drawing::Point(57, 352);
			this->PostalCode->Name = L"PostalCode";
			this->PostalCode->Size = System::Drawing::Size(144, 27);
			this->PostalCode->TabIndex = 13;
			this->PostalCode->Text = L"Postal code";
			// 
			// CityName
			// 
			this->CityName->AutoSize = true;
			this->CityName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityName->Location = System::Drawing::Point(56, 294);
			this->CityName->Name = L"CityName";
			this->CityName->Size = System::Drawing::Size(128, 27);
			this->CityName->TabIndex = 14;
			this->CityName->Text = L"City name";
			this->CityName->Click += gcnew System::EventHandler(this, &InsertClient::label8_Click);
			// 
			// StreetName
			// 
			this->StreetName->AutoSize = true;
			this->StreetName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetName->Location = System::Drawing::Point(54, 411);
			this->StreetName->Name = L"StreetName";
			this->StreetName->Size = System::Drawing::Size(147, 27);
			this->StreetName->TabIndex = 15;
			this->StreetName->Text = L"Street name";
			// 
			// StreetNumber
			// 
			this->StreetNumber->AutoSize = true;
			this->StreetNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNumber->Location = System::Drawing::Point(54, 471);
			this->StreetNumber->Name = L"StreetNumber";
			this->StreetNumber->Size = System::Drawing::Size(168, 27);
			this->StreetNumber->TabIndex = 16;
			this->StreetNumber->Text = L"Street number";
			// 
			// tbCN
			// 
			this->tbCN->Location = System::Drawing::Point(263, 295);
			this->tbCN->Name = L"tbCN";
			this->tbCN->Size = System::Drawing::Size(379, 38);
			this->tbCN->TabIndex = 17;
			// 
			// tbPC
			// 
			this->tbPC->Location = System::Drawing::Point(263, 352);
			this->tbPC->Name = L"tbPC";
			this->tbPC->Size = System::Drawing::Size(379, 38);
			this->tbPC->TabIndex = 18;
			// 
			// tbSN
			// 
			this->tbSN->Location = System::Drawing::Point(263, 411);
			this->tbSN->Name = L"tbSN";
			this->tbSN->Size = System::Drawing::Size(379, 38);
			this->tbSN->TabIndex = 19;
			// 
			// tbSNumber
			// 
			this->tbSNumber->Location = System::Drawing::Point(263, 469);
			this->tbSNumber->Name = L"tbSNumber";
			this->tbSNumber->Size = System::Drawing::Size(379, 38);
			this->tbSNumber->TabIndex = 20;
			// 
			// DateBirthPicker
			// 
			this->DateBirthPicker->Location = System::Drawing::Point(1013, 143);
			this->DateBirthPicker->Name = L"DateBirthPicker";
			this->DateBirthPicker->Size = System::Drawing::Size(406, 38);
			this->DateBirthPicker->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(309, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 37);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Delivery Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(307, 37);
			this->label2->TabIndex = 28;
			this->label2->Text = L"General Information";
			this->label2->Click += gcnew System::EventHandler(this, &InsertClient::label2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1422, 82);
			this->panel1->TabIndex = 29;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InsertClient::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1006, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 37);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Billing Address";
			// 
			// CityNameBilling
			// 
			this->CityNameBilling->AutoSize = true;
			this->CityNameBilling->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityNameBilling->Location = System::Drawing::Point(783, 307);
			this->CityNameBilling->Name = L"CityNameBilling";
			this->CityNameBilling->Size = System::Drawing::Size(128, 27);
			this->CityNameBilling->TabIndex = 31;
			this->CityNameBilling->Text = L"City name";
			// 
			// tbCNB
			// 
			this->tbCNB->Location = System::Drawing::Point(957, 300);
			this->tbCNB->Name = L"tbCNB";
			this->tbCNB->Size = System::Drawing::Size(379, 38);
			this->tbCNB->TabIndex = 32;
			// 
			// BillingPostal
			// 
			this->BillingPostal->AutoSize = true;
			this->BillingPostal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BillingPostal->Location = System::Drawing::Point(783, 364);
			this->BillingPostal->Name = L"BillingPostal";
			this->BillingPostal->Size = System::Drawing::Size(144, 27);
			this->BillingPostal->TabIndex = 33;
			this->BillingPostal->Text = L"Postal code";
			// 
			// tbPCB
			// 
			this->tbPCB->Location = System::Drawing::Point(957, 357);
			this->tbPCB->Name = L"tbPCB";
			this->tbPCB->Size = System::Drawing::Size(379, 38);
			this->tbPCB->TabIndex = 34;
			// 
			// streetBilling
			// 
			this->streetBilling->AutoSize = true;
			this->streetBilling->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->streetBilling->Location = System::Drawing::Point(783, 423);
			this->streetBilling->Name = L"streetBilling";
			this->streetBilling->Size = System::Drawing::Size(147, 27);
			this->streetBilling->TabIndex = 35;
			this->streetBilling->Text = L"Street name";
			// 
			// tbSNB
			// 
			this->tbSNB->Location = System::Drawing::Point(957, 416);
			this->tbSNB->Name = L"tbSNB";
			this->tbSNB->Size = System::Drawing::Size(379, 38);
			this->tbSNB->TabIndex = 36;
			// 
			// streetNumberBilling
			// 
			this->streetNumberBilling->AutoSize = true;
			this->streetNumberBilling->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->streetNumberBilling->Location = System::Drawing::Point(783, 476);
			this->streetNumberBilling->Name = L"streetNumberBilling";
			this->streetNumberBilling->Size = System::Drawing::Size(168, 27);
			this->streetNumberBilling->TabIndex = 37;
			this->streetNumberBilling->Text = L"Street number";
			// 
			// tbSNumberB
			// 
			this->tbSNumberB->Location = System::Drawing::Point(957, 469);
			this->tbSNumberB->Name = L"tbSNumberB";
			this->tbSNumberB->Size = System::Drawing::Size(379, 38);
			this->tbSNumberB->TabIndex = 38;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(-20, 205);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1454, 10);
			this->panel2->TabIndex = 39;
			// 
			// InsertClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1422, 624);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tbSNumberB);
			this->Controls->Add(this->streetNumberBilling);
			this->Controls->Add(this->tbSNB);
			this->Controls->Add(this->streetBilling);
			this->Controls->Add(this->tbPCB);
			this->Controls->Add(this->BillingPostal);
			this->Controls->Add(this->tbCNB);
			this->Controls->Add(this->CityNameBilling);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DateBirthPicker);
			this->Controls->Add(this->tbSNumber);
			this->Controls->Add(this->tbSN);
			this->Controls->Add(this->tbPC);
			this->Controls->Add(this->tbCN);
			this->Controls->Add(this->StreetNumber);
			this->Controls->Add(this->StreetName);
			this->Controls->Add(this->CityName);
			this->Controls->Add(this->PostalCode);
			this->Controls->Add(this->tbLN);
			this->Controls->Add(this->tbFN);
			this->Controls->Add(this->LastName);
			this->Controls->Add(this->FirstName);
			this->Controls->Add(this->DateBirth);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"InsertClient";
			this->Text = L"InsertClient";
			this->Load += gcnew System::EventHandler(this, &InsertClient::InsertClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {


		if (DateBirthPicker->Text->Length == 0 || tbFN->Text->Length == 0 || tbLN->Text->Length == 0
			|| tbCN->Text->Length == 0 || tbPC->Text->Length == 0 || tbSN->Text->Length == 0 ||
			tbSNumber->Text->Length == 0) {

			MessageBox::Show("Please enter all the fields", "On or more empty fields",
				MessageBoxButtons::OK);
			return;
		}



		try {

			String^ connString = "Data Source = localhost\\ ; Initial Catalog=datalink; Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			SqlTransaction^ sqlTran = sqlConn.BeginTransaction();

			try {
				// CLasse "Person"
				CLPerson^ person = gcnew CLPerson;
				person->setname(this->tbLN->Text);
				person->setfirstname(this->tbFN->Text);

				// CLasse "Client"
				CLStaff^ staff = gcnew CLStaff;
				staff->sethire_date(this->DateBirthPicker->Value.ToString("yyyy-MM-dd"));

				// CLasse "Address"
				CLAddress^ address_staff = gcnew CLAddress;
				address_staff->setcity(this->tbCN->Text);

				int postal_value;
				if (Int32::TryParse(this->tbPC->Text, postal_value)) {
					address_staff->setpostal(postal_value);

				};
				address_staff->setstreet(this->tbSN->Text);

				int street_number_value;
				if (Int32::TryParse(this->tbSNumber->Text, street_number_value)) {
					address_staff->setstreet_number(street_number_value);
				};



				staff->setstaff_address(address_staff);



				// Table "City"
				String^ cityQuery =
					"INSERT INTO CITY (POSTAL_CODE, CITY_NAME) VALUES (@POSTAL_CODE, @CITY_NAME); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandCity = gcnew SqlCommand(cityQuery, % sqlConn, sqlTran);
				commandCity->Parameters->AddWithValue("@POSTAL_CODE", address_staff->getpostal());
				commandCity->Parameters->AddWithValue("@CITY_NAME", address_staff->getcity());

				int cityId = Convert::ToInt32(commandCity->ExecuteScalar());

				// Table "Address"
				String^ addressQuery =
					"INSERT INTO ADDRESS (STREET_NAME, STREET_NUMBER, ID_CITY) VALUES (@STREET_NAME, @STREET_NUMBER, @ID_CITY); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandAddress = gcnew SqlCommand(addressQuery, % sqlConn, sqlTran);
				commandAddress->Parameters->AddWithValue("@STREET_NAME", address_staff->getstreet());
				commandAddress->Parameters->AddWithValue("@STREET_NUMBER", address_staff->getstreet_number());
				commandAddress->Parameters->AddWithValue("@ID_CITY", cityId);

				int addressId = Convert::ToInt32(commandAddress->ExecuteScalar());


				// Table "Person"
				String^ personQuery =
					"INSERT INTO PERSON (FIRST_NAME, LAST_NAME) VALUES (@FIRST_NAME, @LAST_NAME); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandPerson = gcnew SqlCommand(personQuery, % sqlConn, sqlTran);
				commandPerson->Parameters->AddWithValue("@FIRST_NAME", person->getfirstname());
				commandPerson->Parameters->AddWithValue("@LAST_NAME", person->getfirstname());

				int personId = Convert::ToInt32(commandPerson->ExecuteScalar());


				// Table "Staff"
				String^ staffQuery =
					"INSERT INTO STAFF (DATE_HIRED, FIRST_NAME_SUP, LAST_NAME_SUP, ID_ADDRESS, ID_PERSON) VALUES (@DATE_HIRED, @FIRST_NAME_SUP, @LAST_NAME_SUP, @ID_ADDRESS, @ID_PERSON);";

				SqlCommand^ commandStaff = gcnew SqlCommand(staffQuery, % sqlConn, sqlTran);
				commandStaff->Parameters->AddWithValue("@DATE_HIRED", staff->gethire_date());
				commandStaff->Parameters->AddWithValue("@FIRST_NAME_SUP", staff->getfirst_name_sup());
				commandStaff->Parameters->AddWithValue("@LAST_NAME_SUP", staff->getlast_name_sup());
				commandStaff->Parameters->AddWithValue("@ID_ADDRESS", addressId);
				commandStaff->Parameters->AddWithValue("@ID_PERSON", personId);


				commandStaff->ExecuteNonQuery();
				sqlTran->Commit();

				MessageBox::Show("Transfert de données réussi !", "Succès", MessageBoxButtons::OK);
			}

			catch (Exception^ ex) {
				sqlTran->Rollback();
				MessageBox::Show("Failed to register new staff: " + ex->Message, "Register failure", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to the database: " + ex->Message, "Database connection failure", MessageBoxButtons::OK);

		}


	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InsertClient_Load(System::Object^ sender, System::EventArgs^ e) { 
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
