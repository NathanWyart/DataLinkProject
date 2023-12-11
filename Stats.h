#pragma once
#include "pch.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ BasketAverage;
	private: System::Windows::Forms::Button^ btBA;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ turnover;
	private: System::Windows::Forms::Button^ btT;
	private: System::Windows::Forms::Label^ resultLabel2;
	private: System::Windows::Forms::Label^ undertreshold;
	private: System::Windows::Forms::Button^ btUT;
	private: System::Windows::Forms::Label^ resultLabel3;
	private: System::Windows::Forms::Label^ BestSeller;
	private: System::Windows::Forms::Button^ btBS;
	private: System::Windows::Forms::Label^ resultLabel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btLS;
	private: System::Windows::Forms::Label^ resultLabel5;
	private: System::Windows::Forms::Label^ CommercialPurchase;
	private: System::Windows::Forms::Label^ PurchaseValue;
	private: System::Windows::Forms::Button^ btCV;
	private: System::Windows::Forms::Button^ btPV;
	private: System::Windows::Forms::Label^ resultLabel6;
	private: System::Windows::Forms::Label^ resultLabel7;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BasketAverage = (gcnew System::Windows::Forms::Label());
			this->btBA = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->turnover = (gcnew System::Windows::Forms::Label());
			this->btT = (gcnew System::Windows::Forms::Button());
			this->resultLabel2 = (gcnew System::Windows::Forms::Label());
			this->undertreshold = (gcnew System::Windows::Forms::Label());
			this->btUT = (gcnew System::Windows::Forms::Button());
			this->resultLabel3 = (gcnew System::Windows::Forms::Label());
			this->BestSeller = (gcnew System::Windows::Forms::Label());
			this->btBS = (gcnew System::Windows::Forms::Button());
			this->resultLabel4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btLS = (gcnew System::Windows::Forms::Button());
			this->resultLabel5 = (gcnew System::Windows::Forms::Label());
			this->CommercialPurchase = (gcnew System::Windows::Forms::Label());
			this->PurchaseValue = (gcnew System::Windows::Forms::Label());
			this->btCV = (gcnew System::Windows::Forms::Button());
			this->btPV = (gcnew System::Windows::Forms::Button());
			this->resultLabel6 = (gcnew System::Windows::Forms::Label());
			this->resultLabel7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183389782043267174/log"
				L"o2.png\?ex=6588289e&is=6575b39e&hm=cb50d5a6c20698a4dc71c533fd57f5dd298b78d4adee25"
				L"e3df2911f505ec7dd0&";
			this->pictureBox1->Location = System::Drawing::Point(4, 4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 85);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(327, 4);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(720, 89);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Statistics";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(539, 624);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(229, 57);
			this->btnCancel->TabIndex = 30;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Stats::btnCancel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1332, 100);
			this->panel1->TabIndex = 32;
			// 
			// BasketAverage
			// 
			this->BasketAverage->AutoSize = true;
			this->BasketAverage->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->BasketAverage->Location = System::Drawing::Point(76, 160);
			this->BasketAverage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->BasketAverage->Name = L"BasketAverage";
			this->BasketAverage->Size = System::Drawing::Size(229, 34);
			this->BasketAverage->TabIndex = 33;
			this->BasketAverage->Text = L"Basket Average";
			// 
			// btBA
			// 
			this->btBA->BackColor = System::Drawing::Color::LawnGreen;
			this->btBA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btBA->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBA->Location = System::Drawing::Point(71, 208);
			this->btBA->Margin = System::Windows::Forms::Padding(4);
			this->btBA->Name = L"btBA";
			this->btBA->Size = System::Drawing::Size(255, 64);
			this->btBA->TabIndex = 34;
			this->btBA->Text = L"Calculate";
			this->btBA->UseVisualStyleBackColor = false;
			this->btBA->Click += gcnew System::EventHandler(this, &Stats::btBA_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel->Location = System::Drawing::Point(71, 290);
			this->resultLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(254, 49);
			this->resultLabel->TabIndex = 35;
			this->resultLabel->Click += gcnew System::EventHandler(this, &Stats::resultLabel_Click);
			// 
			// turnover
			// 
			this->turnover->AutoSize = true;
			this->turnover->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->turnover->Location = System::Drawing::Point(1072, 272);
			this->turnover->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->turnover->Name = L"turnover";
			this->turnover->Size = System::Drawing::Size(131, 34);
			this->turnover->TabIndex = 36;
			this->turnover->Text = L"Turnover";
			// 
			// btT
			// 
			this->btT->BackColor = System::Drawing::Color::LawnGreen;
			this->btT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold));
			this->btT->Location = System::Drawing::Point(1012, 320);
			this->btT->Margin = System::Windows::Forms::Padding(4);
			this->btT->Name = L"btT";
			this->btT->Size = System::Drawing::Size(256, 64);
			this->btT->TabIndex = 37;
			this->btT->Text = L"Calculate";
			this->btT->UseVisualStyleBackColor = false;
			this->btT->Click += gcnew System::EventHandler(this, &Stats::btT_Click);
			// 
			// resultLabel2
			// 
			this->resultLabel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel2->Location = System::Drawing::Point(1012, 402);
			this->resultLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel2->Name = L"resultLabel2";
			this->resultLabel2->Size = System::Drawing::Size(255, 49);
			this->resultLabel2->TabIndex = 38;
			this->resultLabel2->Click += gcnew System::EventHandler(this, &Stats::resultLabel2_Click);
			// 
			// undertreshold
			// 
			this->undertreshold->AutoSize = true;
			this->undertreshold->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->undertreshold->Location = System::Drawing::Point(83, 391);
			this->undertreshold->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->undertreshold->Name = L"undertreshold";
			this->undertreshold->Size = System::Drawing::Size(214, 34);
			this->undertreshold->TabIndex = 39;
			this->undertreshold->Text = L"Under Treshold";
			// 
			// btUT
			// 
			this->btUT->BackColor = System::Drawing::Color::LawnGreen;
			this->btUT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btUT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold));
			this->btUT->Location = System::Drawing::Point(71, 441);
			this->btUT->Margin = System::Windows::Forms::Padding(4);
			this->btUT->Name = L"btUT";
			this->btUT->Size = System::Drawing::Size(249, 64);
			this->btUT->TabIndex = 40;
			this->btUT->Text = L"Calculate";
			this->btUT->UseVisualStyleBackColor = false;
			this->btUT->Click += gcnew System::EventHandler(this, &Stats::btUT_Click);
			// 
			// resultLabel3
			// 
			this->resultLabel3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel3->Location = System::Drawing::Point(71, 523);
			this->resultLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel3->Name = L"resultLabel3";
			this->resultLabel3->Size = System::Drawing::Size(249, 49);
			this->resultLabel3->TabIndex = 41;
			this->resultLabel3->Click += gcnew System::EventHandler(this, &Stats::resultLabel3_Click);
			// 
			// BestSeller
			// 
			this->BestSeller->AutoSize = true;
			this->BestSeller->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->BestSeller->Location = System::Drawing::Point(431, 160);
			this->BestSeller->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->BestSeller->Name = L"BestSeller";
			this->BestSeller->Size = System::Drawing::Size(151, 34);
			this->BestSeller->TabIndex = 42;
			this->BestSeller->Text = L"Best Seller";
			// 
			// btBS
			// 
			this->btBS->BackColor = System::Drawing::Color::LawnGreen;
			this->btBS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btBS->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBS->Location = System::Drawing::Point(387, 208);
			this->btBS->Margin = System::Windows::Forms::Padding(4);
			this->btBS->Name = L"btBS";
			this->btBS->Size = System::Drawing::Size(249, 64);
			this->btBS->TabIndex = 43;
			this->btBS->Text = L"Calculate";
			this->btBS->UseVisualStyleBackColor = false;
			this->btBS->Click += gcnew System::EventHandler(this, &Stats::btBS_Click);
			// 
			// resultLabel4
			// 
			this->resultLabel4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel4->Location = System::Drawing::Point(387, 290);
			this->resultLabel4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel4->Name = L"resultLabel4";
			this->resultLabel4->Size = System::Drawing::Size(249, 49);
			this->resultLabel4->TabIndex = 44;
			this->resultLabel4->Click += gcnew System::EventHandler(this, &Stats::resultLabel4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(437, 393);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 34);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Less Seller";
			// 
			// btLS
			// 
			this->btLS->BackColor = System::Drawing::Color::LawnGreen;
			this->btLS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btLS->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold));
			this->btLS->Location = System::Drawing::Point(387, 441);
			this->btLS->Margin = System::Windows::Forms::Padding(4);
			this->btLS->Name = L"btLS";
			this->btLS->Size = System::Drawing::Size(252, 64);
			this->btLS->TabIndex = 46;
			this->btLS->Text = L"Calculate";
			this->btLS->UseVisualStyleBackColor = false;
			this->btLS->Click += gcnew System::EventHandler(this, &Stats::btLS_Click);
			// 
			// resultLabel5
			// 
			this->resultLabel5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel5->Location = System::Drawing::Point(387, 523);
			this->resultLabel5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel5->Name = L"resultLabel5";
			this->resultLabel5->Size = System::Drawing::Size(251, 49);
			this->resultLabel5->TabIndex = 47;
			this->resultLabel5->Click += gcnew System::EventHandler(this, &Stats::resultLabel5_Click);
			// 
			// CommercialPurchase
			// 
			this->CommercialPurchase->AutoSize = true;
			this->CommercialPurchase->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->CommercialPurchase->Location = System::Drawing::Point(692, 391);
			this->CommercialPurchase->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CommercialPurchase->Name = L"CommercialPurchase";
			this->CommercialPurchase->Size = System::Drawing::Size(272, 34);
			this->CommercialPurchase->TabIndex = 48;
			this->CommercialPurchase->Text = L"Commercial Value";
			// 
			// PurchaseValue
			// 
			this->PurchaseValue->AutoSize = true;
			this->PurchaseValue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->PurchaseValue->Location = System::Drawing::Point(717, 158);
			this->PurchaseValue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PurchaseValue->Name = L"PurchaseValue";
			this->PurchaseValue->Size = System::Drawing::Size(228, 34);
			this->PurchaseValue->TabIndex = 49;
			this->PurchaseValue->Text = L"Purchase Value";
			// 
			// btCV
			// 
			this->btCV->BackColor = System::Drawing::Color::LawnGreen;
			this->btCV->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btCV->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold));
			this->btCV->Location = System::Drawing::Point(705, 441);
			this->btCV->Margin = System::Windows::Forms::Padding(4);
			this->btCV->Name = L"btCV";
			this->btCV->Size = System::Drawing::Size(249, 64);
			this->btCV->TabIndex = 50;
			this->btCV->Text = L"Calculate";
			this->btCV->UseVisualStyleBackColor = false;
			this->btCV->Click += gcnew System::EventHandler(this, &Stats::btCV_Click);
			// 
			// btPV
			// 
			this->btPV->BackColor = System::Drawing::Color::LawnGreen;
			this->btPV->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btPV->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold));
			this->btPV->Location = System::Drawing::Point(705, 208);
			this->btPV->Margin = System::Windows::Forms::Padding(4);
			this->btPV->Name = L"btPV";
			this->btPV->Size = System::Drawing::Size(249, 64);
			this->btPV->TabIndex = 51;
			this->btPV->Text = L"Calculate";
			this->btPV->UseVisualStyleBackColor = false;
			this->btPV->Click += gcnew System::EventHandler(this, &Stats::btPV_Click);
			// 
			// resultLabel6
			// 
			this->resultLabel6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel6->Location = System::Drawing::Point(705, 523);
			this->resultLabel6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel6->Name = L"resultLabel6";
			this->resultLabel6->Size = System::Drawing::Size(249, 49);
			this->resultLabel6->TabIndex = 52;
			this->resultLabel6->Click += gcnew System::EventHandler(this, &Stats::resultLabel6_Click);
			// 
			// resultLabel7
			// 
			this->resultLabel7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->resultLabel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultLabel7->Location = System::Drawing::Point(703, 290);
			this->resultLabel7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel7->Name = L"resultLabel7";
			this->resultLabel7->Size = System::Drawing::Size(252, 49);
			this->resultLabel7->TabIndex = 53;
			this->resultLabel7->Click += gcnew System::EventHandler(this, &Stats::resultLabel7_Click);
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1332, 724);
			this->Controls->Add(this->resultLabel7);
			this->Controls->Add(this->resultLabel6);
			this->Controls->Add(this->btPV);
			this->Controls->Add(this->btCV);
			this->Controls->Add(this->PurchaseValue);
			this->Controls->Add(this->CommercialPurchase);
			this->Controls->Add(this->resultLabel5);
			this->Controls->Add(this->btLS);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->resultLabel4);
			this->Controls->Add(this->btBS);
			this->Controls->Add(this->BestSeller);
			this->Controls->Add(this->resultLabel3);
			this->Controls->Add(this->btUT);
			this->Controls->Add(this->undertreshold);
			this->Controls->Add(this->resultLabel2);
			this->Controls->Add(this->btT);
			this->Controls->Add(this->turnover);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->btBA);
			this->Controls->Add(this->BasketAverage);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stats";
			this->Text = L"Stats";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btBA_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ avgBasketQuery =
				"SELECT AVG(tot_TTC) AS moy_basket FROM ORDERS; ";

			SqlCommand^ commandavgBasket = gcnew SqlCommand(avgBasketQuery, % sqlConn);
			SqlDataReader^ reader = commandavgBasket->ExecuteReader();

			if (reader->Read()) {
				double moy_basket = Convert::ToDouble(reader["moy_basket"]);
				resultLabel->Text = "The average basket is : " + moy_basket.ToString() + " $";
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Result is : " + ex->Message);
		};
	};




	private: System::Void btT_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source = localhost\\ ; Initial Catalog=datalink; Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ turnoverQuery =
				"SELECT SUM(tot_TTC) AS turnover FROM [dbo].[Order]; ";

			SqlCommand^ commandturnover = gcnew SqlCommand(turnoverQuery, % sqlConn);
			SqlDataReader^ reader = commandturnover->ExecuteReader();

			if (reader->Read()) {
				double turnover = Convert::ToDouble(reader["turnover"]);
				resultLabel2->Text = "The turnover is : " + turnover.ToString() + " $";
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Result is : " + ex->Message);
		};
	}

	private: System::Void btUT_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ undertresholdQuery =
				"SELECT ID_ARTICLE FROM [dbo].[ARTICLE] WHERE (STOCK_QUANTITY < REORDER_TRESHOLD); ";

			SqlCommand^ commandundertreshold = gcnew SqlCommand(undertresholdQuery, % sqlConn);
			SqlDataReader^ reader = commandundertreshold->ExecuteReader();

			String^ resultText = "Items below restocking threshold : ";

			while (reader->Read()) {
				int undertreshold = Convert::ToInt32(reader["ID_ARTICLE"]);
				resultText += "article : " + undertreshold.ToString() + ", ";
			}

			if (resultText != "Items below restocking threshold : ") {
				resultText = resultText->Remove(resultText->Length - 2);
				resultLabel3->Text = resultText;
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		};
	}

	private: System::Void btBS_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ best_sellQuery =
				"SELECT TOP 1 PRODUCT_NAME, SUM(QUANTITY) AS best_sell FROM [datalink].[dbo].[CONTAIN] GROUP BY PRODUCT_NAME ORDER BY best_sell DESC";

			SqlCommand^ commandbest_sell = gcnew SqlCommand(best_sellQuery, % sqlConn);
			SqlDataReader^ reader = commandbest_sell->ExecuteReader();

			String^ resultText = "The best-selling item is : ";

			while (reader->Read()) {
				String^ best_sell = reader["PRODUCT_NAME"]->ToString();
				resultText += best_sell + ", ";
			}

			if (resultText != "The best-selling item is : ") {
				resultText = resultText->Remove(resultText->Length - 2);
				resultLabel4->Text = resultText;
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		};
	}

	private: System::Void btLS_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ less_sellQuery =
				"SELECT TOP 1 PRODUCT_NAME, SUM(QUANTITY) AS less_sell FROM [datalink].[dbo].[CONTAIN] GROUP BY PRODUCT_NAME ORDER BY less_sell ASC";

			SqlCommand^ commandless_sell = gcnew SqlCommand(less_sellQuery, % sqlConn);
			SqlDataReader^ reader = commandless_sell->ExecuteReader();

			String^ resultText = "The less-selling item is : ";

			while (reader->Read()) {
				String^ less_sell = reader["PRODUCT_NAME"]->ToString();
				resultText += less_sell + ", ";
			}

			if (resultText != "The less-selling item is : ") {
				resultText = resultText->Remove(resultText->Length - 2);
				resultLabel5->Text = resultText;
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		};
	}

	private: System::Void btCV_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ commercialvalueQuery =
				"SELECT SUM(STOCK_QUANTITY * (PRICE_HT + PRICE_HT * RATE_TVA / 100)) AS commercialvalue FROM ARTICLE;";

			SqlCommand^ commandcommercialvalue = gcnew SqlCommand(commercialvalueQuery, % sqlConn);
			SqlDataReader^ reader = commandcommercialvalue->ExecuteReader();

			if (reader->Read()) {
				double commercialvalue = Convert::ToDouble(reader["commercialvalue"]);
				resultLabel6->Text = "The Commercial Value is : " + commercialvalue.ToString() + " $";
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		};

	}

	private: System::Void btPV_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ purchasevalueQuery =
				"SELECT SUM(STOCK_QUANTITY * PRICE_HT) AS purchasevalue FROM ARTICLE;";

			SqlCommand^ commandpurchasevalue = gcnew SqlCommand(purchasevalueQuery, % sqlConn);
			SqlDataReader^ reader = commandpurchasevalue->ExecuteReader();

			if (reader->Read()) {
				double purchasevalue = Convert::ToDouble(reader["purchasevalue"]);
				resultLabel7->Text = "The Purchase Value is : " + purchasevalue.ToString() + " $";
			}
			else {
				MessageBox::Show("Aucun résultat trouvé.");
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur : " + ex->Message);
		};

	}


	private: System::Void resultLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resultLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resultLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resultLabel4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resultLabel5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resultLabel6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resultLabel7_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
