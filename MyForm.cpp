#include "MyForm.h"
#include"Functions.h"
#include <windows.h>
#include<math.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;



[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	vklad::MyForm form;
	Application::Run(% form);

}

System::Void vklad::MyForm::оѕрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("ѕриложение, в котором вы можете спрогнозировать свой вклад.", "»нформаци€ о приложении");
}

Void vklad::MyForm::Eefrash() {


	if (checkBox4->Checked) {
		
		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
	
		

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar2->Value * 100), 1)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar2->Value * 100), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar2->Value * 100), 1.5) - (trackBar2->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingEuro((trackBar2->Value * 100), 1)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingEuro((trackBar2->Value * 100), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((trackBar2->Value * 100), 1.5) - (trackBar2->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}
}

Void vklad::MyForm::Defrash() {

	

	if (checkBox4->Checked) {

		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 6)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 1)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}

}

void vklad::MyForm::efrash() {

	if (checkBox4->Checked) {


		textBox1->Text = Convert::ToString((trackBar2->Value) * 1000);
		textBox3->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 4)) + " р";
		textBox4->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 4) - (trackBar2->Value) * 1000) + " р";
		textBox5->Text = Convert::ToString(returnProcentPensia((trackBar2->Value * 1000), 4)) + "%";

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(4) + " мес€ца";
			textBox3->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 4)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 4) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((trackBar2->Value * 1000), 4)) + "%";
		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 6)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 6) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((trackBar2->Value * 1000), 6)) + "%";
		}
		if (trackBar1->Value == 3) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 1)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 1) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((trackBar2->Value * 1000), 1)) + "%";
		}
		if (trackBar1->Value == 4) {

			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 1.5)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 1.5) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((trackBar2->Value * 1000), 1.5)) + "%";
		}
		if (trackBar1->Value == 5) {

			textBox2->Text = Convert::ToString(2) + " года";
			textBox3->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 2)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((trackBar2->Value * 1000), 2) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((trackBar2->Value * 1000), 2)) + "%";
		}
	}

	else {

		textBox1->Text = Convert::ToString((trackBar2->Value) * 1000);
		
		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(4) + " мес€ца";
			textBox3->Text = Convert::ToString(counting((trackBar2->Value * 1000), 4)) + " р";
			textBox4->Text = Convert::ToString(counting((trackBar2->Value * 1000), 4) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcent((trackBar2->Value * 1000), 4)) + "%";
		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(counting((trackBar2->Value * 1000), 6)) + " р";
			textBox4->Text = Convert::ToString(counting((trackBar2->Value * 1000), 6) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcent((trackBar2->Value * 1000), 6)) + "%";
		}
		if (trackBar1->Value == 3) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(counting((trackBar2->Value * 1000), 1)) + " р";
			textBox4->Text = Convert::ToString(counting((trackBar2->Value * 1000), 1) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcent((trackBar2->Value * 1000), 1)) + "%";
		}
		if (trackBar1->Value == 4) {

			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(counting((trackBar2->Value * 1000), 1.5)) + " р";
			textBox4->Text = Convert::ToString(counting((trackBar2->Value * 1000), 1.5) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcent((trackBar2->Value * 1000), 1.5)) + "%";
		}
		if (trackBar1->Value == 5) {

			textBox2->Text = Convert::ToString(2) + " года";
			textBox3->Text = Convert::ToString(counting((trackBar2->Value * 1000), 2)) + " р";
			textBox4->Text = Convert::ToString(counting((trackBar2->Value * 1000), 2) - (trackBar2->Value) * 1000) + " р";
			textBox5->Text = Convert::ToString(returnProcent((trackBar2->Value * 1000), 2)) + "%";
		}

	}
}

