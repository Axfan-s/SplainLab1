#pragma once
#include "Gridfunction.h"
namespace SplainLab {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeight = 9;
			this->dataGridView1->Location = System::Drawing::Point(12, 377);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 5;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(358, 249);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(100, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Таблица коэффициентов";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Тестовая ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Количество шагов";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 664);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 5;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(358, 260);
			this->dataGridView2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(67, 643);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(244, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Таблица для оценки погрешности";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(516, 729);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Справка";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 31);
			this->button2->TabIndex = 8;
			this->button2->Text = L"sin^2(x)/x";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(416, 22);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Точное решение";
			series1->MarkerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->Name = L"Series1";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Сплайн";
			series2->Name = L"Series2";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Legend = L"Legend1";
			series3->LegendText = L"Погрешность сплайна";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1293, 692);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(18, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 22);
			this->textBox2->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Левое граничное условие";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(18, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(92, 22);
			this->textBox3->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Правое граничное условие";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(22, 188);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 20);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Функция";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(128, 188);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(117, 20);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Производная";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(261, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 31);
			this->button3->TabIndex = 16;
			this->button3->Text = L"sin^2(x)/x+cos10x";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(18, 266);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 30);
			this->button4->TabIndex = 17;
			this->button4->Text = L"sqrt(1+x^4)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(253, 266);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 30);
			this->button5->TabIndex = 18;
			this->button5->Text = L"sqrt(1+x^4)+cos10x";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(18, 302);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 30);
			this->button6->TabIndex = 19;
			this->button6->Text = L"(1+x^2)^(1/3)";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(243, 302);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(155, 30);
			this->button7->TabIndex = 20;
			this->button7->Text = L"(1+x^2)^(1/3)+cos10x";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1793, 785);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Построение кубического сплайна";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ but1 = gcnew String("S''(-1)");
		label5->Text = gcnew String(but1);
		String^ but2 = gcnew String("S''(1)");
		label6->Text = gcnew String(but2);
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		chart1->Series[2]->Points->Clear();
		double as = -1;
		double bs = 1;
		int n = System::Convert::ToInt64(textBox1->Text);
		int m1 = System::Convert::ToInt64(textBox2->Text);
		int m2 = System::Convert::ToInt64(textBox3->Text);
		dataGridView1->ColumnCount = 7;
		dataGridView1->RowCount = n + 2;
		dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
		dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
		dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
		dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
		dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
		dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
		dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
		double** s = GrS(4, n, functiona, as, bs, m1, m2);
		double* f1 = f(4 * n, functiona, as, bs);
		double* f2 = f(4 * n, functiona1, as, bs);
		double* a = f(n, functiona, as, bs);
		double* b1 = b(n, functiona, as, bs, m1, m2);
		double* c1 = c(n, functiona, as, bs, m1, m2);
		double* d1 = d(n, functiona, as, bs, m1, m2);
		for (int i = 1; i < n + 1; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
			dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
			dataGridView1->Rows[i]->Cells[3]->Value = a[i];
			dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
			dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
			dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
		}
		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView2->Refresh();
		dataGridView2->ColumnCount = 8;
		dataGridView2->RowCount = 4 * n + 2;
		dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
		dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
		dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
		dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
		dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
		dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
		dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
		double max1 = 0;
		double xm1 = 0;
		double max2 = 0;
		double xm2 = 0;
		for (int i = 1; i < 4 * n + 2; i++) {
			dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
			double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			double y = f1[i - 1];
			double yt = s[0][i - 1];
			double k1 = 0;
			if (i != 4 * n + 1) {
				k1 = f1[i - 1] - s[0][i - 1];
			}
			else {
				k1 = 0;
			}
			if (k1 > max1) {
				max1 = k1;
				xm1 = x;
			}
			dataGridView2->Rows[i]->Cells[2]->Value = y;
			dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
			if (radioButton1->Checked) {
				if (i < 4 * n+1 ) {
					chart1->Series[0]->Points->AddXY(x, yt);					
				}
				chart1->Series[1]->Points->AddXY(x, f1[i - 1] - k1);
			}

			double k2 = 0;
			if (i != 4 * n + 1) {
				k2 = f2[i - 1] - s[1][i - 1];
			}
			else {
				k2 = functiona1(1) - b1[n];
			}

			if (abs(k2) > max2) {
				max2 = abs(k2);
				xm2 = x;
			}
			double y2 = f2[i - 1];
			double yt2 = s[1][i - 1];
			dataGridView2->Rows[i]->Cells[4]->Value = k1;
			dataGridView2->Rows[i]->Cells[5]->Value = y2;
			dataGridView2->Rows[i]->Cells[6]->Value = yt2;
			if (radioButton2->Checked) {
				chart1->Series[0]->Points->AddXY(x, y2);
				chart1->Series[1]->Points->AddXY(x, f2[i - 1] - k2);

			}

			dataGridView2->Rows[i]->Cells[7]->Value = k2;
			if (radioButton1->Checked) {
				chart1->Series[2]->Points->AddXY(x, abs(k1));
			}

			if (radioButton2->Checked) {
				chart1->Series[2]->Points->AddXY(x, abs(k2));
			}

		}

		dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functiona(1);
		dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
		dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
		dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functiona1(1) - b1[n];
		String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
			"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
			"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
			"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
		label4->Text = gcnew String(res);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ but1 = gcnew String("S''(1)");
		label5->Text = gcnew String(but1);
		String^ but2 = gcnew String("S''(пи)");
		label6->Text = gcnew String(but2);
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		chart1->Series[2]->Points->Clear();
		double as = 1;
		double bs = 3.1415926535897932626433832795028841;
		int n = System::Convert::ToInt64(textBox1->Text);
		int m1 = System::Convert::ToInt64(textBox2->Text);
		int m2 = System::Convert::ToInt64(textBox3->Text);
		dataGridView1->ColumnCount = 7;
		dataGridView1->RowCount = n + 2;
		dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
		dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
		dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
		dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
		dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
		dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
		dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
		double** s = GrS(4, n, functionb, as, bs, m1, m2);
		double* f1 = f(4 * n, functionb, as, bs);
		double* f2 = f(4 * n, functionb1, as, bs);
		double* a = f(n, functionb, as, bs);
		double* b1 = b(n, functionb, as, bs, m1, m2);
		double* c1 = c(n, functionb, as, bs, m1, m2);
		double* d1 = d(n, functionb, as, bs, m1, m2);
		for (int i = 1; i < n + 1; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
			dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
			dataGridView1->Rows[i]->Cells[3]->Value = a[i];
			dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
			dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
			dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
		}
		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView2->Refresh();
		dataGridView2->ColumnCount = 8;
		dataGridView2->RowCount = 4 * n + 2;
		dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
		dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
		dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
		dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
		dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
		dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
		dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
		double max1 = 0;
		double xm1 = 0;
		double max2 = 0;
		double xm2 = 0;
		for (int i = 1; i < 4 * n + 2; i++) {
			dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
			double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
			dataGridView2->Rows[i]->Cells[1]->Value = x;
			double y= f1[i - 1];
			double yt = s[0][i - 1];
			double k1 = 0;
			if (i != 4 * n + 1) {
				k1 = f1[i - 1] - s[0][i - 1];
			}
			else {
				k1 = 0;
			}
			if (k1 > max1) {
				max1 = k1;
				xm1 = x;
			}
			dataGridView2->Rows[i]->Cells[2]->Value = y;
			dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
			if (radioButton1->Checked){
				if (i!=4*n+1){			
			    chart1->Series[0]->Points->AddXY(x, yt);}
				chart1->Series[1]->Points->AddXY(x, f1[i - 1] - k1);
			}
			
			double k2 = 0;
			if (i != 4 * n + 1) {
				k2 = f2[i - 1] - s[1][i - 1];
			}
			else {
			 k2 = functionb1(3.1415926535897932384626433832795028841) - b1[n];
			}
			
			if (abs(k2)> max2) {
				max2 = abs(k2);
				xm2 = x;
			}
			double y2= f2[i - 1];
			double yt2= s[1][i - 1];
			dataGridView2->Rows[i]->Cells[4]->Value = k1;
			dataGridView2->Rows[i]->Cells[5]->Value = y2;
			dataGridView2->Rows[i]->Cells[6]->Value = yt2;
			if (radioButton2->Checked) {
				chart1->Series[0]->Points->AddXY(x, y2);
				chart1->Series[1]->Points->AddXY(x, f2[i - 1] - k2);
				
			}
			
			dataGridView2->Rows[i]->Cells[7]->Value = k2;
			if (radioButton1->Checked) {
				chart1->Series[2]->Points->AddXY(x, abs(k1));
			}
			
			if (radioButton2->Checked) {
				chart1->Series[2]->Points->AddXY(x, abs(k2));
			}

		}

		dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functionb(3.1415926535897932384626433832795028841);
		dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
		dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
		dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functionb1(3.1415926535897932384626433832795028841) - b1[n];
		String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
			"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
			"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
			"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
		label4->Text = gcnew String(res);
	}
