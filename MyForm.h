#pragma once
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

namespace Project36 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Label^ lblHead;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::RadioButton^ rbtn1;
	private: System::Windows::Forms::RadioButton^ rbtn2;
	private: System::Windows::Forms::RadioButton^ rbtn3;
	protected:





	private: System::Windows::Forms::GroupBox^ grpTask1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblText;
	private: System::Windows::Forms::TextBox^ txtAnswer;
	private: System::Windows::Forms::Button^ btnTask2;
	private: System::Windows::Forms::Button^ btnTask;





	private: System::Windows::Forms::Button^ btnTask1;
	private: System::Windows::Forms::CheckBox^ checkBox1;



	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::GroupBox^ grpTask3;
	private: System::Windows::Forms::Button^ btnTask3;


	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnResult;
	private: System::Windows::Forms::RadioButton^ rbtnYes;
	private: System::Windows::Forms::RadioButton^ rbtnNo;
	private: System::Windows::Forms::GroupBox^ grpTask11;
	private: System::Windows::Forms::Button^ btnTask11;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblHead = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->rbtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn3 = (gcnew System::Windows::Forms::RadioButton());
			this->grpTask1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblText = (gcnew System::Windows::Forms::Label());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->btnTask2 = (gcnew System::Windows::Forms::Button());
			this->btnTask = (gcnew System::Windows::Forms::Button());
			this->btnTask1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->grpTask3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnTask3 = (gcnew System::Windows::Forms::Button());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->rbtnYes = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNo = (gcnew System::Windows::Forms::RadioButton());
			this->grpTask11 = (gcnew System::Windows::Forms::GroupBox());
			this->btnTask11 = (gcnew System::Windows::Forms::Button());
			this->grpTask1->SuspendLayout();
			this->grpTask3->SuspendLayout();
			this->grpTask11->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblHead
			// 
			this->lblHead->AutoEllipsis = true;
			this->lblHead->AutoSize = true;
			this->lblHead->Location = System::Drawing::Point(172, 9);
			this->lblHead->Name = L"lblHead";
			this->lblHead->Size = System::Drawing::Size(190, 13);
			this->lblHead->TabIndex = 0;
			this->lblHead->Text = L"Для начала теста нажми на кнопку!";
			this->lblHead->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(209, 33);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(128, 25);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"ПЕРЕМЕШАТЬ";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click);
			// 
			// rbtn1
			// 
			this->rbtn1->AutoSize = true;
			this->rbtn1->Location = System::Drawing::Point(18, 18);
			this->rbtn1->Name = L"rbtn1";
			this->rbtn1->Size = System::Drawing::Size(14, 13);
			this->rbtn1->TabIndex = 2;
			this->rbtn1->TabStop = true;
			this->rbtn1->UseVisualStyleBackColor = true;
			// 
			// rbtn2
			// 
			this->rbtn2->AutoSize = true;
			this->rbtn2->Location = System::Drawing::Point(18, 41);
			this->rbtn2->Name = L"rbtn2";
			this->rbtn2->Size = System::Drawing::Size(14, 13);
			this->rbtn2->TabIndex = 3;
			this->rbtn2->TabStop = true;
			this->rbtn2->UseVisualStyleBackColor = true;
			// 
			// rbtn3
			// 
			this->rbtn3->AutoSize = true;
			this->rbtn3->Location = System::Drawing::Point(18, 64);
			this->rbtn3->Name = L"rbtn3";
			this->rbtn3->Size = System::Drawing::Size(14, 13);
			this->rbtn3->TabIndex = 4;
			this->rbtn3->TabStop = true;
			this->rbtn3->UseVisualStyleBackColor = true;
			// 
			// grpTask1
			// 
			this->grpTask1->Controls->Add(this->rbtn3);
			this->grpTask1->Controls->Add(this->rbtn2);
			this->grpTask1->Controls->Add(this->rbtn1);
			this->grpTask1->Location = System::Drawing::Point(37, 158);
			this->grpTask1->Name = L"grpTask1";
			this->grpTask1->Size = System::Drawing::Size(168, 98);
			this->grpTask1->TabIndex = 5;
			this->grpTask1->TabStop = false;
			this->grpTask1->Text = L"Выбери 1 вариант ответа:";
			this->grpTask1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 6;
			this->label2->Visible = false;
			// 
			// lblText
			// 
			this->lblText->AutoSize = true;
			this->lblText->Location = System::Drawing::Point(259, 118);
			this->lblText->Name = L"lblText";
			this->lblText->Size = System::Drawing::Size(0, 13);
			this->lblText->TabIndex = 8;
			this->lblText->Visible = false;
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(262, 158);
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(100, 20);
			this->txtAnswer->TabIndex = 9;
			this->txtAnswer->Visible = false;
			// 
			// btnTask2
			// 
			this->btnTask2->Location = System::Drawing::Point(368, 155);
			this->btnTask2->Name = L"btnTask2";
			this->btnTask2->Size = System::Drawing::Size(75, 23);
			this->btnTask2->TabIndex = 10;
			this->btnTask2->Text = L"Проверить";
			this->btnTask2->UseVisualStyleBackColor = true;
			this->btnTask2->Visible = false;
			this->btnTask2->Click += gcnew System::EventHandler(this, &MyForm::btnTask2_Click);
			// 
			// btnTask
			// 
			this->btnTask->Location = System::Drawing::Point(209, 328);
			this->btnTask->Name = L"btnTask";
			this->btnTask->Size = System::Drawing::Size(128, 23);
			this->btnTask->TabIndex = 11;
			this->btnTask->Text = L"Вопрос";
			this->btnTask->UseVisualStyleBackColor = true;
			this->btnTask->Visible = false;
			this->btnTask->Click += gcnew System::EventHandler(this, &MyForm::btnTask_Click);
			// 
			// btnTask1
			// 
			this->btnTask1->Location = System::Drawing::Point(77, 262);
			this->btnTask1->Name = L"btnTask1";
			this->btnTask1->Size = System::Drawing::Size(75, 23);
			this->btnTask1->TabIndex = 12;
			this->btnTask1->Text = L"Выбрать";
			this->btnTask1->UseVisualStyleBackColor = true;
			this->btnTask1->Visible = false;
			this->btnTask1->Click += gcnew System::EventHandler(this, &MyForm::btnTask1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(31, 17);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(31, 40);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 14;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(31, 63);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 15;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(31, 86);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 16;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// grpTask3
			// 
			this->grpTask3->Controls->Add(this->checkBox2);
			this->grpTask3->Controls->Add(this->checkBox4);
			this->grpTask3->Controls->Add(this->checkBox1);
			this->grpTask3->Controls->Add(this->checkBox3);
			this->grpTask3->Location = System::Drawing::Point(332, 199);
			this->grpTask3->Name = L"grpTask3";
			this->grpTask3->Size = System::Drawing::Size(245, 110);
			this->grpTask3->TabIndex = 17;
			this->grpTask3->TabStop = false;
			this->grpTask3->Text = L"Выберите несколько вариантов ответа:";
			this->grpTask3->Visible = false;
			// 
			// btnTask3
			// 
			this->btnTask3->Location = System::Drawing::Point(429, 315);
			this->btnTask3->Name = L"btnTask3";
			this->btnTask3->Size = System::Drawing::Size(75, 23);
			this->btnTask3->TabIndex = 18;
			this->btnTask3->Text = L"Выбрать";
			this->btnTask3->UseVisualStyleBackColor = true;
			this->btnTask3->Visible = false;
			this->btnTask3->Click += gcnew System::EventHandler(this, &MyForm::btnTask3_Click);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(221, 64);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(100, 20);
			this->txtResult->TabIndex = 19;
			this->txtResult->Visible = false;
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(204, 90);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(135, 23);
			this->btnResult->TabIndex = 20;
			this->btnResult->Text = L"Узнать результат!";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Visible = false;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// rbtnYes
			// 
			this->rbtnYes->AutoSize = true;
			this->rbtnYes->Location = System::Drawing::Point(21, 19);
			this->rbtnYes->Name = L"rbtnYes";
			this->rbtnYes->Size = System::Drawing::Size(40, 17);
			this->rbtnYes->TabIndex = 21;
			this->rbtnYes->TabStop = true;
			this->rbtnYes->Text = L"Да";
			this->rbtnYes->UseVisualStyleBackColor = true;
			// 
			// rbtnNo
			// 
			this->rbtnNo->AutoSize = true;
			this->rbtnNo->Location = System::Drawing::Point(21, 42);
			this->rbtnNo->Name = L"rbtnNo";
			this->rbtnNo->Size = System::Drawing::Size(44, 17);
			this->rbtnNo->TabIndex = 22;
			this->rbtnNo->TabStop = true;
			this->rbtnNo->Text = L"Нет";
			this->rbtnNo->UseVisualStyleBackColor = true;
			// 
			// grpTask11
			// 
			this->grpTask11->Controls->Add(this->rbtnYes);
			this->grpTask11->Controls->Add(this->rbtnNo);
			this->grpTask11->Location = System::Drawing::Point(429, 39);
			this->grpTask11->Name = L"grpTask11";
			this->grpTask11->Size = System::Drawing::Size(127, 80);
			this->grpTask11->TabIndex = 23;
			this->grpTask11->TabStop = false;
			this->grpTask11->Text = L"Да или нет\?";
			this->grpTask11->Visible = false;
			// 
			// btnTask11
			// 
			this->btnTask11->Location = System::Drawing::Point(454, 126);
			this->btnTask11->Name = L"btnTask11";
			this->btnTask11->Size = System::Drawing::Size(75, 23);
			this->btnTask11->TabIndex = 24;
			this->btnTask11->Text = L"Выбрать";
			this->btnTask11->UseVisualStyleBackColor = true;
			this->btnTask11->Visible = false;
			this->btnTask11->Click += gcnew System::EventHandler(this, &MyForm::btnTask11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 363);
			this->Controls->Add(this->btnTask11);
			this->Controls->Add(this->grpTask11);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->btnTask3);
			this->Controls->Add(this->grpTask3);
			this->Controls->Add(this->btnTask1);
			this->Controls->Add(this->btnTask);
			this->Controls->Add(this->btnTask2);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->lblText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->grpTask1);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->lblHead);
			this->Name = L"MyForm";
			this->Text = L"ТЕСТ";
			this->grpTask1->ResumeLayout(false);
			this->grpTask1->PerformLayout();
			this->grpTask3->ResumeLayout(false);
			this->grpTask3->PerformLayout();
			this->grpTask11->ResumeLayout(false);
			this->grpTask11->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//функция выбора вопроса
		void choiceOfQuestion(int k)
		{
			//ненужные кнопки исчезают, чтобы не путать пользователя, становятся видимыми нужные для задания
			//шаблоны заполняются необходимыми параметрами
			btnTask->Visible = false;
			switch (k)
			{
				//категория вопросов 1 - выбор из 3 вариаетов ответа
				case 1:
					lblHead->Text = "Вопрос 1:";
					label2->Visible = true;
					label2->Text = "Жертвы этого вируса получали вложение с названием «LOVE - LETTER - FOR - YOU».";
					grpTask1->Visible = true;
					btnTask1->Visible = true;
					rbtn1->Text = "Trojan horse";
					rbtn2->Text = "I love you";
					rbtn3->Text = "Your favorite letter";
					break;
				//категория 2 - ввести в текстовое поле
				case 2:
					grpTask1->Visible = false;
					lblHead->Text = "Вопрос 2:";
					label2->Visible = true;
					label2->Text = "Год основания нашего факультета";
					txtAnswer->Visible = true;
					btnTask2->Visible = true;
					break;
				//категория 3 - выбор нескольких вариантов ответа
				case 3:
					lblHead->Text = "Вопрос 3:";
					label2->Visible = true;
					label2->Text = "Какие из направлений являются бакалавриатом?";
					grpTask3->Visible = true;
					checkBox1->Text = "КБ";
					checkBox2->Text = "ИВТ";
					checkBox3->Text = "ПИ";
					checkBox4->Text = "ФИИТ";
					btnTask3->Visible = true;
					break;
				case 4:
					lblHead->Text = "Вопрос 4:";
					label2->Visible = true;
					label2->Text = "Как вы думаете, какой из этих паролей не входит в топ-200 популярных паролей?";
					grpTask1->Visible = true;
					btnTask1->Visible = true;
					rbtn1->Text = "zinch";
					rbtn2->Text = "1qaz2wsx";
					rbtn3->Text = "helloworld";
					break;
				case 5:
					grpTask1->Visible = false;
					lblHead->Text = "Вопрос 5:";
					label2->Visible = true;
					label2->Text = "Назовите организацию, которая публикует секретную информацию, взятую из анонимных источников или при утечке данной информации.";
					txtAnswer->Visible = true;
					btnTask2->Visible = true;
					break;
				case 6:
					lblHead->Text = "Вопрос 6:";
					label2->Visible = true;
					label2->Text = "Выберите языки программирования";
					grpTask3->Visible = true;
					checkBox1->Text = "C++";
					checkBox2->Text = "C#";
					checkBox3->Text = "Java";
					checkBox4->Text = "Qwerty";
					btnTask3->Visible = true;
					break;
				case 7:
					lblHead->Text = "Вопрос 7:";
					label2->Visible = true;
					label2->Text = "Первый компьютерный вирус был создан:";
					grpTask1->Visible = true;
					btnTask1->Visible = true;
					rbtn1->Text = "1970";
					rbtn2->Text = "1999";
					rbtn3->Text = "1985";
					break;
				case 8:
					grpTask1->Visible = false;
					lblHead->Text = "Вопрос 8:";
					label2->Visible = true;
					label2->Text = "Какая абревиатура у факультета?";
					txtAnswer->Visible = true;
					btnTask2->Visible = true;
					break;
				case 9:
					lblHead->Text = "Вопрос 9:";
					label2->Visible = true;
					label2->Text = "Выберите IT компании Саратова:";
					grpTask3->Visible = true;
					checkBox1->Text = "Epam";
					checkBox2->Text = "Grid Dynamics";
					checkBox3->Text = "Qwerty";
					checkBox4->Text = "Zxcvbn";
					btnTask3->Visible = true;
					break;
				case 10:
					lblHead->Text = "Вопрос 10:";
					label2->Visible = true;
					label2->Text = "Когда отмечается день Компьютерной Безопасности?";
					grpTask1->Visible = true;
					btnTask1->Visible = true;
					rbtn1->Text = "3 декабря";
					rbtn2->Text = "30 ноября";
					rbtn3->Text = "4 апреля";
					break;
					//категория да/нет
				case 11:
					lblHead->Text = "Вопрос 11:";
					label2->Visible = true;
					label2->Text = "8 в двоичной системе это 1000?";
					grpTask11->Visible = true;
					btnTask11->Visible = true;
					rbtnYes->Text = "Да";
					rbtnNo->Text = "Нет";
					break;
				default: break;
			}

		}
		//очки
		   int score = 0;

		//самый простой <<перемешиватель>> элементов массива
		   void RanD(int m[], int size)
		   {
				for (int i = 0; i < size; ++i)
				std::swap(m[i], m[std::rand() % size]);
		   }

		   //стек для хранения очередности вопросов
	private: System::Collections::Generic::Stack<int> stk;
		
		  //кнопка перемешать
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//массив из 11 числе
		int m[11] = { 1,2,3,4,5,6,7,8,9, 10, 11};
		RanD(m, 11); //перемешиваем
		//добавляем все в стек
		for (int i = 0; i < 11; i++)
		{
			stk.Push(m[i]);
		}
		//ненужные кпонки исчезают, появляется кнопка вопросов
		btnStart->Visible = false;
		btnTask->Visible = true;
	}

		   //категория 2 вопросов
	private: System::Void btnTask2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//приготовления
		String^ str = txtAnswer->Text;
		txtAnswer->ReadOnly = false;
		lblText->Visible = true;

		//если ничего не введено
		if (str == "")
		{
			lblText->Text = "Введите ответ в текстовое поле";
		}
		else
		{
			//смотрим по вариантам вопроса
			if ((str == "2000" && label2->Text == "Год основания нашего факультета")
				|| (str == "WikiLeaks" && label2->Text == "Назовите организацию, которая публикует секретную информацию, взятую из анонимных источников или при утечке данной информации.")
				|| (str == "КНиИТ" && label2->Text == "Какая абревиатура у факультета?"))
			{
				lblText->Text = "Правильно!";
				score++;
			}
			else
			{
				lblText->Text = "Ой!";
			}

			//закрываем возможность выбора
			txtAnswer->ReadOnly = true;
			btnTask2->Visible = false;
			txtAnswer->Text = "";
			btnTask->Visible = true;
		}

	}
		   //выбор вопроса
	private: System::Void btnTask_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//все очищаем/прячем
		txtAnswer->Visible = false;
		grpTask1->Visible = false;
		grpTask3->Visible = false;
		label2->Text = "";
		lblText->Visible = false;
		lblText->Text = "";
		grpTask1->Enabled = true;
		grpTask3->Enabled = true;
		txtAnswer->ReadOnly = false;
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		rbtn1->Checked = false;
		rbtn2->Checked = false;
		rbtn3->Checked = false;
		grpTask11->Enabled = true;
		grpTask11->Visible = false;
		rbtnYes->Checked = false;
		rbtnNo->Checked = false;

		//пока не дошли до конца стека
		if (stk.Count > 0)
		{
			int r = stk.Pop(); //достаем вопрос из стека
			choiceOfQuestion(r);
		}
		else
		{
			//к новой панельке
			lblHead->Text = "вопросы закончились :(";
			btnTask->Visible = false;
			txtResult->Visible = true;
			btnResult->Visible = true;
		}
	}

		   //категрия 1 выбор из 3 вариантов
		//в завсисимости от задания сравнивается и выдается вердикт
	private: System::Void btnTask1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (rbtn2->Checked == true && rbtn2->Text == "I love you")
		{
			lblText->Visible = true;
			lblText->Text = "Правильно!";
			score++;

			grpTask1->Enabled = false;
			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if ((rbtn1->Checked == true && rbtn1->Text == "Trojan horse") || (rbtn3->Checked == true && rbtn3->Text == "Your favorite letter"))
		{
			lblText->Visible = true;
			lblText->Text = "Неправильно!";

			grpTask1->Enabled = false;
			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if (rbtn1->Checked == true && rbtn1->Text == "1970")
		{
			lblText->Visible = true;
			lblText->Text = "Правильно!";
			score++;

			grpTask1->Enabled = false;
			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if ((rbtn2->Checked == true && rbtn2->Text == "1999") || (rbtn3->Checked == true && rbtn3->Text == "1985"))
		{
			lblText->Visible = true;
			lblText->Text = "Неправильно!";

			grpTask1->Enabled = false;
			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if (rbtn3->Checked == true && rbtn3->Text == "helloworld")
		{
			lblText->Visible = true;
			lblText->Text = "Правильно!";
			score++;

			grpTask1->Enabled = false;
			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if ((rbtn1->Checked == true && rbtn1->Text == "zinch") || (rbtn2->Checked == true && rbtn2->Text == "1qaz2wsx"))
		{
			lblText->Visible = true;
			lblText->Text = "Неправильно!";

			grpTask1->Enabled = false;

			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if (rbtn2->Checked == true && rbtn2->Text == "30 ноября")
		{
			lblText->Visible = true;
			lblText->Text = "Правильно!";
			score++;

			grpTask1->Enabled = false;
			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		if ((rbtn1->Checked == true && rbtn1->Text == "3 декабря") || (rbtn3->Checked == true && rbtn3->Text == "4 апреля"))
		{
			lblText->Visible = true;
			lblText->Text = "Неправильно!";

			grpTask1->Enabled = false;

			btnTask1->Visible = false;
			btnTask->Visible = true;
		}

		//если ничего не выбрано
		if (rbtn2->Checked == false && rbtn1->Checked == false && rbtn3->Checked == false)
		{
			lblText->Visible = true;
			lblText->Text = "Выберите вариант ответа!";
		}
	}
	
		   //категория 3 выбор нескольких ответов
	private: System::Void btnTask3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		lblText->Visible = true;

		//если ничего не выбрано
		if ((checkBox2->Checked == false) && (checkBox3->Checked == false) && (checkBox4->Checked == false) && (checkBox1->Checked == false))
		{
			lblText->Text = "Выберите несколько ответов.";
		}
		else
		{
			//зкрываем выбор
			grpTask3->Enabled = false;
			//проверяем по заданиям
			if ((checkBox2->Checked == true && checkBox1->Text == "КБ") && (checkBox3->Checked == true) && (checkBox4->Checked == true) && (checkBox1->Checked == false)
				||((checkBox1->Checked == true && checkBox1->Text == "C++") && (checkBox2->Checked == true) && (checkBox3->Checked == true) && (checkBox4->Checked == false))
				||((checkBox1->Checked == true && checkBox1->Text == "Epam") && (checkBox2->Checked == true) && (checkBox3->Checked == false) && (checkBox4->Checked == false)))
			{
				lblText->Text = "Правильно!";
				score++;
			}
			else
			{
				lblText->Text = "Неправильно!";
			}
			//подчищаем поле
			btnTask3->Visible = false;
			btnTask->Visible = true;
		}
	}

		   //вывод результата
	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//выводим очки
		txtResult->Text = System::Convert::ToString(score + " из 11");
	}
		   //категория Да/нет
	private: System::Void btnTask11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//по тексту заадания(у нас такое одно)
		if (rbtnYes->Checked == true && rbtnYes->Text == "Да")
		{
			lblText->Visible = true;
			lblText->Text = "Правильно!";
			score++;

			grpTask11->Enabled = false;
			btnTask11->Visible = false;
			btnTask->Visible = true;
		}

		if (rbtnNo->Checked == true && rbtnNo->Text == "Нет")
		{
			lblText->Visible = true;
			lblText->Text = "Неправильно!";

			grpTask11->Enabled = false;
			btnTask11->Visible = false;
			btnTask->Visible = true;
		}

		if (rbtnYes->Checked == false && rbtnNo->Checked == false)
		{
			lblText->Visible = true;
			lblText->Text = "Выберите вариант ответа!";
		}
	}
};
}
