#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void z()
{
  // Main Circuit
  outtextxy(90,95,"+") ;
  line(100,100,150,100) ;
  outtextxy(80,150,"V1")  ;
  outtextxy(125,97,">") ;
  outtextxy(123,87,"I1") ;
  //The Box
  outtextxy(157,80,"Z11") ;
  rectangle(150,90,175,110) ;
  // Main Circut Conitnued
  line(175,100,225,100) ;
  line(225,100,225,150) ;
  // Voltage Source
  outtextxy(150,170,"Z12xI2") ;
  line(225,150,205,170) ;
  line(205,170,225,190) ;
  outtextxy(223,157,"+") ;
  outtextxy(223,177,"-") ;
  line(225,190,245,170) ;
  line(245,170,225,150) ;
  // Main Circuit Continued ..
  line(225,190,225,200) ;
  line(100,200,225,200) ;
  outtextxy(90,195,"-") ;
  // Line Between 2
  line(225,200,350,200) ;
  //Main Circuit conti
  line(350,200,350,190) ;
  line(350,200,475,200) ;
  outtextxy(485,195,"-") ;
  //Voltage Source 2
  outtextxy(375,170,"Z21xI1") ;
  line(350,150,330,170) ;
  line(330,170,350,190) ;
  outtextxy(347,157,"+") ;
  outtextxy(347,177,"-") ;
  line(350,190,370,170) ;
  line(370,170,350,150) ;
  // Main Circuit
  line(400,100,350,100) ;
  line(350,100,350,150) ;
  // Box
  outtextxy(407,80,"Z22") ;
  rectangle(400,90,425,110) ;
  //Remaining Circuit
  line(425,100,475,100) ;
  outtextxy(485,95,"+") ;
  outtextxy(485,150,"V2")  ;
  outtextxy(450,97,"<") ;
  outtextxy(447,87,"I2") ;
}
void y()
{
	// Main Ciruit
  outtextxy(90,95,"+") ;
  line(150,100,150,140) ;
  outtextxy(80,150,"V1")  ;
  outtextxy(125,97,">") ;
  outtextxy(123,87,"I1") ;
  //The Box
  outtextxy(140,150,"Y11") ;
  rectangle(135,140,165,160) ;
  // Main Circut Conitnued
  line(150,160,150,200) ;
  line(100,100,225,100) ;
  line(225,100,225,150) ;
  // Voltage Source
  outtextxy(155,170,"Y12xV2") ;
  line(225,150,205,170) ;
  line(205,170,225,190) ;
  outtextxy(222.5,178,"v") ;
  line(225,160,225,185) ;
  line(225,190,245,170) ;
  line(245,170,225,150) ;
  // Main Circuit Continued ..
  line(225,190,225,200) ;
  line(100,200,225,200) ;
  outtextxy(90,195,"-") ;
  // Line Between 2
  line(225,200,350,200) ;
  //Main Circuit conti
  line(350,200,350,190) ;
  line(350,200,475,200) ;
  outtextxy(485,195,"-") ;
  //Voltage Source 2
  outtextxy(370,170,"Y21xV1") ;
  line(350,150,330,170) ;
  line(330,170,350,190) ;
  outtextxy(347.5,178,"v") ;
  line(350,160,350,185) ;
  line(350,190,370,170) ;
  line(370,170,350,150) ;
  // Main Circuit
  line(475,100,350,100) ;
  line(350,100,350,150) ;
  line(420,160,420,200) ;
  // Box
  outtextxy(410,150,"Y22") ;
  rectangle(405,140,435,160) ;
  //Remaining Circuit
  line(420,100,420,140) ;
  outtextxy(485,95,"+") ;
  outtextxy(485,150,"V2")  ;
  outtextxy(450,97,"<") ;
  outtextxy(447,87,"I2") ;
}
void h()
{
	// Main Circuit
  outtextxy(90,95,"+") ;
  line(100,100,150,100) ;
  outtextxy(80,150,"V1")  ;
  outtextxy(125,97,">") ;
  outtextxy(123,87,"I1") ;
  //The Box
  outtextxy(157,80,"h11") ;
  rectangle(150,90,175,110) ;
  // Main Circut Conitnued
  line(175,100,225,100) ;
  line(225,100,225,150) ;
  // Voltage Source
  outtextxy(150,170,"h12xV2") ;
  line(225,150,205,170) ;
  line(205,170,225,190) ;
  outtextxy(223,157,"+") ;
  outtextxy(223,177,"-") ;
  line(225,190,245,170) ;
  line(245,170,225,150) ;
  // Main Circuit Continued ..
  line(225,190,225,200) ;
  line(100,200,225,200) ;
  outtextxy(90,195,"-") ;
  // Line Between 2
  line(225,200,350,200) ;
  //Main Circuit conti
  line(350,200,350,190) ;
  line(350,200,475,200) ;
  outtextxy(485,195,"-") ;
  //Voltage Source 2
  outtextxy(370,170,"h21xV1") ;
  line(350,150,330,170) ;
  line(330,170,350,190) ;
  outtextxy(347.5,178,"v") ;
  line(350,160,350,185) ;
  line(350,190,370,170) ;
  line(370,170,350,150) ;
  // Main Circuit
  line(475,100,350,100) ;
  line(350,100,350,150) ;
  line(420,160,420,200) ;
  // Box
  outtextxy(410,150,"h22") ;
  rectangle(405,140,435,160) ;
  //Remaining Circuit
  line(420,100,420,140) ;
  outtextxy(485,95,"+") ;
  outtextxy(485,150,"V2")  ;
  outtextxy(450,97,"<") ;
  outtextxy(447,87,"I2") ;
}
void g()
{
	// Main Ciruit
  outtextxy(90,95,"+") ;
  line(150,100,150,140) ;
  outtextxy(80,150,"V1")  ;
  outtextxy(125,97,">") ;
  outtextxy(123,87,"I1") ;
  //The Box
  outtextxy(140,150,"g11") ;
  rectangle(135,140,165,160) ;
  // Main Circut Conitnued
  line(150,160,150,200) ;
  line(100,100,225,100) ;
  line(225,100,225,150) ;
  // Voltage Source
  outtextxy(155,170,"g12xI2") ;
  line(225,150,205,170) ;
  line(205,170,225,190) ;
  outtextxy(222.5,178,"v") ;
  line(225,160,225,185) ;
  line(225,190,245,170) ;
  line(245,170,225,150) ;
  // Main Circuit Continued ..
  line(225,190,225,200) ;
  line(100,200,225,200) ;
  outtextxy(90,195,"-") ;
  // Line Between 2
  line(225,200,350,200) ;
  //Main Circuit conti
  line(350,200,350,190) ;
  line(350,200,475,200) ;
  outtextxy(485,195,"-") ;
  //Voltage Source 2
  outtextxy(375,170,"g21xV1") ;
  line(350,150,330,170) ;
  line(330,170,350,190) ;
  outtextxy(347,157,"+") ;
  outtextxy(347,177,"-") ;
  line(350,190,370,170) ;
  line(370,170,350,150) ;
  // Main Circuit
  line(400,100,350,100) ;
  line(350,100,350,150) ;
  // Box
  outtextxy(407,80,"g22") ;
  rectangle(400,90,425,110) ;
  //Remaining Circuit
  line(425,100,475,100) ;
  outtextxy(485,95,"+") ;
  outtextxy(485,150,"V2")  ;
  outtextxy(450,97,"<") ;
  outtextxy(447,87,"I2") ;
}
void tdash()
{
	// Main Circuit
  outtextxy(90,95,"+") ;
  line(100,100,150,100) ;
  outtextxy(80,150,"V1")  ;
  outtextxy(125,97,">") ;
  outtextxy(123,87,"I1") ;
  //The Box
  outtextxy(160,70,"-D'xI1") ;
  line(150,100,170,80) ;
  line(170,80,190,100) ;
  outtextxy(160,97,"<") ;
  line(160,100,180,100) ;
  line(190,100,170,120) ;
  line(170,120,150,100) ;
  // Main Circut Conitnued
  line(190,100,225,100) ;
  line(225,100,225,150) ;
  // Voltage Source
  outtextxy(165,170,"B'xI2") ;
  line(225,150,205,170) ;
  line(205,170,225,190) ;
  outtextxy(223,157,"+") ;
  outtextxy(223,177,"-") ;
  line(225,190,245,170) ;
  line(245,170,225,150) ;
  // Main Circuit Continued ..
  line(225,190,225,200) ;
  line(100,200,225,200) ;
  outtextxy(90,195,"-") ;
  // Line Between 2
  line(225,200,350,200) ;
  //Main Circuit conti
  line(350,200,350,190) ;
  line(350,200,475,200) ;
  outtextxy(485,195,"-") ;
  //Voltage Source 2
  outtextxy(375,170,"A'xV2") ;
  line(350,150,330,170) ;
  line(330,170,350,190) ;
  outtextxy(347,157,"+") ;
  outtextxy(347,177,"-") ;
  line(350,190,370,170) ;
  line(370,170,350,150) ;
  // Main Circuit
  line(400,100,350,100) ;
  line(350,100,350,150) ;
  // Box
  outtextxy(410,70,"-C'xV1") ;
  line(400,100,420,120) ;
  line(420,120,440,100) ;
  outtextxy(410,97,"<") ;
  line(410,100,430,100) ;
  line(440,100,420,80) ;
  line(420,80,400,100) ;
  //Remaining Circuit
  line(440,100,475,100) ;
  outtextxy(485,95,"+") ;
  outtextxy(485,150,"V2")  ;
  outtextxy(450,97,"<") ;
  outtextxy(447,87,"I2") ;
}
void t()
{
	// Main Circuit
  outtextxy(90,95,"+") ;
  line(100,100,150,100) ;
  outtextxy(80,150,"V1")  ;
  outtextxy(125,97,">") ;
  outtextxy(123,87,"I1") ;
  //The Box
  outtextxy(160,70,"-DxI2") ;
  line(150,100,170,80) ;
  line(170,80,190,100) ;
  outtextxy(160,97,"<") ;
  line(160,100,180,100) ;
  line(190,100,170,120) ;
  line(170,120,150,100) ;
  // Main Circut Conitnued
  line(190,100,225,100) ;
  line(225,100,225,150) ;
  // Voltage Source
  outtextxy(165,170,"AxV2") ;
  line(225,150,205,170) ;
  line(205,170,225,190) ;
  outtextxy(223,157,"+") ;
  outtextxy(223,177,"-") ;
  line(225,190,245,170) ;
  line(245,170,225,150) ;
  // Main Circuit Continued ..
  line(225,190,225,200) ;
  line(100,200,225,200) ;
  outtextxy(90,195,"-") ;
  // Line Between 2
  line(225,200,350,200) ;
  //Main Circuit conti
  line(350,200,350,190) ;
  line(350,200,475,200) ;
  outtextxy(485,195,"-") ;
  //Voltage Source 2
  outtextxy(373,170,"CxV2") ;
  line(350,150,330,170) ;
  line(330,170,350,190) ;
  outtextxy(347.5,178,"v") ;
  line(350,160,350,185) ;
  line(350,190,370,170) ;
  line(370,170,350,150) ;
  // Main Circuit
  line(400,100,350,100) ;
  line(440,100,475,100) ;
  line(350,100,350,150) ;
  // Box
  outtextxy(410,70,"-BxI2") ;
  line(400,100,420,120) ;
  line(420,120,440,100) ;
  outtextxy(410,97,"-") ;
  outtextxy(430,97,"+") ;
  line(440,100,420,80) ;
  line(420,80,400,100) ;
  //Remaining Circuit
  outtextxy(485,95,"+") ;
  outtextxy(485,150,"V2")  ;
  outtextxy(450,97,"<") ;
  outtextxy(447,87,"I2") ;
}
void main()
{
    int choice;
    float I1,I2,V1,V2;
    char ch;
    do
    {
	int gd=DETECT, gm ;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI") ;
		cout <<"************** TYPES OF CIRCUIT PARAMETERS ******************\n";
		cout <<"1.Z-PARAMETER\t";
		cout <<"2.Y-PARAMETER\n";
		cout <<"3.T-PARAMETER\t";
		cout <<"4.T'-PARAMETER\n";
		cout <<"5.H-PARAMETER\t";
		cout <<"6.G-PARAMETER\n";
		cout <<"ENTER YOUR CHOICE: ";
		cin >> choice;
	switch(choice)
	{
	    case 1:
	    {
		float Z11,Z12,Z21,Z22;
		    z() ;
		    cout<<"\n\n\n\n\n\n\n\n" ;
		    cout<<"******** Z-PARAMETERS OR IMPEDANCE PARAMETERS ********\n";
		    cout<<" \t\t V1 = Z11*I1 + Z12*I2 \t\t\t\t\n ";
		    cout<<" \t\t V2 = Z21*I1 + Z22*I2 \t\t\t\t\n\n";
		    cout<<"FOR CALCULATING Z12 AND Z22 PUT I1=0\n";
		    cout<<"FOR CALCULATING Z21 AND Z11 PUT I2=0\n\n";

		    cout<<"Enter the value of I1: \n";
		    cin>>I1;
		    cout<<"Enter the value of I2: \n";
		    cin>>I2;
		    cout<<"Enter the value of V1: \n";
		    cin>>V1;
		    cout<<"Enter the value of V2: \n";
		    cin>>V2;

		    if(I2==0)
		    {
			Z11=(V1/I1);
			Z21=(V2/I1);
			cout<<"Z11 = "<<Z11<<endl;
			cout<<"Z21 = "<<Z21<<endl;
		    }
		    if(I1==0)
		    {
			Z12=(V1/I2);
			Z22=(V2/I2);
			cout<<"Z12 = "<<Z12<<endl;
			cout<<"Z22 = "<<Z22<<endl;
		    }

	    }
	    break;

	    case 2:
	    {
	    float Y11,Y12,Y21,Y22;
		y() ;
		    cout<<"\n\n\n\n\n\n\n\n" ;
		    cout<<"******** Y-PARAMETERS OR ADMITTANCE PARAMETERS ********\n";
		    cout<<" \t\t I1 = Y11*V1 + Y12*V2 \t\t\t\t\n ";
		    cout<<" \t\t I2 = Y21*V1 + Y22*V2 \t\t\t\t\n\n";
		    cout<<"FOR CALCULATING Y12 AND Y22 PUT V1=0\n";
		    cout<<"FOR CALCULATING Y21 AND Y11 PUT V2=0\n\n";

		    cout<<"Enter the value of I1: \n";
		    cin>>I1;
		    cout<<"Enter the value of I2: \n";
		    cin>>I2;
		    cout<<"Enter the value of V1: \n";
		    cin>>V1;
		    cout<<"Enter the value of V2: \n";
		    cin>>V2;

		    if(V2==0)
		    {
			Y11=(I1/V1);
			Y21=(I2/V1);
			cout<<"Y11 = "<<Y11<<endl;
			cout<<"Y21 = "<<Y21<<endl;
		    }
		    if(V1==0)
		    {
			Y12=(I1/V2);
			Y22=(I2/V2);
			cout<<"Y12 = "<<Y12<<endl;
			cout<<"Y22 = "<<Y22<<endl;
		    }

	    }
	    break;

	    case 3:
	    {
		float A,B,C,D;
			t() ;
			cout<<"\n\n\n\n\n\n\n\n" ;
		    cout<<"******** T-PARAMETERS OR TRANSMISSION PARAMETERS ********\n";
		    cout<<" \t\t V1 = A*V2 - B*I2 \t\t\t\t\n ";
		    cout<<" \t\t I1 = C*V2 - D*I2 \t\t\t\t\n\n";
		    cout<<"FOR CALCULATING A AND C PUT I2=0\n";
		    cout<<"FOR CALCULATING B AND D PUT V2=0\n\n";

		    cout<<"Enter the value of I1: \n";
		    cin>>I1;
		    cout<<"Enter the value of I2: \n";
		    cin>>I2;
		    cout<<"Enter the value of V1: \n";
		    cin>>V1;
		    cout<<"Enter the value of V2: \n";
		    cin>>V2;

		    if(I2==0)
		    {
			A=(V1/V2);
			C=(I1/V2);
			cout<<"A = "<<A<<endl;
			cout<<"C = "<<C<<endl;
		    }
		    if(V2==0)
		    {
			B=(-V1/I2);
			D=(-I1/I2);
			cout<<"B = "<<B<<endl;
			cout<<"D = "<<D<<endl;
		    }

	    }
	    break;

	    case 4:
	    {
		float A1, B1, C1, D1;
			tdash() ;
			cout<<"\n\n\n\n\n\n\n\n" ;
		    cout<<"******** T'-PARAMETERS OR INVERSE TRANSMISSION PARAMETERS ********\n";
		    cout<<" \t\t V2 = A1*V1 - B1*I1 \t\t\t\t\n ";
		    cout<<" \t\t I2 = C1*V1 - D1*I1 \t\t\t\t\n\n";
		    cout<<"FOR CALCULATING A1 AND C1 PUT I1=0\n";
		    cout<<"FOR CALCULATING B1 AND D1 PUT V1=0\n\n";

		    cout<<"Enter the value of I1: \n";
		    cin>>I1;
		    cout<<"Enter the value of I2: \n";
		    cin>>I2;
		    cout<<"Enter the value of V1: \n";
		    cin>>V1;
		    cout<<"Enter the value of V2: \n";
		    cin>>V2;

		    if(I1==0)
		    {
			A1=(V2/V1);
			C1=(I2/V1);
			cout<<"A1 = "<<A1<<endl;
			cout<<"C1 = "<<C1<<endl;
		    }
		    if(V1==0)
		    {
			B1=(-V2/I1);
			D1=(-I2/I1);
			cout<<"B1 = "<<B1<<endl;
			cout<<"D1 = "<<D1<<endl;
		    }

	    }
	    break;

	    case 5:
	    {
	    float H11,H12,H21,H22;
		h() ;
		cout<<"\n\n\n\n\n\n\n\n" ;
		    cout<<"******** H-PARAMETERS OR HYBRID PARAMETERS ********\n";
		    cout<<" \t\t V1 = H11*I1 + H12*V2 \t\t\t\t\n ";
		    cout<<" \t\t I2 = H21*I1 + H22*V2 \t\t\t\t\n\n";
		    cout<<"FOR CALCULATING H12 AND H22 PUT I1=0\n";
		    cout<<"FOR CALCULATING H21 AND H11 PUT V2=0\n\n";

		    cout<<"Enter the value of I1: \n";
		    cin>>I1;
		    cout<<"Enter the value of I2: \n";
		    cin>>I2;
		    cout<<"Enter the value of V1: \n";
		    cin>>V1;
		    cout<<"Enter the value of V2: \n";
		    cin>>V2;

		    if(V2==0)
		    {
			H11=(V1/I1);
			H21=(I2/I1);
			cout<<"H11 = "<<H11<<endl;
			cout<<"H21 = "<<H21<<endl;
		    }
		    if(I1==0)
		    {
			H12=(V1/V2);
			H22=(I2/V2);
			cout<<"H12 = "<<H12<<endl;
			cout<<"H22 = "<<H22<<endl;
		    }

	    }
	    break;

	    case 6:
	    {
	    float G11,G12,G21,G22;
		g() ;
		cout<<"\n\n\n\n\n\n\n\n" ;
		    cout<<"******** G-PARAMETERS OR INVERSE HYBRID PARAMETERS ********\n";
		    cout<<" \t\t I1 = G11*V1 + G12*I2 \t\t\t\t\n ";
		    cout<<" \t\t V2 = G21*V1 + G22*I2 \t\t\t\t\n\n";
		    cout<<"FOR CALCULATING G12 AND G22 PUT V1=0\n";
		    cout<<"FOR CALCULATING G21 AND G11 PUT I2=0\n\n";

		    cout<<"Enter the value of I1: \n";
		    cin>>I1;
		    cout<<"Enter the value of I2: \n";
		    cin>>I2;
		    cout<<"Enter the value of V1: \n";
		    cin>>V1;
		    cout<<"Enter the value of V2: \n";
		    cin>>V2;

		    if(I2==0)
		    {
			G11=(I1/V1);
			G21=(V2/V1);
			cout<<"G11 = "<<G11<<endl;
			cout<<"G21 = "<<G21<<endl;
		    }
		    if(V1==0)
		    {
			G12=(I1/I2);
			G22=(V2/I2);
			cout<<"G12 = "<<G12<<endl;
			cout<<"G22 = "<<G22<<endl;
		    }

	    }
	    break;

	    default:
	    cout<<" WRONG CHOICE ";
	    break;
    }
    cout<<" Do You Want To Continue: (Y/N) ?: ";
    cin>>ch;
    closegraph()  ;
    }while(ch=='Y');

    getch() ;
}
