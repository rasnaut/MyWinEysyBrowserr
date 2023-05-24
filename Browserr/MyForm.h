#pragma once
#include <vector>
namespace Browserr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		System::Collections::Generic::List<String^>^ history;
		int actualIndex = 0;
	public:
		MyForm(void)
		{
			history = (gcnew System::Collections::Generic::List<String^>());
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnGo;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnForward;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnForward = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Address";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(197, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(476, 22);
			this->textBox1->TabIndex = 1;
			// 
			// btnGo
			// 
			this->btnGo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnGo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnGo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnGo->Location = System::Drawing::Point(690, 9);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(68, 25);
			this->btnGo->TabIndex = 3;
			this->btnGo->Text = L"Go";
			this->btnGo->UseCompatibleTextRendering = true;
			this->btnGo->UseVisualStyleBackColor = false;
			this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::btnGo_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(17, 39);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(742, 404);
			this->webBrowser1->TabIndex = 4;
			this->webBrowser1->Navigated += gcnew System::Windows::Forms::WebBrowserNavigatedEventHandler(this, &MyForm::webBrowser1_Navigated);
			// 
			// btnBack
			// 
			this->btnBack->Enabled = false;
			this->btnBack->Location = System::Drawing::Point(17, 9);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(40, 25);
			this->btnBack->TabIndex = 5;
			this->btnBack->Text = L"<<";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnForward
			// 
			this->btnForward->Enabled = false;
			this->btnForward->Location = System::Drawing::Point(60, 9);
			this->btnForward->Name = L"btnForward";
			this->btnForward->Size = System::Drawing::Size(40, 25);
			this->btnForward->TabIndex = 6;
			this->btnForward->Text = L">>";
			this->btnForward->UseVisualStyleBackColor = true;
			this->btnForward->Click += gcnew System::EventHandler(this, &MyForm::btnForward_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 470);
			this->Controls->Add(this->btnForward);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->btnGo);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Browser";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->webBrowser1->Url) {
			history->Add(this->webBrowser1->Url->AbsoluteUri);
			actualIndex++;
			this->btnBack->Enabled = true;
		}
		this->webBrowser1->Navigate(this->textBox1->Text);
		
	}
	
private: System::Void webBrowser1_Navigated(System::Object^ sender, System::Windows::Forms::WebBrowserNavigatedEventArgs^ e) {
	this->textBox1->Text = this->webBrowser1->Url->AbsoluteUri;
	this->Text = "Browser: " + this->webBrowser1->Url->Host;
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->webBrowser1->Url && actualIndex>0) {
		actualIndex--;
		this->btnForward->Enabled = true;
	}
	this->webBrowser1->Navigate(history[actualIndex]);
}
private: System::Void btnForward_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->webBrowser1->Url) {
		actualIndex++;
	}
	this->webBrowser1->Navigate(history[actualIndex]);
}
};
}
