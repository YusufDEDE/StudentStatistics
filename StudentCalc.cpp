#include <string>
#include <fstream>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>


using namespace std;

int number_of_lines = 0;
string ayrac = "     ";
string doldur = "#### ";
void numberoflines();
int main(){
	system( "color 2" );
	int i,j,k;
   	ifstream input;
   	ofstream output;
	int count=0,ww,dizi1[1000],indexCount1=0,a,MAX,Sort[12],toplam=0;
	double ortalama=3.14025,OneAnsw=0;
	
	int Number0=0,Number1=0,Number2=0,Number3=0,Number4=0,
	Number5=0,Number6=0,Number7=0,Number8=0,
	Number9=0,Number10=0,Number11=0;

    input.open("midterm.txt");
	while(true)
	{
		number_of_lines++;
		input>>ww;
        if( input.eof() )
        {
        	break;
        }
        else
        {
			dizi1[indexCount1]=ww;
        	indexCount1++;
		}
	}
	input.close();

	for(int a=0;a<indexCount1;a++)
    {
     	if(dizi1[a]==0 ){Number0++;}
     	if(dizi1[a]>=1 && dizi1[a]<10){Number1++;}
		if(dizi1[a]>=10 && dizi1[a]<20){Number2++;}
     	if(dizi1[a]>=20 && dizi1[a]<30){Number3++;}
		if(dizi1[a]>=30 && dizi1[a]<40){Number4++;}
     	if(dizi1[a]>=40 && dizi1[a]<50){Number5++;}
		if(dizi1[a]>=50 && dizi1[a]<60){Number6++;}
     	if(dizi1[a]>=60 && dizi1[a]<70){Number7++;}
		if(dizi1[a]>=70 && dizi1[a]<80){Number8++;}
     	if(dizi1[a]>=80 && dizi1[a]<90){Number9++;}
     	if(dizi1[a]>=90 && dizi1[a]<100){Number10++;}
     	if(dizi1[a]==100){Number11++;}
     	if(dizi1[a]>0)
		 toplam+=dizi1[a];
	}
		number_of_lines--;
		OneAnsw=number_of_lines-Number0;
    	ortalama=(toplam-Number0)/OneAnsw;
			 //cout <<endl<<"0 sayisi: "<<Number0 ; 	
			 Sort[0]=Number0;
			 //cout <<endl<<"0-10 sayisi: "<<Number1 ;	
			 Sort[1]=Number1;
			 //cout <<endl<<"10-20 sayisi: "<<Number2 ;	
			 Sort[2]=Number2;
			 //cout <<endl<<"20-30 sayisi: "<<Number3 ;	
			 Sort[3]=Number3;
			 //cout <<endl<<"30-40 sayisi: "<<Number4 ;	
			 Sort[4]=Number4;
			 //cout <<endl<<"40-50 sayisi: "<<Number5 ;	
			 Sort[5]=Number5;
			 //cout <<endl<<"50-60 sayisi: "<<Number6 ;	
			 Sort[6]=Number6;
			 //cout <<endl<<"60-70 sayisi: "<<Number7 ;	
			 Sort[7]=Number7;
			 //cout <<endl<<"70-80 sayisi: "<<Number8 ;	
			 Sort[8]=Number8;
			 //cout <<endl<<"80-90 sayisi: "<<Number9 ;	
			 Sort[9]=Number9;
			 //cout <<endl<<"90-100 sayisi: "<<Number10 ;	
			 Sort[10]=Number10;
			 //cout <<endl<<"100 sayisi: "<<Number11 ;	
			 Sort[11]=Number11;

			MAX=Sort[0];
			for(k=0; k<12; k++)
			{
				if(Sort[k]>MAX)
				{
					MAX=Sort[k];
				}
			}

			numberoflines();
			cout << "\n";
			for(i=MAX+3; i>0; i--){
                
                if(i<10){
                	cout << " " << i << " | ";
				}
				else
				{
					cout << i << " | ";	
				}
				if(i<=Number1)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}

				if(i<=Number2)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}

				if(i<=Number3)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}

				if(i<=Number4)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}
				
				if(i<=Number5)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}
				
				if(i<=Number6)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}
				
				if(i<=Number7)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}

				if(i<=Number8)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}

				if(i<=Number9)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}

				if(i<=Number10)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}
				
				if(i<=Number11)
				{
					cout << doldur;
				}
				else
				{
					cout << ayrac;
				}
				
            cout<<"\n";
			}

	
	
		
		cout << "###########################################################";
		cout <<endl<<"     <0   <10  <20  <30  <40  <50  <60  <70  <80  <90  <100 ";
		cout <<endl<<"\nStudent: "<<number_of_lines<<" = "<<OneAnsw<<" + "<<Number0;
		cout <<endl<<"Average of Grades = "<<setprecision(6)<<ortalama<<endl<<endl;
		system("PAUSE");
}
void numberoflines(){   }
/* Created By SaruManWW2...*/




