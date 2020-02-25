#include<iostream>
using namespace std;
char kare[9]={'1','2','3','4','5','6','7','8','9'};
void gorunum();
int main(){
	int oyuncu=1,sayac=1;
	int secim;
	char isaretleme;
	bool kazanan=false;	
	cout << "\t\tXOX OYUNU"<< endl;
	cout << "\tOyuncu 1(X)\tOyuncu 2(O)"<< endl;
	gorunum();
	cout << endl << endl;
	oyuncu=oyuncu+1;
while(kazanan==false && sayac<=9){
		oyuncu=oyuncu%2;
		if(oyuncu==0){
			cout << oyuncu+1 << ". oyuncu rakam seciniz=" << endl;
			isaretleme='X';
			cin>> secim;
		}
		else{
			cout << oyuncu+1 <<". oyuncu rakam seciniz=";
			isaretleme='O';
			cin>> secim;
		}		
		oyuncu++;
		sayac++;
	 switch(secim){
	 	case 1:
	 		kare[0]=isaretleme;
	 		break;
	 	case 2:
	 		kare[1]=isaretleme;
	 		break;
	 	case 3:
	 		kare[2]=isaretleme;
	 		break;
	 	case 4:
	 		kare[3]=isaretleme;
	 		break;
	 	case 5:
	 		kare[4]=isaretleme;
	 		break;
	 	case 6:
	 		kare[5]=isaretleme;
	 		break;
	 	case 7:
	 		kare[6]=isaretleme;
	 		break;
	 	case 8:
	 		kare[7]=isaretleme;
	 		break;
		case 9:
	 		kare[8]=isaretleme;
	 		break;
	}
	gorunum();
	if(kare[0]==kare[1] && kare[1]==kare[2]){
		kazanan=true;	
	}
	else if(kare[3]==kare[4] && kare[4]==kare[5]){
		kazanan=true;
	}
	else if(kare[6]==kare[7] && kare[7]==kare[8]){
		kazanan=true;
	}
    else if(kare[2]==kare[4] && kare[4]==kare[6]){
    	kazanan=true;
	}
    else if(kare[0]==kare[4] && kare[4]==kare[8]){
    	kazanan=true;
	}
    else if(kare[1]==kare[4] && kare[4]==kare[7]){
    	kazanan=true;
	}
	else if(kare[0]==kare[3] && kare[3]==kare[6]){
		kazanan=true;
	}
    else if(kare[2]==kare[5] && kare[5]==kare[8]){
    	kazanan=true;
	} else {
		kazanan=false;
	}
	cout <<endl;
}
if (kazanan==true){
	if(isaretleme=='X'){
		cout << "1. oyuncu kazandi.";
	}
	else{
		cout << "2. oyuncu kazandi.";
	}
} else{
	cout <<" berabere";
}
return 0;
}
void gorunum(){
	cout << kare[0] << " | " << kare[1] << " | " << kare[2] << endl;
	cout <<"__________" << endl << endl;
	cout << kare[3] << " | " << kare[4] << " | " << kare[5]<< endl ;
	cout << "__________"<<endl<< endl;
	cout << kare[6] << " | " << kare[7] << " | " << kare[8];
	
}