void vklad::MyForm::efrashnumeric() {

	if (checkBox4->Checked) {

		if (numericUpDown1->Value > 200000000 || numericUpDown1->Value > 9223372036854775807) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}


		if (numericUpDown1->Value <= 7000000) {

			trackBar2->Value = (int)(numericUpDown1->Value) / 1000;
			textBox1->Text = Convert::ToString((trackBar2->Value) * 1000);
		}

		textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 4)) + " р";
		textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 4) - (trackBar2->Value) * 1000) + " р";
		textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 4)) + "%";

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(4) + " мес€ца";
			textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 4)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 4) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 4)) + "%";
		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 6)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 6) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 6)) + "%";
		}
		if (trackBar1->Value == 3) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 1)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 1) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 1)) + "%";
		}
		if (trackBar1->Value == 4) {

			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 1.5)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 1.5) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 1.5)) + "%";
		}
		if (trackBar1->Value == 5) {

			textBox2->Text = Convert::ToString(2) + " года";
			textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 2)) + " р";
			textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 2) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 2)) + "%";
		}
	}

	else {

		if (numericUpDown1->Value <= 7000000) {
			trackBar2->Value = (int)(numericUpDown1->Value) / 1000;
			textBox1->Text = Convert::ToString((trackBar2->Value) * 1000);
		} 

		if (numericUpDown1->Value > 200000000) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(4) + " мес€ца";
			textBox3->Text = Convert::ToString(counting(( int)(numericUpDown1->Value), 4)) + " р";
			textBox4->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 4) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcent((int)(numericUpDown1->Value), 4)) + "%";
		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 6)) + " р";
			textBox4->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 6) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcent((int)(numericUpDown1->Value), 6)) + "%";
		}
		if (trackBar1->Value == 3) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 1)) + " р";
			textBox4->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 1) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcent((int)(numericUpDown1->Value), 1)) + "%";
		}
		if (trackBar1->Value == 4) {

			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 1.5)) + " р";
			textBox4->Text = Convert::ToString(counting((int)(numericUpDown1->Value), 1.5) - (int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcent((int)(numericUpDown1->Value), 1.5)) + "%";
		}
		if (trackBar1->Value == 5) {

			textBox2->Text = Convert::ToString(2) + " года";
			textBox3->Text = Convert::ToString(counting(( int)(numericUpDown1->Value), 2)) + " р";
			textBox4->Text = Convert::ToString(counting(( int)(numericUpDown1->Value), 2) - ( int)(numericUpDown1->Value)) + " р";
			textBox5->Text = Convert::ToString(returnProcent(( int)(numericUpDown1->Value), 2)) + "%";
		}

	}

}

Void vklad::MyForm::Defrashnumeric() {
		
	if (checkBox4->Checked) {

		if (numericUpDown1->Value <= 500000) {

			trackBar2->Value = (int)(numericUpDown1->Value) / 100;
			textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		}

		if (numericUpDown1->Value > 200000000 || numericUpDown1->Value > 9223372036854775807) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}

		textBox3->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 4)) + " р";
		textBox4->Text = Convert::ToString(countingForPensioners((int)(numericUpDown1->Value), 4) - (numericUpDown1->Value) * 100) + " р";
		textBox5->Text = Convert::ToString(returnProcentPensia((int)(numericUpDown1->Value), 4)) + "%";

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((int)(numericUpDown1->Value), 6)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((int)(numericUpDown1->Value), 6) - (int)(numericUpDown1->Value)) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((int)(numericUpDown1->Value), 1)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((int)(numericUpDown1->Value), 1) - (int)(numericUpDown1->Value)) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		if (numericUpDown1->Value <= 500000) {
			trackBar2->Value = (int)(numericUpDown1->Value) / 100;
			textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		}

		if (numericUpDown1->Value > 200000000 || numericUpDown1->Value > 9223372036854775807) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		} 

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " мес€цев";
			textBox3->Text = Convert::ToString(countingDollar((int)(numericUpDown1->Value), 6)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((int)(numericUpDown1->Value), 6) - (int)(numericUpDown1->Value)) + " $";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingDollar((int)(numericUpDown1->Value), 1)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((int)(numericUpDown1->Value), 1) - (int)(numericUpDown1->Value)) + " $";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}

}

Void vklad::MyForm::Eefrashnumeric() {


	if (checkBox4->Checked) {

		if (numericUpDown1->Value <= 500000) {

			trackBar2->Value = (int)(numericUpDown1->Value) / 100;
			textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		}

		if (numericUpDown1->Value > 200000000 || numericUpDown1->Value  > 9223372036854775807) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((int)(numericUpDown1->Value), 1)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((int)(numericUpDown1->Value), 1) - (int)(numericUpDown1->Value)) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((int)(numericUpDown1->Value), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((int)(numericUpDown1->Value), 1.5) - (int)(numericUpDown1->Value)) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		if (numericUpDown1->Value <= 500000) {

			trackBar2->Value = (int)(numericUpDown1->Value) / 100;
			textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		}

		if (numericUpDown1->Value > 200000000 || numericUpDown1->Value > 9223372036854775807) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingEuro((int)(numericUpDown1->Value), 1)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((int)(numericUpDown1->Value), 1) - (int)(numericUpDown1->Value)) + " И";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingEuro((int)(numericUpDown1->Value), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((int)(numericUpDown1->Value), 1.5) - (int)(numericUpDown1->Value)) + " И";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}

}


