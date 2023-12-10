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
	/// Description résumée de UpdateClient
	/// </summary>
	public ref class UpdateClient : public System::Windows::Forms::Form
	{
	public:
		UpdateClient(void)
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
		~UpdateClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;








	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;































	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DateTimePicker^ DateOrderPicker;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbSNumberF;
	private: System::Windows::Forms::Label^ streetNumberBilling;
	private: System::Windows::Forms::TextBox^ tbSNF;
	private: System::Windows::Forms::Label^ streetBilling;
	private: System::Windows::Forms::TextBox^ tbPCF;
	private: System::Windows::Forms::Label^ BillingPostal;
	private: System::Windows::Forms::TextBox^ tbCNF;
	private: System::Windows::Forms::Label^ CityNameBilling;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ DateBirthPicker;
	private: System::Windows::Forms::TextBox^ tbSNumberL;
	private: System::Windows::Forms::TextBox^ tbSNL;
	private: System::Windows::Forms::TextBox^ tbPCL;
	private: System::Windows::Forms::TextBox^ tbCNL;
	private: System::Windows::Forms::Label^ StreetNumber;
	private: System::Windows::Forms::Label^ StreetName;
	private: System::Windows::Forms::Label^ CityName;
	private: System::Windows::Forms::Label^ PostalCode;
	private: System::Windows::Forms::TextBox^ tbLN;
	private: System::Windows::Forms::TextBox^ tbFN;
	private: System::Windows::Forms::Label^ LastName;
	private: System::Windows::Forms::Label^ FirstName;
	private: System::Windows::Forms::Label^ DateBirth;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbIdClient;











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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->DateOrderPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbSNumberF = (gcnew System::Windows::Forms::TextBox());
			this->streetNumberBilling = (gcnew System::Windows::Forms::Label());
			this->tbSNF = (gcnew System::Windows::Forms::TextBox());
			this->streetBilling = (gcnew System::Windows::Forms::Label());
			this->tbPCF = (gcnew System::Windows::Forms::TextBox());
			this->BillingPostal = (gcnew System::Windows::Forms::Label());
			this->tbCNF = (gcnew System::Windows::Forms::TextBox());
			this->CityNameBilling = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DateBirthPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbSNumberL = (gcnew System::Windows::Forms::TextBox());
			this->tbSNL = (gcnew System::Windows::Forms::TextBox());
			this->tbPCL = (gcnew System::Windows::Forms::TextBox());
			this->tbCNL = (gcnew System::Windows::Forms::TextBox());
			this->StreetNumber = (gcnew System::Windows::Forms::Label());
			this->StreetName = (gcnew System::Windows::Forms::Label());
			this->CityName = (gcnew System::Windows::Forms::Label());
			this->PostalCode = (gcnew System::Windows::Forms::Label());
			this->tbLN = (gcnew System::Windows::Forms::TextBox());
			this->tbFN = (gcnew System::Windows::Forms::TextBox());
			this->LastName = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->DateBirth = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbIdClient = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(469, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Update Client";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &UpdateClient::label1_Click);
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnOK->Location = System::Drawing::Point(585, 547);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(176, 47);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Confirm";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &UpdateClient::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(789, 547);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(176, 46);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateClient::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1421, 94);
			this->panel1->TabIndex = 27;
			// 
			// DateOrderPicker
			// 
			this->DateOrderPicker->Location = System::Drawing::Point(1016, 104);
			this->DateOrderPicker->Name = L"DateOrderPicker";
			this->DateOrderPicker->Size = System::Drawing::Size(406, 38);
			this->DateOrderPicker->TabIndex = 69;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(829, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 27);
			this->label5->TabIndex = 68;
			this->label5->Text = L"First Order Date";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(-17, 220);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1454, 10);
			this->panel2->TabIndex = 67;
			// 
			// tbSNumberF
			// 
			this->tbSNumberF->Location = System::Drawing::Point(960, 484);
			this->tbSNumberF->Name = L"tbSNumberF";
			this->tbSNumberF->Size = System::Drawing::Size(379, 38);
			this->tbSNumberF->TabIndex = 66;
			// 
			// streetNumberBilling
			// 
			this->streetNumberBilling->AutoSize = true;
			this->streetNumberBilling->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->streetNumberBilling->Location = System::Drawing::Point(786, 491);
			this->streetNumberBilling->Name = L"streetNumberBilling";
			this->streetNumberBilling->Size = System::Drawing::Size(168, 27);
			this->streetNumberBilling->TabIndex = 65;
			this->streetNumberBilling->Text = L"Street number";
			// 
			// tbSNF
			// 
			this->tbSNF->Location = System::Drawing::Point(960, 431);
			this->tbSNF->Name = L"tbSNF";
			this->tbSNF->Size = System::Drawing::Size(379, 38);
			this->tbSNF->TabIndex = 64;
			// 
			// streetBilling
			// 
			this->streetBilling->AutoSize = true;
			this->streetBilling->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->streetBilling->Location = System::Drawing::Point(786, 438);
			this->streetBilling->Name = L"streetBilling";
			this->streetBilling->Size = System::Drawing::Size(147, 27);
			this->streetBilling->TabIndex = 63;
			this->streetBilling->Text = L"Street name";
			// 
			// tbPCF
			// 
			this->tbPCF->Location = System::Drawing::Point(960, 372);
			this->tbPCF->Name = L"tbPCF";
			this->tbPCF->Size = System::Drawing::Size(379, 38);
			this->tbPCF->TabIndex = 62;
			// 
			// BillingPostal
			// 
			this->BillingPostal->AutoSize = true;
			this->BillingPostal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BillingPostal->Location = System::Drawing::Point(786, 379);
			this->BillingPostal->Name = L"BillingPostal";
			this->BillingPostal->Size = System::Drawing::Size(144, 27);
			this->BillingPostal->TabIndex = 61;
			this->BillingPostal->Text = L"Postal code";
			// 
			// tbCNF
			// 
			this->tbCNF->Location = System::Drawing::Point(960, 315);
			this->tbCNF->Name = L"tbCNF";
			this->tbCNF->Size = System::Drawing::Size(379, 38);
			this->tbCNF->TabIndex = 60;
			// 
			// CityNameBilling
			// 
			this->CityNameBilling->AutoSize = true;
			this->CityNameBilling->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityNameBilling->Location = System::Drawing::Point(786, 322);
			this->CityNameBilling->Name = L"CityNameBilling";
			this->CityNameBilling->Size = System::Drawing::Size(128, 27);
			this->CityNameBilling->TabIndex = 59;
			this->CityNameBilling->Text = L"City name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1009, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 37);
			this->label4->TabIndex = 58;
			this->label4->Text = L"Billing Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(307, 37);
			this->label2->TabIndex = 57;
			this->label2->Text = L"General Information";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(312, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 37);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Delivery Address";
			// 
			// DateBirthPicker
			// 
			this->DateBirthPicker->Location = System::Drawing::Point(1016, 158);
			this->DateBirthPicker->Name = L"DateBirthPicker";
			this->DateBirthPicker->Size = System::Drawing::Size(406, 38);
			this->DateBirthPicker->TabIndex = 55;
			// 
			// tbSNumberL
			// 
			this->tbSNumberL->Location = System::Drawing::Point(266, 484);
			this->tbSNumberL->Name = L"tbSNumberL";
			this->tbSNumberL->Size = System::Drawing::Size(379, 38);
			this->tbSNumberL->TabIndex = 54;
			// 
			// tbSNL
			// 
			this->tbSNL->Location = System::Drawing::Point(266, 426);
			this->tbSNL->Name = L"tbSNL";
			this->tbSNL->Size = System::Drawing::Size(379, 38);
			this->tbSNL->TabIndex = 53;
			// 
			// tbPCL
			// 
			this->tbPCL->Location = System::Drawing::Point(266, 367);
			this->tbPCL->Name = L"tbPCL";
			this->tbPCL->Size = System::Drawing::Size(379, 38);
			this->tbPCL->TabIndex = 52;
			// 
			// tbCNL
			// 
			this->tbCNL->Location = System::Drawing::Point(266, 310);
			this->tbCNL->Name = L"tbCNL";
			this->tbCNL->Size = System::Drawing::Size(379, 38);
			this->tbCNL->TabIndex = 51;
			// 
			// StreetNumber
			// 
			this->StreetNumber->AutoSize = true;
			this->StreetNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNumber->Location = System::Drawing::Point(57, 486);
			this->StreetNumber->Name = L"StreetNumber";
			this->StreetNumber->Size = System::Drawing::Size(168, 27);
			this->StreetNumber->TabIndex = 50;
			this->StreetNumber->Text = L"Street number";
			// 
			// StreetName
			// 
			this->StreetName->AutoSize = true;
			this->StreetName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetName->Location = System::Drawing::Point(57, 426);
			this->StreetName->Name = L"StreetName";
			this->StreetName->Size = System::Drawing::Size(147, 27);
			this->StreetName->TabIndex = 49;
			this->StreetName->Text = L"Street name";
			// 
			// CityName
			// 
			this->CityName->AutoSize = true;
			this->CityName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityName->Location = System::Drawing::Point(59, 309);
			this->CityName->Name = L"CityName";
			this->CityName->Size = System::Drawing::Size(128, 27);
			this->CityName->TabIndex = 48;
			this->CityName->Text = L"City name";
			// 
			// PostalCode
			// 
			this->PostalCode->AutoSize = true;
			this->PostalCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostalCode->Location = System::Drawing::Point(60, 367);
			this->PostalCode->Name = L"PostalCode";
			this->PostalCode->Size = System::Drawing::Size(144, 27);
			this->PostalCode->TabIndex = 47;
			this->PostalCode->Text = L"Postal code";
			// 
			// tbLN
			// 
			this->tbLN->Location = System::Drawing::Point(555, 158);
			this->tbLN->Name = L"tbLN";
			this->tbLN->Size = System::Drawing::Size(262, 38);
			this->tbLN->TabIndex = 46;
			// 
			// tbFN
			// 
			this->tbFN->Location = System::Drawing::Point(143, 158);
			this->tbFN->Name = L"tbFN";
			this->tbFN->Size = System::Drawing::Size(252, 38);
			this->tbFN->TabIndex = 45;
			// 
			// LastName
			// 
			this->LastName->AutoSize = true;
			this->LastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastName->Location = System::Drawing::Point(426, 165);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(126, 27);
			this->LastName->TabIndex = 44;
			this->LastName->Text = L"Last name";
			// 
			// FirstName
			// 
			this->FirstName->AutoSize = true;
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->Location = System::Drawing::Point(12, 165);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(125, 27);
			this->FirstName->TabIndex = 43;
			this->FirstName->Text = L"First name";
			// 
			// DateBirth
			// 
			this->DateBirth->AutoSize = true;
			this->DateBirth->BackColor = System::Drawing::Color::Transparent;
			this->DateBirth->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateBirth->Location = System::Drawing::Point(830, 165);
			this->DateBirth->Name = L"DateBirth";
			this->DateBirth->Size = System::Drawing::Size(145, 27);
			this->DateBirth->TabIndex = 42;
			this->DateBirth->Text = L"Date of Birth";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 27);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Id Client";
			// 
			// tbIdClient
			// 
			this->tbIdClient->Location = System::Drawing::Point(143, 106);
			this->tbIdClient->Name = L"tbIdClient";
			this->tbIdClient->Size = System::Drawing::Size(252, 38);
			this->tbIdClient->TabIndex = 71;
			// 
			// UpdateClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1421, 624);
			this->Controls->Add(this->tbIdClient);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DateOrderPicker);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tbSNumberF);
			this->Controls->Add(this->streetNumberBilling);
			this->Controls->Add(this->tbSNF);
			this->Controls->Add(this->streetBilling);
			this->Controls->Add(this->tbPCF);
			this->Controls->Add(this->BillingPostal);
			this->Controls->Add(this->tbCNF);
			this->Controls->Add(this->CityNameBilling);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DateBirthPicker);
			this->Controls->Add(this->tbSNumberL);
			this->Controls->Add(this->tbSNL);
			this->Controls->Add(this->tbPCL);
			this->Controls->Add(this->tbCNL);
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
			this->Name = L"UpdateClient";
			this->Text = L"UpdateClient";
			this->Load += gcnew System::EventHandler(this, &UpdateClient::UpdateClient_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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


		if (DateBirthPicker->Text->Length == 0 || DateOrderPicker->Text->Length == 0 || tbFN->Text->Length == 0 || tbLN->Text->Length == 0 || tbCNL->Text->Length == 0 || tbPCL->Text->Length == 0 || tbSNL->Text->Length == 0 ||
			tbSNumberL->Text->Length == 0 || tbCNF->Text->Length == 0 || tbPCF->Text->Length == 0 || tbSNF->Text->Length == 0 ||
			tbSNumberF->Text->Length == 0) {

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
				CLClients^ client = gcnew CLClients;
				client->setbirth_date(this->DateBirthPicker->Value.ToString("yyyy-MM-dd"));
				client->setdate_first_order(this->DateOrderPicker->Value.ToString("yyyy-MM-dd"));


				// CLasse "Address" Livraison
				CLAddress^ address_client_delivery = gcnew CLAddress;
				address_client_delivery->setcity(this->tbCNL->Text);

				int postal_value_delivery;
				if (Int32::TryParse(this->tbPCL->Text, postal_value_delivery)) {
					address_client_delivery->setpostal(postal_value_delivery);

				};
				address_client_delivery->setstreet(this->tbSNL->Text);

				int street_number_value_delivery;
				if (Int32::TryParse(this->tbSNumberL->Text, street_number_value_delivery)) {
					address_client_delivery->setstreet_number(street_number_value_delivery);
				};



				client->setdelivery_address(address_client_delivery);

				// CLasse "Address" Facturation
				CLAddress^ address_client_billing = gcnew CLAddress;
				address_client_billing->setcity(this->tbCNF->Text);

				int postal_value_billing;
				if (Int32::TryParse(this->tbPCF->Text, postal_value_billing)) {
					address_client_billing->setpostal(postal_value_billing);

				};
				address_client_billing->setstreet(this->tbSNF->Text);

				int street_number_value_billing;
				if (Int32::TryParse(this->tbSNumberF->Text, street_number_value_billing)) {
					address_client_billing->setstreet_number(street_number_value_billing);
				};



				client->setbilling_address(address_client_billing);

				// Récupérer l'ID du client à mettre à jour depuis l'interface graphique
				int clientId;

				if (Int32::TryParse(this->tbIdClient->Text, clientId)) {

					// Récupérer les ID des adresses de livraison et de facturation liées à ce client
					String^ getAddressIdsQuery =
						"SELECT CLIENT.ID_DELIVERY, CLIENT.ID_BILLING, DELIVERY_ADDRESS.ID_ADDRESS AS DELIVERY_ID_ADDRESS, BILLING_ADDRESS.ID_ADDRESS AS BILLING_ID_ADDRESS "
						"FROM CLIENT "
						"INNER JOIN DELIVERY_ADDRESS ON CLIENT.ID_DELIVERY = DELIVERY_ADDRESS.ID_DELIVERY "
						"INNER JOIN BILLING_ADDRESS ON CLIENT.ID_BILLING = BILLING_ADDRESS.ID_BILLING "
						"WHERE CLIENT.ID_CLIENT = @ID_CLIENT;";

					SqlCommand^ commandGetAddressIds = gcnew SqlCommand(getAddressIdsQuery, % sqlConn, sqlTran);
					commandGetAddressIds->Parameters->AddWithValue("@ID_CLIENT", clientId);

					SqlDataReader^ reader = commandGetAddressIds->ExecuteReader();

					int deliveryAddressId, billingAddressId;

					if (reader->Read()) {
						deliveryAddressId = Convert::ToInt32(reader["ID_DELIVERY"]);
						billingAddressId = Convert::ToInt32(reader["ID_BILLING"]);
					}
					else {
						MessageBox::Show("ID_CLIENT not found in the CLIENT table.", "Error", MessageBoxButtons::OK);
						return;
					}

					reader->Close();

					

					// Mettre à jour les informations dans la table PERSON
					String^ updatePersonQuery =
						"UPDATE PERSON SET FIRST_NAME = @FIRST_NAME, LAST_NAME = @LAST_NAME WHERE ID_PERSON = (SELECT ID_PERSON FROM CLIENT WHERE ID_CLIENT = @ID_CLIENT);";

					SqlCommand^ commandUpdatePerson = gcnew SqlCommand(updatePersonQuery, % sqlConn, sqlTran);
					commandUpdatePerson->Parameters->AddWithValue("@FIRST_NAME", this->tbFN->Text);
					commandUpdatePerson->Parameters->AddWithValue("@LAST_NAME", this->tbLN->Text);
					commandUpdatePerson->Parameters->AddWithValue("@ID_CLIENT", clientId);
					commandUpdatePerson->ExecuteNonQuery();

					// Mettre à jour les informations dans la table CLIENT
					String^ updateClientQuery =
						"UPDATE CLIENT SET BIRTH_DATE = @BIRTH_DATE, FIRST_ORDER_DATE = @FIRST_ORDER_DATE WHERE ID_CLIENT = @ID_CLIENT;";

					SqlCommand^ commandUpdateClient = gcnew SqlCommand(updateClientQuery, % sqlConn, sqlTran);
					commandUpdateClient->Parameters->AddWithValue("@BIRTH_DATE", this->DateBirthPicker->Value.ToString("yyyy-MM-dd"));
					commandUpdateClient->Parameters->AddWithValue("@FIRST_ORDER_DATE", this->DateOrderPicker->Value.ToString("yyyy-MM-dd"));
					commandUpdateClient->Parameters->AddWithValue("@ID_CLIENT", clientId);
					commandUpdateClient->ExecuteNonQuery();


					// Mettre à jour les informations de la table ADDRESS pour l'adresse de livraison
					String^ updateDeliveryAddressQuery =
						"UPDATE ADDRESS SET STREET_NAME = @STREET_NAME, STREET_NUMBER = @STREET_NUMBER WHERE ID_ADDRESS = (SELECT ID_ADDRESS FROM DELIVERY_ADDRESS WHERE ID_DELIVERY = @ID_DELIVERY);";

					SqlCommand^ commandUpdateDeliveryAddress = gcnew SqlCommand(updateDeliveryAddressQuery, % sqlConn, sqlTran);
					commandUpdateDeliveryAddress->Parameters->AddWithValue("@STREET_NAME", this->tbSNL->Text);
					commandUpdateDeliveryAddress->Parameters->AddWithValue("@STREET_NUMBER", Convert::ToInt32(this->tbSNumberL->Text));
					commandUpdateDeliveryAddress->Parameters->AddWithValue("@ID_DELIVERY", deliveryAddressId);
					commandUpdateDeliveryAddress->ExecuteNonQuery();

					// Mettre à jour les informations dans la table CITY pour l'adresse de livraison
					String^ updateDeliveryCityQuery =
						"UPDATE CITY SET POSTAL_CODE = @POSTAL_CODE, CITY_NAME = @CITY_NAME WHERE ID_CITY = (SELECT ID_CITY FROM ADDRESS WHERE ID_ADDRESS = (SELECT ID_ADDRESS FROM DELIVERY_ADDRESS WHERE ID_DELIVERY = @ID_DELIVERY));";

					SqlCommand^ commandUpdateDeliveryCity = gcnew SqlCommand(updateDeliveryCityQuery, % sqlConn, sqlTran);
					commandUpdateDeliveryCity->Parameters->AddWithValue("@POSTAL_CODE", this->tbPCL->Text);
					commandUpdateDeliveryCity->Parameters->AddWithValue("@CITY_NAME", this->tbCNL->Text);
					commandUpdateDeliveryCity->Parameters->AddWithValue("@ID_DELIVERY", deliveryAddressId);
					commandUpdateDeliveryCity->ExecuteNonQuery();

					// Mettre à jour les informations de la table ADDRESS pour l'adresse de facturation
					String^ updateBillingAddressQuery =
						"UPDATE ADDRESS SET STREET_NAME = @STREET_NAME, STREET_NUMBER = @STREET_NUMBER WHERE ID_ADDRESS = (SELECT ID_ADDRESS FROM BILLING_ADDRESS WHERE ID_BILLING = @ID_BILLING);";

					SqlCommand^ commandUpdateBillingAddress = gcnew SqlCommand(updateBillingAddressQuery, % sqlConn, sqlTran);
					commandUpdateBillingAddress->Parameters->AddWithValue("@STREET_NAME", this->tbSNF->Text);
					commandUpdateBillingAddress->Parameters->AddWithValue("@STREET_NUMBER", Convert::ToInt32(this->tbSNumberF->Text));
					commandUpdateBillingAddress->Parameters->AddWithValue("@ID_BILLING", billingAddressId);
					commandUpdateBillingAddress->ExecuteNonQuery();

					// Mettre à jour les informations dans la table CITY pour l'adresse de facturation
					String^ updateBillingCityQuery =
						"UPDATE CITY SET POSTAL_CODE = @POSTAL_CODE, CITY_NAME = @CITY_NAME WHERE ID_CITY = (SELECT ID_CITY FROM ADDRESS WHERE ID_ADDRESS = (SELECT ID_ADDRESS FROM BILLING_ADDRESS WHERE ID_BILLING = @ID_BILLING));";

					SqlCommand^ commandUpdateBillingCity = gcnew SqlCommand(updateBillingCityQuery, % sqlConn, sqlTran);
					commandUpdateBillingCity->Parameters->AddWithValue("@POSTAL_CODE", this->tbPCF->Text);
					commandUpdateBillingCity->Parameters->AddWithValue("@CITY_NAME", this->tbCNF->Text);
					commandUpdateBillingCity->Parameters->AddWithValue("@ID_BILLING", billingAddressId);
					commandUpdateBillingCity->ExecuteNonQuery();

					// Valider la transaction
					sqlTran->Commit();

					MessageBox::Show("Successful data update!", "Success", MessageBoxButtons::OK);
				}
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
	private: System::Void UpdateClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
