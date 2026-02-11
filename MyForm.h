#pragma once

namespace VolynetsTI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ ResultRichTextBox;
	protected:
		bool usePaddingX = true;
	private: System::Windows::Forms::RadioButton^ DecryptionRadioButton;
	private: System::Windows::Forms::RadioButton^ EncryptionRadioButton;
	private: System::Windows::Forms::GroupBox^ CipherGroupBox;
	private: System::Windows::Forms::RadioButton^ VigenerRadioButton;
	private: System::Windows::Forms::RadioButton^ StolbRadioButton;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::GroupBox^ AlgorithmGroupBox;
	private: System::Windows::Forms::Button^ SaveToFileButton;
	private: System::Windows::Forms::Button^ ExecuteButton;
	private: System::Windows::Forms::Label^ InputLabel;
	private: System::Windows::Forms::TextBox^ KeyTextBox;
	private: System::Windows::Forms::Label^ KeyLabel;
	private: System::Windows::Forms::TextBox^ FilePathTextBox;
	private: System::Windows::Forms::Button^ ChooseFileButton;
	private: System::Windows::Forms::OpenFileDialog^ OpenFileDialog;
	private: System::Windows::Forms::RichTextBox^ InputRichTextBox;
	private: System::Windows::Forms::Label^ MetodLabel;
	private: System::Windows::Forms::SaveFileDialog^ SaveFileDialog;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::CheckBox^ XCheckBox;
	private: System::Windows::Forms::Label^ XLabel;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ResultRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->DecryptionRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->EncryptionRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->CipherGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->VigenerRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->StolbRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->AlgorithmGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->SaveToFileButton = (gcnew System::Windows::Forms::Button());
			this->ExecuteButton = (gcnew System::Windows::Forms::Button());
			this->InputLabel = (gcnew System::Windows::Forms::Label());
			this->KeyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->KeyLabel = (gcnew System::Windows::Forms::Label());
			this->FilePathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ChooseFileButton = (gcnew System::Windows::Forms::Button());
			this->OpenFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->InputRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->MetodLabel = (gcnew System::Windows::Forms::Label());
			this->SaveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->XCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->XLabel = (gcnew System::Windows::Forms::Label());
			this->CipherGroupBox->SuspendLayout();
			this->AlgorithmGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// ResultRichTextBox
			// 
			this->ResultRichTextBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->ResultRichTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultRichTextBox->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->ResultRichTextBox->Location = System::Drawing::Point(404, 233);
			this->ResultRichTextBox->Name = L"ResultRichTextBox";
			this->ResultRichTextBox->Size = System::Drawing::Size(524, 176);
			this->ResultRichTextBox->TabIndex = 31;
			this->ResultRichTextBox->Text = L"";
			// 
			// DecryptionRadioButton
			// 
			this->DecryptionRadioButton->AutoSize = true;
			this->DecryptionRadioButton->Location = System::Drawing::Point(7, 66);
			this->DecryptionRadioButton->Name = L"DecryptionRadioButton";
			this->DecryptionRadioButton->Size = System::Drawing::Size(160, 24);
			this->DecryptionRadioButton->TabIndex = 1;
			this->DecryptionRadioButton->Text = L"Дешифрование";
			this->DecryptionRadioButton->UseVisualStyleBackColor = true;
			// 
			// EncryptionRadioButton
			// 
			this->EncryptionRadioButton->AutoSize = true;
			this->EncryptionRadioButton->Checked = true;
			this->EncryptionRadioButton->Location = System::Drawing::Point(7, 30);
			this->EncryptionRadioButton->Name = L"EncryptionRadioButton";
			this->EncryptionRadioButton->Size = System::Drawing::Size(137, 24);
			this->EncryptionRadioButton->TabIndex = 0;
			this->EncryptionRadioButton->TabStop = true;
			this->EncryptionRadioButton->Text = L"Шифрование";
			this->EncryptionRadioButton->UseVisualStyleBackColor = true;
			// 
			// CipherGroupBox
			// 
			this->CipherGroupBox->BackColor = System::Drawing::Color::Transparent;
			this->CipherGroupBox->Controls->Add(this->DecryptionRadioButton);
			this->CipherGroupBox->Controls->Add(this->EncryptionRadioButton);
			this->CipherGroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CipherGroupBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CipherGroupBox->Location = System::Drawing::Point(361, 69);
			this->CipherGroupBox->Name = L"CipherGroupBox";
			this->CipherGroupBox->Size = System::Drawing::Size(291, 102);
			this->CipherGroupBox->TabIndex = 29;
			this->CipherGroupBox->TabStop = false;
			this->CipherGroupBox->Text = L"Шифр";
			// 
			// VigenerRadioButton
			// 
			this->VigenerRadioButton->AutoSize = true;
			this->VigenerRadioButton->Location = System::Drawing::Point(7, 66);
			this->VigenerRadioButton->Name = L"VigenerRadioButton";
			this->VigenerRadioButton->Size = System::Drawing::Size(242, 24);
			this->VigenerRadioButton->TabIndex = 1;
			this->VigenerRadioButton->Text = L"Алгоритм Виженера RUS";
			this->VigenerRadioButton->UseVisualStyleBackColor = true;
			this->VigenerRadioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// StolbRadioButton
			// 
			this->StolbRadioButton->AutoSize = true;
			this->StolbRadioButton->Checked = true;
			this->StolbRadioButton->Location = System::Drawing::Point(7, 30);
			this->StolbRadioButton->Name = L"StolbRadioButton";
			this->StolbRadioButton->Size = System::Drawing::Size(234, 24);
			this->StolbRadioButton->TabIndex = 0;
			this->StolbRadioButton->TabStop = true;
			this->StolbRadioButton->Text = L"Столбцовый метод ENG";
			this->StolbRadioButton->UseVisualStyleBackColor = true;
			this->StolbRadioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StolbRadioButton_CheckedChanged_1);
			// 
			// ResultLabel
			// 
			this->ResultLabel->AutoSize = true;
			this->ResultLabel->BackColor = System::Drawing::Color::Transparent;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ResultLabel->Location = System::Drawing::Point(400, 203);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(98, 20);
			this->ResultLabel->TabIndex = 30;
			this->ResultLabel->Text = L"Результат";
			// 
			// AlgorithmGroupBox
			// 
			this->AlgorithmGroupBox->BackColor = System::Drawing::Color::Transparent;
			this->AlgorithmGroupBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->AlgorithmGroupBox->Controls->Add(this->VigenerRadioButton);
			this->AlgorithmGroupBox->Controls->Add(this->StolbRadioButton);
			this->AlgorithmGroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlgorithmGroupBox->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AlgorithmGroupBox->Location = System::Drawing::Point(38, 69);
			this->AlgorithmGroupBox->Name = L"AlgorithmGroupBox";
			this->AlgorithmGroupBox->Size = System::Drawing::Size(284, 102);
			this->AlgorithmGroupBox->TabIndex = 28;
			this->AlgorithmGroupBox->TabStop = false;
			this->AlgorithmGroupBox->Text = L"Алгоритм";
			// 
			// SaveToFileButton
			// 
			this->SaveToFileButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SaveToFileButton->ForeColor = System::Drawing::SystemColors::InfoText;
			this->SaveToFileButton->Location = System::Drawing::Point(778, 121);
			this->SaveToFileButton->Name = L"SaveToFileButton";
			this->SaveToFileButton->Size = System::Drawing::Size(190, 40);
			this->SaveToFileButton->TabIndex = 27;
			this->SaveToFileButton->Text = L"Сохранить в файл";
			this->SaveToFileButton->UseVisualStyleBackColor = false;
			this->SaveToFileButton->Click += gcnew System::EventHandler(this, &MyForm::SaveToFileButton_Click);
			// 
			// ExecuteButton
			// 
			this->ExecuteButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ExecuteButton->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ExecuteButton->Location = System::Drawing::Point(404, 434);
			this->ExecuteButton->Name = L"ExecuteButton";
			this->ExecuteButton->Size = System::Drawing::Size(187, 40);
			this->ExecuteButton->TabIndex = 26;
			this->ExecuteButton->Text = L"Выполнить";
			this->ExecuteButton->UseVisualStyleBackColor = false;
			this->ExecuteButton->Click += gcnew System::EventHandler(this, &MyForm::ExecuteButton_Click);
			// 
			// InputLabel
			// 
			this->InputLabel->AutoSize = true;
			this->InputLabel->BackColor = System::Drawing::Color::Transparent;
			this->InputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->InputLabel->Location = System::Drawing::Point(34, 337);
			this->InputLabel->Name = L"InputLabel";
			this->InputLabel->Size = System::Drawing::Size(137, 20);
			this->InputLabel->TabIndex = 24;
			this->InputLabel->Text = L"PlainText (ENG)";
			// 
			// KeyTextBox
			// 
			this->KeyTextBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->KeyTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeyTextBox->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->KeyTextBox->Location = System::Drawing::Point(38, 280);
			this->KeyTextBox->Name = L"KeyTextBox";
			this->KeyTextBox->Size = System::Drawing::Size(294, 28);
			this->KeyTextBox->TabIndex = 23;
			// 
			// KeyLabel
			// 
			this->KeyLabel->AutoSize = true;
			this->KeyLabel->BackColor = System::Drawing::Color::Transparent;
			this->KeyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeyLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->KeyLabel->Location = System::Drawing::Point(35, 246);
			this->KeyLabel->Name = L"KeyLabel";
			this->KeyLabel->Size = System::Drawing::Size(93, 20);
			this->KeyLabel->TabIndex = 22;
			this->KeyLabel->Text = L"Key (ENG)";
			// 
			// FilePathTextBox
			// 
			this->FilePathTextBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->FilePathTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FilePathTextBox->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->FilePathTextBox->Location = System::Drawing::Point(681, 36);
			this->FilePathTextBox->Name = L"FilePathTextBox";
			this->FilePathTextBox->ReadOnly = true;
			this->FilePathTextBox->Size = System::Drawing::Size(371, 21);
			this->FilePathTextBox->TabIndex = 21;
			// 
			// ChooseFileButton
			// 
			this->ChooseFileButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ChooseFileButton->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ChooseFileButton->Location = System::Drawing::Point(778, 69);
			this->ChooseFileButton->Name = L"ChooseFileButton";
			this->ChooseFileButton->Size = System::Drawing::Size(190, 40);
			this->ChooseFileButton->TabIndex = 20;
			this->ChooseFileButton->Text = L"Выбрать файл";
			this->ChooseFileButton->UseVisualStyleBackColor = false;
			this->ChooseFileButton->Click += gcnew System::EventHandler(this, &MyForm::ChooseFileButton_Click_1);
			// 
			// OpenFileDialog
			// 
			this->OpenFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt";
			this->OpenFileDialog->Title = L"Выберите файл";
			// 
			// InputRichTextBox
			// 
			this->InputRichTextBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->InputRichTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputRichTextBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->InputRichTextBox->Location = System::Drawing::Point(39, 378);
			this->InputRichTextBox->Name = L"InputRichTextBox";
			this->InputRichTextBox->Size = System::Drawing::Size(293, 96);
			this->InputRichTextBox->TabIndex = 25;
			this->InputRichTextBox->Text = L"";
			// 
			// MetodLabel
			// 
			this->MetodLabel->AutoSize = true;
			this->MetodLabel->BackColor = System::Drawing::Color::Transparent;
			this->MetodLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MetodLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MetodLabel->Location = System::Drawing::Point(34, 24);
			this->MetodLabel->Name = L"MetodLabel";
			this->MetodLabel->Size = System::Drawing::Size(254, 24);
			this->MetodLabel->TabIndex = 19;
			this->MetodLabel->Text = L"Выберите метод и шифр";
			this->MetodLabel->UseMnemonic = false;
			// 
			// SaveFileDialog
			// 
			this->SaveFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt";
			// 
			// ClearButton
			// 
			this->ClearButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClearButton->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ClearButton->Location = System::Drawing::Point(738, 434);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(190, 40);
			this->ClearButton->TabIndex = 32;
			this->ClearButton->Text = L"Очистить поля";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// XCheckBox
			// 
			this->XCheckBox->AutoSize = true;
			this->XCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->XCheckBox->Checked = true;
			this->XCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->XCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XCheckBox->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->XCheckBox->Location = System::Drawing::Point(292, 203);
			this->XCheckBox->Name = L"XCheckBox";
			this->XCheckBox->Size = System::Drawing::Size(40, 24);
			this->XCheckBox->TabIndex = 33;
			this->XCheckBox->Text = L"X";
			this->XCheckBox->UseVisualStyleBackColor = false;
			this->XCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::XCheckBox_CheckedChanged);
			// 
			// XLabel
			// 
			this->XLabel->AutoSize = true;
			this->XLabel->BackColor = System::Drawing::Color::Transparent;
			this->XLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->XLabel->Location = System::Drawing::Point(35, 204);
			this->XLabel->Name = L"XLabel";
			this->XLabel->Size = System::Drawing::Size(231, 20);
			this->XLabel->TabIndex = 34;
			this->XLabel->Text = L"Дополнять пустые ячейки";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1090, 518);
			this->Controls->Add(this->XLabel);
			this->Controls->Add(this->XCheckBox);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->ResultRichTextBox);
			this->Controls->Add(this->CipherGroupBox);
			this->Controls->Add(this->ResultLabel);
			this->Controls->Add(this->AlgorithmGroupBox);
			this->Controls->Add(this->SaveToFileButton);
			this->Controls->Add(this->ExecuteButton);
			this->Controls->Add(this->InputLabel);
			this->Controls->Add(this->KeyTextBox);
			this->Controls->Add(this->KeyLabel);
			this->Controls->Add(this->FilePathTextBox);
			this->Controls->Add(this->ChooseFileButton);
			this->Controls->Add(this->InputRichTextBox);
			this->Controls->Add(this->MetodLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TI-1 4v";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->CipherGroupBox->ResumeLayout(false);
			this->CipherGroupBox->PerformLayout();
			this->AlgorithmGroupBox->ResumeLayout(false);
			this->AlgorithmGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ChooseFileButton_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (OpenFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;

		FilePathTextBox->Text = OpenFileDialog->FileName;

		array<String^>^ lines = System::IO::File::ReadAllLines(OpenFileDialog->FileName);

		if (lines->Length >= 3) {
			KeyTextBox->Text = lines[0];
			InputRichTextBox->Text = lines[1];

			String^ result = "";

			for (int i = 2; i < lines->Length; i++)
			{
				result += lines[i];
				if (i < lines->Length - 1) 
					result += "\n";
			}
			ResultRichTextBox->Text = result;
		}
	}

	private: System::Void SaveToFileButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (SaveFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;

		String^ key = KeyTextBox->Text;
		String^ input = InputRichTextBox->Text;
		String^ result = ResultRichTextBox->Text;

		String^ maskedKey = gcnew String('*', key->Length);

		String^ data = maskedKey + "\n" + input + "\n" + result;

		System::IO::File::WriteAllText(SaveFileDialog->FileName, data);
	}

	private: System::Void ExecuteButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ input = InputRichTextBox->Text;
		String^ key = KeyTextBox->Text;

		if (String::IsNullOrWhiteSpace(key)) {
			MessageBox::Show("Пожалуйста, введите ключ.", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (String::IsNullOrWhiteSpace(input)) {
			MessageBox::Show("Пожалуйста, введите текст.", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (key->Length < 2) {
			MessageBox::Show("Ключ должен содержать минимум 2 символа.", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		array<wchar_t>^ alphabetEng = gcnew array<wchar_t>
		{
			L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H', L'I', L'J',
				L'K', L'L', L'M', L'N', L'O', L'P', L'Q', L'R', L'S', L'T',
				L'U', L'V', L'W', L'X', L'Y', L'Z'
		};

		array<wchar_t>^ alphabetRus = gcnew array<wchar_t>
		{
			L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ё', L'Ж', L'З',
				L'И', L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р',
				L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ',
				L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'
		};

		String^ cleanedInput = "";
		String^ cleanedKey = "";
		String^ invalidInput = "";
		String^ invalidKey = "";

		array<wchar_t>^ alphabet;

		if (StolbRadioButton->Checked)
			alphabet = alphabetEng;
		else
			alphabet = alphabetRus;

		input = input->ToUpper();
		for (int i = 0; i < input->Length; i++)
		{
			wchar_t ch = input[i];
			if (Array::IndexOf(alphabet, ch) >= 0)
				cleanedInput += ch;
			else
				invalidInput += ch;
		}

		key = key->ToUpper();
		for (int i = 0; i < key->Length; i++)
		{
			wchar_t ch = key[i];
			if (Array::IndexOf(alphabet, ch) >= 0)
				cleanedKey += ch;
			else
				invalidKey += ch;
		}

		if (invalidInput->Length > 0)
			MessageBox::Show("В тексте обнаружены недопустимые символы:\n" + invalidInput +
				"\nОни удалены.", "Предупреждение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);

		if (invalidKey->Length > 0)
			MessageBox::Show("В ключе обнаружены недопустимые символы:\n" + invalidKey +
				"\nОни удалены.", "Предупреждение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);

		if (cleanedKey->Length < 2)
		{
			MessageBox::Show("Ключ после очистки слишком короткий.", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ output = "";

		if (StolbRadioButton->Checked)
		{
			if (EncryptionRadioButton->Checked)
			{
				output = EncryptStolb(cleanedInput, cleanedKey);
			}
			else
			{
				output = DecryptStolb(cleanedInput, cleanedKey);
				if (!XCheckBox->Checked)
				{
					output = output->TrimEnd('X');
				}
			}
		}
		else
		{
			if (EncryptionRadioButton->Checked)
				output = EncryptVigener(cleanedInput, cleanedKey);
			else
				output = DecryptVigener(cleanedInput, cleanedKey);
		}

		ResultRichTextBox->Clear();
		ResultRichTextBox->AppendText("Исходный текст (валидный):\n" + cleanedInput + "\n\n");
		ResultRichTextBox->AppendText("Очищенный ключ:\n" + cleanedKey + "\n\n");
		ResultRichTextBox->AppendText("Результат:\n" + output);
	}

		   //private: System::Void InputRichTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		   //	// backspace
		   //	if (e->KeyChar == 8)
		   //		return;

		   //	if (StolbRadioButton->Checked) {
		   //		//if (!((e->KeyChar >= 'A' && e->KeyChar <= 'Z') || (e->KeyChar >= 'a' && e->KeyChar <= 'z') || Char::IsWhiteSpace(e->KeyChar))) {
		   //		//	e->Handled = true;
		   //		//}
		   //		return;
		   //	}

		   //	if (VigenerRadioButton->Checked) {
		   //		//if (!((e->KeyChar >= 'А' && e->KeyChar <= 'Я') || (e->KeyChar >= 'а' && e->KeyChar <= 'я') || Char::IsWhiteSpace(e->KeyChar))) {
		   //		//	e->Handled = true;
		   //		//}
		   //		return;
		   //	}
		   //}

		   //private: System::Void KeyTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		   //	if (e->KeyChar == 8)
		   //		return;

		   //	if (StolbRadioButton->Checked) {
		   //		//if (!((e->KeyChar >= 'A' && e->KeyChar <= 'Z') ||
		   //		//	(e->KeyChar >= 'a' && e->KeyChar <= 'z'))) {

		   //		//	e->Handled = true;
		   //		//}
		   //		return;
		   //	}

		   //	if (VigenerRadioButton->Checked) {
		   //		//	if (!((e->KeyChar >= 'А' && e->KeyChar <= 'Я') || 
		   //		//		(e->KeyChar == L'Ё') || (e->KeyChar == L'ё') ||
		   //		//		(e->KeyChar >= 'а' && e->KeyChar <= 'я'))) {

		   //		//		e->Handled = true;
		   //		//	}
		   //		return;
		   //	}
		   //}

		   String^ EncryptStolb(String^ input, String^ key)
		   {
			   input = input->ToUpper();
			   key = key->ToUpper();

			   input = input->Replace(" ", "");

			   int cols = key->Length;
			   int rows = (input->Length + cols - 1) / cols;

			   array<wchar_t, 2>^ table = gcnew array<wchar_t, 2>(rows, cols);

			   int index = 0;

			   for (int r = 0; r < rows; r++) {
				   for (int c = 0; c < cols; c++) {
					   if (index < input->Length) {
						   table[r, c] = input[index++];
					   }
					   else {
						   if (usePaddingX)
							   table[r, c] = L'X';
						   else
							   table[r, c] = L'\0';
					   }
				   }
			   }

			   //array<int>^ keyOrder = gcnew array<int>(cols);
			   //for (int i = 0; i < cols; i++) {
				  // keyOrder[i] = i;
			   //}

			   //Array::Sort(key->ToCharArray(), keyOrder);

			   array<int>^ keyOrder = GetKeyOrder(key);

			   String^ output = "";

			   for (int c = 0; c < cols; c++) {
				   int colIndex = keyOrder[c];
				   for (int r = 0; r < rows; r++) {
					   wchar_t ch = table[r, colIndex];
					   if (ch != L'\0') {
						   output += ch;
					   }
				   }
			   }

			   return output;
		   }

		   String^ DecryptStolb(String^ cipher, String^ key)
		   {
			   cipher = cipher->ToUpper();
			   key = key->ToUpper();

			   int cols = key->Length;
			   int rows = cipher->Length / cols;

			   array<wchar_t, 2>^ table = gcnew array<wchar_t, 2>(rows, cols);

			   //array<int>^ keyOrder = gcnew array<int>(cols);
			   //for (int i = 0; i < cols; i++) {
				  // keyOrder[i] = i;
			   //}

			   //Array::Sort(key->ToCharArray(), keyOrder);

			   array<int>^ keyOrder = GetKeyOrder(key);

			   int index = 0;

			   for (int c = 0; c < cols; c++) {
				   int colIndex = keyOrder[c];
				   for (int r = 0; r < rows; r++) {
					   table[r, colIndex] = cipher[index++];
				   }
			   }

			   String^ output = "";

			   for (int r = 0; r < rows; r++) {
				   for (int c = 0; c < cols; c++) {
					   output += table[r, c];
				   }
			   }

			   return output;
		   }

		   array<int>^ GetKeyOrder(String^ key)
		   {
			   key = key->ToUpper();
			   int n = key->Length;

			   array<wchar_t>^ chars = key->ToCharArray();

			   array<int>^ order = gcnew array<int>(n);
			   for (int i = 0; i < n; i++)
				   order[i] = i;

			   Array::Sort(chars, order);

			   return order;
		   }

		   String^ EncryptVigener(String^ input, String^ key)
		   {
			   array<wchar_t>^ alphabet = gcnew array<wchar_t>
			   {
				   L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ё', L'Ж', L'З',
					   L'И', L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р',
					   L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ',
					   L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'
			   };

			   int N = alphabet->Length;

			   input = input->ToUpper();
			   key = key->ToUpper();

			   String^ cleanedInput = "";
			   String^ cleanedKey = "";
			   String^ invalidInput = "";
			   String^ invalidKey = "";

			   // очистка текста
			   for (int i = 0; i < input->Length; i++)
			   {
				   wchar_t ch = input[i];
				   if (Array::IndexOf(alphabet, ch) >= 0)
					   cleanedInput += ch;
				   else
					   invalidInput += ch;
			   }

			   // очистка ключа
			   for (int i = 0; i < key->Length; i++)
			   {
				   wchar_t ch = key[i];
				   if (Array::IndexOf(alphabet, ch) >= 0)
					   cleanedKey += ch;
				   else
					   invalidKey += ch;
			   }

			   if (invalidInput->Length > 0)
			   {
				   MessageBox::Show(
					   "В тексте обнаружены недопустимые символы:\n" + invalidInput +
					   "\nОни удалены.", "Предупреждение",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   }

			   if (invalidKey->Length > 0)
			   {
				   MessageBox::Show(
					   "В ключе обнаружены недопустимые символы:\n" + invalidKey +
					   "\nОни удалены.", "Предупреждение",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   }

			   if (cleanedKey->Length < 2)
			   {
				   MessageBox::Show("Ключ после очистки слишком короткий.", "Ошибка",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return "";
			   }

			   // прогрессивный ключ
			   array<int>^ keyPos = gcnew array<int>(cleanedKey->Length);
			   for (int i = 0; i < cleanedKey->Length; i++)
				   keyPos[i] = Array::IndexOf(alphabet, cleanedKey[i]);

			   String^ output = "";
			   int keyIndex = 0;

			   for (int i = 0; i < cleanedInput->Length; i++)
			   {
				   int p = Array::IndexOf(alphabet, cleanedInput[i]);
				   int k = keyPos[keyIndex];

				   int c = (p + k) % N;
				   output += alphabet[c];

				   // прогрессия ключа
				   keyPos[keyIndex] = (keyPos[keyIndex] + 1) % N;

				   keyIndex = (keyIndex + 1) % cleanedKey->Length;
			   }

			   return output;
		   }

		   String^ DecryptVigener(String^ input, String^ key)
		   {
			   array<wchar_t>^ alphabet = gcnew array<wchar_t>
			   {
				   L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ё', L'Ж', L'З',
					   L'И', L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р',
					   L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ',
					   L'Ъ', L'Ы', L'Ь', L'Э', L'Ю', L'Я'
			   };

			   int N = alphabet->Length;

			   input = input->ToUpper();
			   key = key->ToUpper();

			   String^ cleanedInput = "";
			   String^ cleanedKey = "";
			   String^ invalidInput = "";
			   String^ invalidKey = "";

			   // очистка текста
			   for (int i = 0; i < input->Length; i++)
			   {
				   wchar_t ch = input[i];
				   if (Array::IndexOf(alphabet, ch) >= 0)
					   cleanedInput += ch;
				   else
					   invalidInput += ch;
			   }

			   // очистка ключа
			   for (int i = 0; i < key->Length; i++)
			   {
				   wchar_t ch = key[i];
				   if (Array::IndexOf(alphabet, ch) >= 0)
					   cleanedKey += ch;
				   else
					   invalidKey += ch;
			   }

			   if (invalidInput->Length > 0)
			   {
				   MessageBox::Show(
					   "В тексте обнаружены недопустимые символы:\n" + invalidInput +
					   "\nОни удалены.", "Предупреждение",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   }

			   if (invalidKey->Length > 0)
			   {
				   MessageBox::Show(
					   "В ключе обнаружены недопустимые символы:\n" + invalidKey +
					   "\nОни удалены.", "Предупреждение",
					   MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   }

			   if (cleanedKey->Length < 2)
			   {
				   MessageBox::Show("Ключ после очистки слишком короткий.", "Ошибка",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return "";
			   }

			   // прогрессивный ключ
			   array<int>^ keyPos = gcnew array<int>(cleanedKey->Length);
			   for (int i = 0; i < cleanedKey->Length; i++)
				   keyPos[i] = Array::IndexOf(alphabet, cleanedKey[i]);

			   String^ output = "";
			   int keyIndex = 0;

			   for (int i = 0; i < cleanedInput->Length; i++)
			   {
				   int c = Array::IndexOf(alphabet, cleanedInput[i]);
				   int k = keyPos[keyIndex];

				   int p = (c - k + N) % N;
				   output += alphabet[p];

				   // прогрессия ключа
				   keyPos[keyIndex] = (keyPos[keyIndex] + 1) % N;

				   keyIndex = (keyIndex + 1) % cleanedKey->Length;
			   }

			   return output;
		   }

		   //private: System::Void InputRichTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		   //	//if (e->Control && e->KeyCode == Keys::V) e->SuppressKeyPress = true;
		   //	//if (e->Shift && e->KeyCode == Keys::Insert) e->SuppressKeyPress = true;
		   //	//if (e->Control && e->KeyCode == Keys::Insert) e->SuppressKeyPress = true;
		   //}

		   //private: System::Void KeyTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		   //	//if (e->Control && e->KeyCode == Keys::V) e->SuppressKeyPress = true;
		   //	//if (e->Shift && e->KeyCode == Keys::Insert) e->SuppressKeyPress = true;
		   //	//if (e->Control && e->KeyCode == Keys::Insert) e->SuppressKeyPress = true;
		   //}

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		InputRichTextBox->Clear();
		KeyTextBox->Clear();
		ResultRichTextBox->Clear();
		FilePathTextBox->Clear();
	}

	private: System::Void XCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		usePaddingX = XCheckBox->Checked;
	}

	private: System::Void StolbRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		InputRichTextBox->Clear();
		KeyTextBox->Clear();
		ResultRichTextBox->Clear();
		FilePathTextBox->Clear();
	}
	private: System::Void StolbRadioButton_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		ClearButton_Click(sender, e);

		if (VigenerRadioButton->Checked) {
			KeyLabel->Text = "Ключ (русский)";
			InputLabel->Text = "Исходный текст (русский)";
		}
		else if (StolbRadioButton->Checked) {
			KeyLabel->Text = "Key (ENG)";
			InputLabel->Text = "PlainText (ENG)";

		}

		if (VigenerRadioButton->Checked) {
			XCheckBox->Visible = false;
			XLabel->Visible = false;
		}

		if (StolbRadioButton->Checked) {
			XCheckBox->Visible = true;
			XLabel->Visible = true;
		}

	}
	};
}