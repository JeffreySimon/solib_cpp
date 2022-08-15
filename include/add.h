#include<iostream>
#include<stdio.h>
#define DLL_PUBLIC __attribute__((visibility("default")))
#define DLL_LOCAL  __attribute__((visibility("hidden")))

// if add DLL_PUBLIC  recompile will confuse function
int m_add(int a,int b);
