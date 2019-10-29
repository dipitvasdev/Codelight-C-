#include <iostream>

using namespace std;

int main()
{
    int choice;
    float I1,I2,V1,V2;
    char ch;
    do
    {
        cout <<"************** TYPES OF CIRCUIT PARAMETERS ******************\n";
        cout <<"1.Z-PARAMETER\n";
        cout <<"2.Y-PARAMETER\n";
        cout <<"3.T-PARAMETER\n";
        cout <<"4.T'-PARAMETER\n";
        cout <<"5.H-PARAMETER\n";
        cout <<"6.G-PARAMETER\n";
        cout <<"ENTER YOUR CHOICE: ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
            {
            float Z11,Z12,Z21,Z22;
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
    }while(ch=='Y');

    return 0;
}