System::Void vklad::MyForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{


	if (checkBox1->Checked) {

		numericUpDown1->Value = 10000;

		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox1->Enabled = false;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		

		this->trackBar1->LargeChange = 1;
		this->trackBar1->Maximum = 5;
		this->trackBar1->Minimum = 1;
		this->trackBar1->TabIndex = 1;
		this->trackBar1->Value = 1;
		
		
		
		this->trackBar2->LargeChange = 700;
		this->trackBar2->Maximum = 7000;
		this->trackBar2->Minimum = 10;
		this->trackBar2->TabIndex = 22;
		this->trackBar2->TickFrequency = 699;
		trackBar2->Value = trackBar2->Minimum;
		textBox1->Text = Convert::ToString((trackBar2->Value) * 1000);

		this->textBox3->Text = L"10134 р";

		this->textBox5->ReadOnly = true;
		this->textBox5->Text = L"4%";

		this->textBox4->Text = L"134 р";


		textBox2->Text = "4 мес€ца";

		label9->Text = "10000";
		label10->Text = "7000000";
		label15->Text = "4 мес";
		label11->Text = "2 года";
		label14->Show();
		label13->Show();
		label12->Show();

		vklad::MyForm::efrash();

		if (numericUpDown1->Visible) linkLabel1->Text = "—крыть";
		else 	linkLabel1->Text = "’отите вложить больше 7млн ?";


	}

	
	
}

System::Void vklad::MyForm::linkLabel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	numericUpDown1->Show();
	numericUpDown1->Controls[0]->Hide();
	label16->Show();
	linkLabel1->Text = "—крыть";

	/*if (checkBox2->Checked) {
		linkLabel1->Text = "—крыть";
		if (numericUpDown1->Value > 10000)  vklad::MyForm::Defrashnumeric();
		vklad::MyForm::Defrash();

	}
	if (checkBox1->Checked) {
		linkLabel1->Text = "—крыть";
		if (numericUpDown1->Value > 10000)  vklad::MyForm::efrashnumeric();
		else vklad::MyForm::efrash();

	}
	if (checkBox3->Checked) {
		linkLabel1->Text = "—крыть";
		if (numericUpDown1->Value > 10000)  vklad::MyForm::Eefrashnumeric();
		vklad::MyForm::Eefrash();

	}*/
}

System::Void vklad::MyForm::linkLabel1_DoubleClick(System::Object^ sender, System::EventArgs^ e)
{
	numericUpDown1->Hide();
	label16->Hide();
	if (checkBox2->Checked) {
	
		linkLabel1->Text = "’отите вложить больше 500тыс ?";
		vklad::MyForm::Defrash();
		numericUpDown1->Value = 10000;
	} 
	if (checkBox1->Checked) {
	
		linkLabel1->Text = "’отите вложить больше 7млн ?";
		vklad::MyForm::efrash();
		numericUpDown1->Value = 10000;
	} 
	if (checkBox3->Checked) {
	
		linkLabel1->Text = "’отите вложить больше 500тыс ?";
		vklad::MyForm::Eefrash();
		numericUpDown1->Value = 10000;
	
	} 
}

System::Void vklad::MyForm::numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	
	if (checkBox2->Checked) {

		//numericUpDown1->Value = 10000;

		if (numericUpDown1->Value > 200000000) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}

		if (numericUpDown1->Value > 10000)  vklad::MyForm::Defrashnumeric();
		else vklad::MyForm::Defrash();

	}
	if (checkBox1->Checked) {

		//numericUpDown1->Value = 10000;

		if (numericUpDown1->Value > 200000000) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}

		if (numericUpDown1->Value > 10000)  vklad::MyForm::efrashnumeric();
		else vklad::MyForm::efrash();

	}
	if (checkBox3->Checked) {

		//numericUpDown1->Value = 10000;

		if (numericUpDown1->Value > 200000000) {

			MessageBox::Show(this, "¬ведено слишком большое число", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			numericUpDown1->Value = 200000000;

		}
		if (numericUpDown1->Value > 10000)  vklad::MyForm::Eefrashnumeric();
		else vklad::MyForm::Eefrash();

	}

}

