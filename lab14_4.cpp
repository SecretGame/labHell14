#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &x,int &y,int &z,int &v){
	int a = rand()%4,b = rand()%3,c = rand()%2;
	if(a == 0){
		x = 50;
		if(b == 0){
			y = 100;
			if(c == 0){
				z=500;
				v = 1000;
			}
			else{
				z=1000;
				v=500;
			}
		}
		else if (b == 1){ 
			y = 500;
			if(c == 0){
				z=100;
				v = 1000;
			}
			else {
				z=1000;
				v=100;
			}
		}
		else {
			y=1000;
			if(c == 0){
				z=100;
				v=500;
			}
			else {
				z=500;
				v=100;
			}
		}
	}
	else if (a == 1) {
		x = 100;
		if(b == 0){
			y = 50;
			if(c == 0){
				z=500;
				v=1000;
			}
			else{
				z=1000;
				v=500;
			}
		}
		else if (b == 1){ 
			y = 500;
			if(c == 0) {
				z=50;
				v=1000;
			}
			else {
				z=1000;
				v=50;
			}
		}
		else {
			y=1000;
			if(c == 0){
				z=500;
				v=50;
			}
			else{
				z=50;
				v=500;
			}
		}
	}
	else if (a == 2) {
		x = 500;
		if(b == 0){
			y = 100;
			if(c == 0){
				z=50;
				v = 1000;
			}
			else{
				z=1000;
				v=50;
			}
		}
		else if (b == 1){ 
			y = 50;
			if(c == 0){
				z=100;
				v = 1000;
			}
			else {
				z=1000;
				v=100;
			}
		}
		else {
			y=1000;
			if(c == 0){
				z=100;
				v=50;
			}
			else {
				z=50;
				v=100;
			}
		}
	}
	else {
		x = 1000;
		if(b == 0){
			y = 100;
			if(c == 0){
				z=500;
				v = 50;
			}
			else{
				z=50;
				v=500;
			}
		}
		else if (b == 1){ 
			y = 500;
			if(c == 0){
				z=50;
				v = 100;
			}
			else {
				z=100;
				v=50;
			}
		}
		else {
			y=50;
			if(c == 0){
				z=100;
				v=500;
			}
			else {
				z=500;
				v=100;
			}
		}
	}
}