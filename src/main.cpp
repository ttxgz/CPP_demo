/*
* Purpose:
* Author: Wanming @ /12/2014
* Input Para:
* Output:
* Exe:
* Comment:
*/

//#include <stdio.h>
#include <iostream>
#include <math.h>
#include <pthread.h>
#include <unistd.h>
#include <ctime>
#include "demo1.h"

using namespace std;

#define DEMO_1
#define DEMO_2
#define DEMO_3


#define For(start,end) for(int cnt = start; cnt <= end; cnt++)
#define MAX(a,b) ((a) > (b) ? (a):(b))
#define MIN(x,y)   ((x)<(y)? (x):(y))

template <class T> inline void checkMax(T &a, T b) {if(b>a) a = b;}
template <class T> inline void checkMin(T &a, T b) {if(b<a) a = b;}


const string caseSeperate = "///////////////////////////////////////////////////////////////////////////////";


int main()
{

#ifdef DEMO_1
	//Demo 1: 
	const string debugStrCase1 = "Demo 1: ";
	cout << endl << caseSeperate << endl << debugStrCase1 << endl << caseSeperate << endl;

	Demo1();
	
	const string conclusionStrCase1 = " ";
	cout << endl << "CONCLUSION: " << conclusionStrCase1 << endl;
#endif

#ifdef DEMO_2
		//Demo 2: 
		const string debugStrCase2 = "Demo 2: ";
		cout << endl << caseSeperate << endl << debugStrCase2 << endl << caseSeperate << endl;

		//Demo2(val_2);
		
		const string conclusionStrCase2 = " ";
		cout << endl << "CONCLUSION: " << conclusionStrCase2 << endl;
#endif


	return 0;
}
