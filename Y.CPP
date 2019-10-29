#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void main()
{
  int gd=DETECT, gm ;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI") ;
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
  getch() ;
  closegraph() ;
}