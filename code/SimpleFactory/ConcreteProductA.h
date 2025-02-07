///////////////////////////////////////////////////////////
//  ConcreteProductA.h
//  Implementation of the Class ConcreteProductA
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
#define EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_

#include "Product.h"

class ConcreteProductA : public Product
{

public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	
	// 虚函数,这样基类指针就可以来调用(这是没必要是虚函数, 如果后续没有其他类来继承)
	// void Use();
	virtual void Use();

};
#endif // !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
