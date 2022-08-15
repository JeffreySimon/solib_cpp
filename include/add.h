#include<iostream>
#include<stdio.h>
#define DLL_PUBLIC __attribute__((visibility("default")))
#define DLL_LOCAL  __attribute__((visibility("hidden")))
DLL_PUBLIC int m_add(int a,int b);
