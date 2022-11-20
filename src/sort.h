#ifndef _SORT_H_
#define _SORT_H_

void bubble(int*,int);
void selection(int*,int);
void insertion(int*,int);
void quick(int*,int);
void gnome(int*,int);
// shuffle the entire array randomly until its sorted
void bogo(int*,int);
// like bogo sort, but it won't shuffle the entire array
// for each iteration but only swap two *random* values
void bozo(int*,int);

void merge(int*,int);
void radix(int*,int);
void sleep(int*,int);

#endif
