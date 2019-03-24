#pragma once

#ifndef FILE_H
#define FILE_H

#if defined(MYLIBRARY)
#define LIBRARY_EXPORT __declspec(dllexport)
#else
#define LIBRARY_EXPORT
#endif

#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

void menu(string str,int &c);
int choice();


#endif