private: System::Void тестоваяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ but1 = gcnew String("S''(1)");
	label5->Text = gcnew String(but1);
	String^ but2 = gcnew String("S''(пи)");
	label6->Text = gcnew String(but2);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();
	double as = 1;
	double bs = 3.1415926535897932626433832795028841;
	int n = System::Convert::ToInt64(textBox1->Text);
	int m1 = System::Convert::ToInt64(textBox2->Text);
	int m2 = System::Convert::ToInt64(textBox3->Text);
	dataGridView1->ColumnCount = 7;
	dataGridView1->RowCount = n + 2;
	dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
	dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
	dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
	dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
	dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
	dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
	dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
	double** s = GrS(4, n, functionc, as, bs, m1, m2);
	double* f1 = f(4 * n, functionc, as, bs);
	double* f2 = f(4 * n, functionc1, as, bs);
	double* a = f(n, functionc, as, bs);
	double* b1 = b(n, functionc, as, bs, m1, m2);
	double* c1 = c(n, functionc, as, bs, m1, m2);
	double* d1 = d(n, functionc, as, bs, m1, m2);
	for (int i = 1; i < n + 1; i++) {
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
		dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
		dataGridView1->Rows[i]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
		dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
		dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
	}
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->Refresh();
	dataGridView2->ColumnCount = 8;
	dataGridView2->RowCount = 4 * n + 2;
	dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
	dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
	dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
	dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
	dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
	dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
	dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
	double max1 = 0;
	double xm1 = 0;
	double max2 = 0;
	double xm2 = 0;
	for (int i = 1; i < 4 * n + 2; i++) {
		dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
		double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		double y = f1[i - 1];
		double yt = s[0][i - 1];
		double k1 = 0;
		if (i != 4 * n + 1) {
			k1 = f1[i - 1] - s[0][i - 1];
		}
		else {
			k1 = 0;
		}
		if (k1 > max1) {
			max1 = k1;
			xm1 = x;
		}
		dataGridView2->Rows[i]->Cells[2]->Value = y;
		dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
		if (radioButton1->Checked) {
			if (i!=4*n+1){
				chart1->Series[0]->Points->AddXY(x, yt);}
			chart1->Series[1]->Points->AddXY(x, f1[i - 1] - k1);
			
		}

		double k2 = 0;
		if (i != 4 * n + 1) {
			k2 = f2[i - 1] - s[1][i - 1];
		}
		else {
			k2 = functionc1(3.1415926535897932384626433832795028841) - b1[n];
		}

		if (abs(k2) > max2) {
			max2 = abs(k2);
			xm2 = x;
		}
		double y2 = f2[i - 1];
		double yt2 = s[1][i - 1];
		dataGridView2->Rows[i]->Cells[4]->Value = k1;
		dataGridView2->Rows[i]->Cells[5]->Value = y2;
		dataGridView2->Rows[i]->Cells[6]->Value = yt2;
		if (radioButton2->Checked) {
			chart1->Series[0]->Points->AddXY(x, y2);
			chart1->Series[1]->Points->AddXY(x, f2[i - 1] - k2);

		}

		dataGridView2->Rows[i]->Cells[7]->Value = k2;
		if (radioButton1->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k1));
		}
		if (radioButton2->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k2));
		}

	}

	dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functionc(3.1415926535897932384626433832795028841);
	dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
	dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
	dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functionc1(3.1415926535897932384626433832795028841) - b1[n];
	String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
		"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
		"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
		"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
	label4->Text = gcnew String(res);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ but1 = gcnew String("S''(0)");
	label5->Text = gcnew String(but1);
	String^ but2 = gcnew String("S''(1)");
	label6->Text = gcnew String(but2);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();
	double as = 0;
	double bs = 1;
	int n = System::Convert::ToInt64(textBox1->Text);
	int m1 = System::Convert::ToInt64(textBox2->Text);
	int m2 = System::Convert::ToInt64(textBox3->Text);
	dataGridView1->ColumnCount = 7;
	dataGridView1->RowCount = n + 2;
	dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
	dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
	dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
	dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
	dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
	dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
	dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
	double** s = GrS(4, n, functiond, as, bs, m1, m2);
	double* f1 = f(4 * n, functiond, as, bs);
	double* f2 = f(4 * n, functiond1, as, bs);
	double* a = f(n, functiond, as, bs);
	double* b1 = b(n, functiond, as, bs, m1, m2);
	double* c1 = c(n, functiond, as, bs, m1, m2);
	double* d1 = d(n, functiond, as, bs, m1, m2);
	for (int i = 1; i < n + 1; i++) {
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
		dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
		dataGridView1->Rows[i]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
		dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
		dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
	}
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->Refresh();
	dataGridView2->ColumnCount = 8;
	dataGridView2->RowCount = 4 * n + 2;
	dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
	dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
	dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
	dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
	dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
	dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
	dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
	double max1 = 0;
	double xm1 = 0;
	double max2 = 0;
	double xm2 = 0;
	for (int i = 1; i < 4 * n + 2; i++) {
		dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
		double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		double y = s[0][i - 1];
		double yt = functiond(x);
        double k1 = 0;
		if (i != 4 * n + 1) {
			k1 = f1[i - 1] - s[0][i - 1];
		}
		else {
			k1 = 0;
		}
		if (abs(k1) > max1) {
			max1 = abs(k1);
			xm1 = x;
		}
		dataGridView2->Rows[i]->Cells[2]->Value = y;
		dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
		if (radioButton1->Checked) {
			chart1->Series[1]->Points->AddXY(x, f1[i-1]-k1);
			chart1->Series[0]->Points->AddXY(x, yt);
		}

		double k2 = 0;
		if (i != 4 * n + 1) {
			k2 = f2[i - 1] - s[1][i - 1];
		}
		else {
			k2 = functiond1(1) - b1[n];
		}
		if (abs(k2) > max2) {
			max2 = abs(k2);
			xm2 = x;
		}
		double y2 = f2[i - 1];
		double yt2 = s[1][i - 1];
		dataGridView2->Rows[i]->Cells[4]->Value = k1;
		dataGridView2->Rows[i]->Cells[5]->Value = y2;
		dataGridView2->Rows[i]->Cells[6]->Value = yt2;
		if (radioButton2->Checked) {
			chart1->Series[0]->Points->AddXY(x, y2);
			chart1->Series[1]->Points->AddXY(x, f2[i - 1]-k2);

		}
		
		dataGridView2->Rows[i]->Cells[7]->Value = k2;
		if (radioButton1->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k1));
		}
		if (radioButton2->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k2));
		}

	}

	dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functiond(1);
	dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
	dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
	dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functiond(1) - b1[n];
	String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
		"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
		"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
		"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
	label4->Text = gcnew String(res);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ but1 = gcnew String("S''(0)");
	label5->Text = gcnew String(but1);
	String^ but2 = gcnew String("S''(1)");
	label6->Text = gcnew String(but2);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();
	double as = 0;
	double bs = 1;
	int n = System::Convert::ToInt64(textBox1->Text);
	int m1 = System::Convert::ToInt64(textBox2->Text);
	int m2 = System::Convert::ToInt64(textBox3->Text);
	dataGridView1->ColumnCount = 7;
	dataGridView1->RowCount = n + 2;
	dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
	dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
	dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
	dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
	dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
	dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
	dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
	double** s = GrS(4, n, functione, as, bs, m1, m2);
	double* f1 = f(4 * n, functione, as, bs);
	double* f2 = f(4 * n, functione1, as, bs);
	double* a = f(n, functione, as, bs);
	double* b1 = b(n, functione, as, bs, m1, m2);
	double* c1 = c(n, functione, as, bs, m1, m2);
	double* d1 = d(n, functione, as, bs, m1, m2);
	for (int i = 1; i < n + 1; i++) {
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
		dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
		dataGridView1->Rows[i]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
		dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
		dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
	}
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->Refresh();
	dataGridView2->ColumnCount = 8;
	dataGridView2->RowCount = 4 * n + 2;
	dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
	dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
	dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
	dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
	dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
	dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
	dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
	double max1 = 0;
	double xm1 = 0;
	double max2 = 0;
	double xm2 = 0;
	for (int i = 1; i < 4 * n + 2; i++) {
		dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
		double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		double y = f1[i - 1];
		double yt = s[0][i - 1];
		double k1 = 0;
		if (i != 4 * n + 1) {
			k1 = f1[i - 1] - s[0][i - 1];
		}
		else {
			k1 = 0;
		}
		if (k1 > max1) {
			max1 = k1;
			xm1 = x;
		}
		dataGridView2->Rows[i]->Cells[2]->Value = y;
		dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
		if (radioButton1->Checked) {
			if (i != 4 * n + 1) {
				chart1->Series[0]->Points->AddXY(x, yt);
			}
			chart1->Series[1]->Points->AddXY(x, f1[i - 1] - k1);
		}

		double k2 = 0;
		if (i != 4 * n + 1) {
			k2 = f2[i - 1] - s[1][i - 1];
		}
		else {
			k2 = functione1(1) - b1[n];
		}

		if (abs(k2) > max2) {
			max2 = abs(k2);
			xm2 = x;
		}
		double y2 = f2[i - 1];
		double yt2 = s[1][i - 1];
		dataGridView2->Rows[i]->Cells[4]->Value = k1;
		dataGridView2->Rows[i]->Cells[5]->Value = y2;
		dataGridView2->Rows[i]->Cells[6]->Value = yt2;
		if (radioButton2->Checked) {
			chart1->Series[0]->Points->AddXY(x, y2);
			chart1->Series[1]->Points->AddXY(x, f2[i - 1] - k2);

		}

		dataGridView2->Rows[i]->Cells[7]->Value = k2;
		if (radioButton1->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k1));
		}

		if (radioButton2->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k2));
		}

	}

	dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functione(1);
	dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
	dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
	dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functione1(1) - b1[n];
	String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
		"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
		"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
		"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
	label4->Text = gcnew String(res);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ but1 = gcnew String("S''(0)");
	label5->Text = gcnew String(but1);
	String^ but2 = gcnew String("S''(1)");
	label6->Text = gcnew String(but2);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();
	double as = 0;
	double bs = 1;
	int n = System::Convert::ToInt64(textBox1->Text);
	int m1 = System::Convert::ToInt64(textBox2->Text);
	int m2 = System::Convert::ToInt64(textBox3->Text);
	dataGridView1->ColumnCount = 7;
	dataGridView1->RowCount = n + 2;
	dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
	dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
	dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
	dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
	dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
	dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
	dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
	double** s = GrS(4, n, functionf, as, bs, m1, m2);
	double* f1 = f(4 * n, functionf, as, bs);
	double* f2 = f(4 * n, functionf1, as, bs);
	double* a = f(n, functionf, as, bs);
	double* b1 = b(n, functionf, as, bs, m1, m2);
	double* c1 = c(n, functionf, as, bs, m1, m2);
	double* d1 = d(n, functionf, as, bs, m1, m2);
	for (int i = 1; i < n + 1; i++) {
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
		dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
		dataGridView1->Rows[i]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
		dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
		dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
	}
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->Refresh();
	dataGridView2->ColumnCount = 8;
	dataGridView2->RowCount = 4 * n + 2;
	dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
	dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
	dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
	dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
	dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
	dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
	dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
	double max1 = 0;
	double xm1 = 0;
	double max2 = 0;
	double xm2 = 0;
	for (int i = 1; i < 4 * n + 2; i++) {
		dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
		double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		double y = s[0][i - 1];
		double yt = functionf(x);
		double k1 = 0;
		if (i != 4 * n + 1) {
			k1 = f1[i - 1] - s[0][i - 1];
		}
		else {
			k1 = 0;
		}
		if (abs(k1) > max1) {
			max1 = abs(k1);
			xm1 = x;
		}
		dataGridView2->Rows[i]->Cells[2]->Value = y;
		dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
		if (radioButton1->Checked) {
			chart1->Series[1]->Points->AddXY(x, f1[i - 1] - k1);
			chart1->Series[0]->Points->AddXY(x, yt);
		}

		double k2 = 0;
		if (i != 4 * n + 1) {
			k2 = f2[i - 1] - s[1][i - 1];
		}
		else {
			k2 = functionf1(1) - b1[n];
		}
		if (abs(k2) > max2) {
			max2 = abs(k2);
			xm2 = x;
		}
		double y2 = f2[i - 1];
		double yt2 = s[1][i - 1];
		dataGridView2->Rows[i]->Cells[4]->Value = k1;
		dataGridView2->Rows[i]->Cells[5]->Value = y2;
		dataGridView2->Rows[i]->Cells[6]->Value = yt2;
		if (radioButton2->Checked) {
			chart1->Series[0]->Points->AddXY(x, y2);
			chart1->Series[1]->Points->AddXY(x, f2[i - 1] - k2);

		}

		dataGridView2->Rows[i]->Cells[7]->Value = k2;
		if (radioButton1->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k1));
		}
		if (radioButton2->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k2));
		}

	}

	dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functionf(1);
	dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
	dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
	dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functionf(1) - b1[n];
	String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
		"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
		"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
		"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
	label4->Text = gcnew String(res);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ but1 = gcnew String("S''(0)");
	label5->Text = gcnew String(but1);
	String^ but2 = gcnew String("S''(1)");
	label6->Text = gcnew String(but2);
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();
	double as = 0;
	double bs = 1;
	int n = System::Convert::ToInt64(textBox1->Text);
	int m1 = System::Convert::ToInt64(textBox2->Text);
	int m2 = System::Convert::ToInt64(textBox3->Text);
	dataGridView1->ColumnCount = 7;
	dataGridView1->RowCount = n + 2;
	dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("i");
	dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x(i-1)");
	dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("x(i)");
	dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("a");
	dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("b");
	dataGridView1->Rows[0]->Cells[5]->Value = gcnew String("c");
	dataGridView1->Rows[0]->Cells[6]->Value = gcnew String("d");
	double** s = GrS(4, n, functiong, as, bs, m1, m2);
	double* f1 = f(4 * n, functiong, as, bs);
	double* f2 = f(4 * n, functiong1, as, bs);
	double* a = f(n, functiong, as, bs);
	double* b1 = b(n, functiong, as, bs, m1, m2);
	double* c1 = c(n, functiong, as, bs, m1, m2);
	double* d1 = d(n, functiong, as, bs, m1, m2);
	for (int i = 1; i < n + 1; i++) {
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = as + (bs - as) * 1. * (i - 1) / n;
		dataGridView1->Rows[i]->Cells[2]->Value = as + (bs - as) * 1. * i / n;
		dataGridView1->Rows[i]->Cells[3]->Value = a[i];
		dataGridView1->Rows[i]->Cells[4]->Value = b1[i];
		dataGridView1->Rows[i]->Cells[5]->Value = c1[i];
		dataGridView1->Rows[i]->Cells[6]->Value = d1[i];
	}
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView2->Refresh();
	dataGridView2->ColumnCount = 8;
	dataGridView2->RowCount = 4 * n + 2;
	dataGridView2->Rows[0]->Cells[0]->Value = gcnew String("j");
	dataGridView2->Rows[0]->Cells[1]->Value = gcnew String("x");
	dataGridView2->Rows[0]->Cells[2]->Value = gcnew String("F(x)");
	dataGridView2->Rows[0]->Cells[3]->Value = gcnew String("S(x)");
	dataGridView2->Rows[0]->Cells[4]->Value = gcnew String("F(x)-S(x)");
	dataGridView2->Rows[0]->Cells[5]->Value = gcnew String("F'(x)");
	dataGridView2->Rows[0]->Cells[6]->Value = gcnew String("S'(x)");
	dataGridView2->Rows[0]->Cells[7]->Value = gcnew String("F'(x)-S'(x)");
	double max1 = 0;
	double xm1 = 0;
	double max2 = 0;
	double xm2 = 0;
	for (int i = 1; i < 4 * n + 2; i++) {
		dataGridView2->Rows[i]->Cells[0]->Value = i - 1;
		double x = as + (bs - as) * 1. * (i - 1) / (4 * n);
		dataGridView2->Rows[i]->Cells[1]->Value = x;
		double y = f1[i - 1];
		double yt = s[0][i - 1];
		double k1 = 0;
		if (i != 4 * n + 1) {
			k1 = f1[i - 1] - s[0][i - 1];
		}
		else {
			k1 = 0;
		}
		if (k1 > max1) {
			max1 = k1;
			xm1 = x;
		}
		dataGridView2->Rows[i]->Cells[2]->Value = y;
		dataGridView2->Rows[i]->Cells[3]->Value = s[0][i - 1];
		if (radioButton1->Checked) {
			if (i != 4 * n + 1) {
				chart1->Series[0]->Points->AddXY(x, yt);
			}
			chart1->Series[1]->Points->AddXY(x, f1[i - 1] - k1);
		}

		double k2 = 0;
		if (i != 4 * n + 1) {
			k2 = f2[i - 1] - s[1][i - 1];
		}
		else {
			k2 = functiong1(1) - b1[n];
		}

		if (abs(k2) > max2) {
			max2 = abs(k2);
			xm2 = x;
		}
		double y2 = f2[i - 1];
		double yt2 = s[1][i - 1];
		dataGridView2->Rows[i]->Cells[4]->Value = k1;
		dataGridView2->Rows[i]->Cells[5]->Value = y2;
		dataGridView2->Rows[i]->Cells[6]->Value = yt2;
		if (radioButton2->Checked) {
			chart1->Series[0]->Points->AddXY(x, y2);
			chart1->Series[1]->Points->AddXY(x, f2[i - 1] - k2);

		}

		dataGridView2->Rows[i]->Cells[7]->Value = k2;
		if (radioButton1->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k1));
		}

		if (radioButton2->Checked) {
			chart1->Series[2]->Points->AddXY(x, abs(k2));
		}

	}

	dataGridView2->Rows[4 * n + 1]->Cells[3]->Value = functiong(1);
	dataGridView2->Rows[4 * n + 1]->Cells[4]->Value = 0;
	dataGridView2->Rows[4 * n + 1]->Cells[6]->Value = b1[n];
	dataGridView2->Rows[4 * n + 1]->Cells[7]->Value = functiong1(1) - b1[n];
	String^ res = gcnew String("Сетка сплайна: n=" + System::Convert::ToString(n) +
		"\nКонтрольная сетка: N= " + System::Convert::ToString(4 * n) +
		"\nПогрешность сплайна на контрольной сетке: " + System::Convert::ToString(max1) + " при x=" + System::Convert::ToString(xm1) +
		"\nПогрешность производной сплайна на контрольной сетке:" + System::Convert::ToString(max2) + " при x=" + System::Convert::ToString(xm2));
	label4->Text = gcnew String(res);
}
};
	}

	