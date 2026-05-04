#pragma once
#include<iostream>
#include<string>
using namespace std;
void print(string msg);
void init_random(int** matrix, int size,int a,int b);
void init_user(int** matrix, int size);
int** create(int** matrix, int size);
void remove(int** matrix, int size);
string convert(int** matrix, int size);