System::Void vklad::MyForm::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	


	if (checkBox2->Checked) {
		
		numericUpDown1->Value = 10000;

		checkBox2->Enabled = false;
		if (checkBox1->Checked == true) checkBox1->Checked = false;
		if (checkBox3->Checked == true) checkBox3->Checked = false;
		checkBox1->Enabled = true;
		checkBox3->Enabled = true;


		trackBar2->Value = 100;
		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);

		this->trackBar2->LargeChange = 490;
		this->trackBar2->Maximum = 5000;
		this->trackBar2->Minimum = 100;
		this->trackBar2->TabIndex = 22;
		this->trackBar2->TickFrequency = 490;
		this->trackBar2->Value = 100;


		this->trackBar1->Maximum = 2;
		this->trackBar1->Minimum = 1;
		this->trackBar1->TabIndex = 1;
		this->trackBar1->Value = 1;

		textBox2->Text = "1 год";
		textBox3->Text = "10000 $";
		textBox4->Text = "0 $";
		textBox5->Text = "0.01%";

		label9->Text = "10000";
		label10->Text = "50000";
		label15->Text = "6 мес€цев";
		label11->Text = "1 год";

		label14->Hide();
		label13->Hide();
		label12->Hide();

		vklad::MyForm::Defrash();

		if (numericUpDown1->Visible) linkLabel1->Text = "—крыть";
		else linkLabel1->Text = "’отите вложить больше 500тыс ?";
	}	
}

System::Void vklad::MyForm::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	

	if (checkBox3->Checked) {
		checkBox3->Enabled = false;
		
		numericUpDown1->Value = 10000;

		if (checkBox1->Checked == true) checkBox1->Checked = false;
		if (checkBox2->Checked == true) checkBox2->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		

		trackBar2->Value = 100;
		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);

		this->trackBar2->LargeChange = 490;
		this->trackBar2->Maximum = 5000;
		this->trackBar2->Minimum = 100;
		this->trackBar2->TabIndex = 22;
		this->trackBar2->TickFrequency = 490;
		this->trackBar2->Value = 100;

		this->trackBar1->Maximum = 2;
		this->trackBar1->Minimum = 1;
		this->trackBar1->TabIndex = 1;
		this->trackBar1->Value = 1;

		textBox2->Text = "1 год";
		this->textBox5->Text = L"0,01%";
		this->textBox4->Text = L"1 И";
		this->textBox3->Text = L"10001 И";

		this->label10->Text = L"500000";

		label11->Text = "1,5 года";
		label15->Text = "1 год";
		label14->Hide();
		label13->Hide();
		label12->Hide();

		vklad::MyForm::Eefrash();
		if(numericUpDown1->Visible) linkLabel1->Text = "—крыть";
		else linkLabel1->Text = "’отите вложить больше 500тыс ?";
	}
}


System::Void vklad::MyForm::trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox2->Checked) vklad::MyForm::Defrash();
	if (checkBox1->Checked) vklad::MyForm::efrash();
	if (checkBox3->Checked) vklad::MyForm::Eefrash();
	
}

System::Void vklad::MyForm::trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)
{   

	if (checkBox2->Checked) {
	
		if (numericUpDown1->Value > 10000)  vklad::MyForm::Defrashnumeric();
		else vklad::MyForm::Defrash();

	} 
	if (checkBox1->Checked) {

		if (numericUpDown1->Value > 10000)  vklad::MyForm::efrashnumeric();
	    else vklad::MyForm::efrash();

	} 
	if (checkBox3->Checked) {
	
		if (numericUpDown1->Value > 10000)  vklad::MyForm::Eefrashnumeric();
		else vklad::MyForm::Eefrash();
	
	} 

}

System::Void vklad::MyForm::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{

	if (checkBox2->Checked) {

		if (numericUpDown1->Value > 10000)  vklad::MyForm::Defrashnumeric();
		else vklad::MyForm::Defrash();

	}
	if (checkBox1->Checked) {

		if (numericUpDown1->Value > 10000)  vklad::MyForm::efrashnumeric();
		else vklad::MyForm::efrash();

	}
	if (checkBox3->Checked) {

		if (numericUpDown1->Value > 10000)  vklad::MyForm::Eefrashnumeric();
		else vklad::MyForm::Eefrash();

	}

	}

System::Void vklad::MyForm::помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("„тобы использовать повышенную ставку дл€ пенсионеров, сначала выберите услови€, а после поставьте галочку р€дом с соответствующим полем.", "ѕомощь");
}
