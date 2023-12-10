#pragma once
#include "pch.h"
#include "CLStock.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de InsertStock
	/// </summary>
	public ref class InsertStock : public System::Windows::Forms::Form
	{
	public:
		InsertStock(void)
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
		~InsertStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Reorder;

	private: System::Windows::Forms::TextBox^ tbSQ;
	private: System::Windows::Forms::Label^ StockName;



	private: System::Windows::Forms::TextBox^ tbRT;



	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ PriceName;
	private: System::Windows::Forms::Label^ TVAName;
	private: System::Windows::Forms::TextBox^ tbPE;
	private: System::Windows::Forms::TextBox^ tbTVA;



	private: System::Windows::Forms::Label^ ArticleName;
	private: System::Windows::Forms::TextBox^ tbAN;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			this->Reorder = (gcnew System::Windows::Forms::Label());
			this->tbSQ = (gcnew System::Windows::Forms::TextBox());
			this->StockName = (gcnew System::Windows::Forms::Label());
			this->tbRT = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->PriceName = (gcnew System::Windows::Forms::Label());
			this->TVAName = (gcnew System::Windows::Forms::Label());
			this->tbPE = (gcnew System::Windows::Forms::TextBox());
			this->tbTVA = (gcnew System::Windows::Forms::TextBox());
			this->ArticleName = (gcnew System::Windows::Forms::Label());
			this->tbAN = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(232, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Article";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &InsertStock::label1_Click);
			// 
			// Reorder
			// 
			this->Reorder->AutoSize = true;
			this->Reorder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->Reorder->Location = System::Drawing::Point(132, 384);
			this->Reorder->Name = L"Reorder";
			this->Reorder->Size = System::Drawing::Size(257, 34);
			this->Reorder->TabIndex = 1;
			this->Reorder->Text = L"Reorder Threshold";
			this->Reorder->Click += gcnew System::EventHandler(this, &InsertStock::label2_Click);
			// 
			// tbSQ
			// 
			this->tbSQ->Location = System::Drawing::Point(486, 203);
			this->tbSQ->Name = L"tbSQ";
			this->tbSQ->Size = System::Drawing::Size(379, 38);
			this->tbSQ->TabIndex = 2;
			// 
			// StockName
			// 
			this->StockName->AutoSize = true;
			this->StockName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->StockName->Location = System::Drawing::Point(132, 206);
			this->StockName->Name = L"StockName";
			this->StockName->Size = System::Drawing::Size(213, 34);
			this->StockName->TabIndex = 3;
			this->StockName->Text = L"Stock Quantity";
			// 
			// tbRT
			// 
			this->tbRT->Location = System::Drawing::Point(486, 381);
			this->tbRT->Name = L"tbRT";
			this->tbRT->Size = System::Drawing::Size(379, 38);
			this->tbRT->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatAppearance->BorderSize = 0;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnOK->Location = System::Drawing::Point(267, 478);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 47);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Confirm";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &InsertStock::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(560, 478);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 46);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &InsertStock::button2_Click);
			// 
			// PriceName
			// 
			this->PriceName->AutoSize = true;
			this->PriceName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->PriceName->Location = System::Drawing::Point(132, 269);
			this->PriceName->Name = L"PriceName";
			this->PriceName->Size = System::Drawing::Size(209, 34);
			this->PriceName->TabIndex = 9;
			this->PriceName->Text = L"Price Excl. Tax";
			this->PriceName->Click += gcnew System::EventHandler(this, &InsertStock::label5_Click);
			// 
			// TVAName
			// 
			this->TVAName->AutoSize = true;
			this->TVAName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->TVAName->Location = System::Drawing::Point(132, 328);
			this->TVAName->Name = L"TVAName";
			this->TVAName->Size = System::Drawing::Size(92, 34);
			this->TVAName->TabIndex = 10;
			this->TVAName->Text = L"TVA%";
			// 
			// tbPE
			// 
			this->tbPE->Location = System::Drawing::Point(486, 265);
			this->tbPE->Name = L"tbPE";
			this->tbPE->Size = System::Drawing::Size(379, 38);
			this->tbPE->TabIndex = 11;
			// 
			// tbTVA
			// 
			this->tbTVA->Location = System::Drawing::Point(486, 324);
			this->tbTVA->Name = L"tbTVA";
			this->tbTVA->Size = System::Drawing::Size(379, 38);
			this->tbTVA->TabIndex = 12;
			// 
			// ArticleName
			// 
			this->ArticleName->AutoSize = true;
			this->ArticleName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->ArticleName->Location = System::Drawing::Point(132, 148);
			this->ArticleName->Name = L"ArticleName";
			this->ArticleName->Size = System::Drawing::Size(194, 34);
			this->ArticleName->TabIndex = 14;
			this->ArticleName->Text = L"Article Name";
			this->ArticleName->Click += gcnew System::EventHandler(this, &InsertStock::label8_Click);
			// 
			// tbAN
			// 
			this->tbAN->Location = System::Drawing::Point(486, 144);
			this->tbAN->Name = L"tbAN";
			this->tbAN->Size = System::Drawing::Size(379, 38);
			this->tbAN->TabIndex = 17;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1010, 82);
			this->panel1->TabIndex = 29;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InsertStock::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183389782043267174/log"
				L"o2.png\?ex=6588289e&is=6575b39e&hm=cb50d5a6c20698a4dc71c533fd57f5dd298b78d4adee25"
				L"e3df2911f505ec7dd0&";
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(138, 78);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &InsertStock::pictureBox1_Click);
			// 
			// InsertStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1010, 574);
			this->Controls->Add(this->tbAN);
			this->Controls->Add(this->ArticleName);
			this->Controls->Add(this->tbTVA);
			this->Controls->Add(this->tbPE);
			this->Controls->Add(this->TVAName);
			this->Controls->Add(this->PriceName);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbRT);
			this->Controls->Add(this->StockName);
			this->Controls->Add(this->tbSQ);
			this->Controls->Add(this->Reorder);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"InsertStock";
			this->Text = L"InsertStock";
			this->Load += gcnew System::EventHandler(this, &InsertStock::InsertStock_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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


		if (tbAN->Text->Length == 0 || tbSQ->Text->Length == 0 || tbPE->Text->Length == 0 || tbTVA->Text->Length == 0 || tbRT->Text->Length == 0) {
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
				// CLasse "Stock"
				CLStock^ stock = gcnew CLStock;
				stock->setarticle_name(this->tbAN->Text);

				int quantity;
				if (Int32::TryParse(this->tbSQ->Text, quantity)) {
					stock->setquantity(quantity);
				};

				int price_ht;
				if (Int32::TryParse(this->tbPE->Text, price_ht)) {
					stock->setprice(price_ht);
				};

				int tva;
				if (Int32::TryParse(this->tbTVA->Text, tva)) {
					stock->setTVA(tva);
				};

				int reorder;
				if (Int32::TryParse(this->tbRT->Text, reorder)) {
					stock->setreorder_treshold(reorder);
				};


				//stock->setstaff_address(address_staff);

				// Table "Stock"
				String^ stockQuery =
					"INSERT INTO ARTICLE (PRODUCT_NAME, PRICE_HT, RATE_TVA, STOCK_QUANTITY, REORDER_THRESHOLD) VALUES (@PRODUCT_NAME, @PRICE_HT, @RATE_TVA, @STOCK_QUANTITY, @REORDER_THRESHOLD); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandStock = gcnew SqlCommand(stockQuery, % sqlConn, sqlTran);
				commandStock->Parameters->AddWithValue("@PRODUCT_NAME", stock->getarticle_name());
				commandStock->Parameters->AddWithValue("@STOCK_QUANTITY", stock->getquantity());
				commandStock->Parameters->AddWithValue("@PRICE_HT", stock->getprice());
				commandStock->Parameters->AddWithValue("@RATE_TVA", stock->getTVA());
				commandStock->Parameters->AddWithValue("@REORDER_THRESHOLD", stock->getreorder_treshold());


				commandStock->ExecuteNonQuery();
				sqlTran->Commit();

				MessageBox::Show("Transfert de données réussi !", "Succès", MessageBoxButtons::OK);
			}

			catch (Exception^ ex) {
				sqlTran->Rollback();
				MessageBox::Show("Failed to register new article: " + ex->Message, "Register failure", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to the database: " + ex->Message, "Database connection failure", MessageBoxButtons::OK);

		}


	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InsertStock_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
