///////////////////////////////////////////////////////////
//  ConcreteProductB.h
//  Implementation of the Class ConcreteProductB
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_52558B6D_9609_4377_944C_C57B380F7229__INCLUDED_)
#define EA_52558B6D_9609_4377_944C_C57B380F7229__INCLUDED_

#include "Product.h"

class ConcreteProductB : public Product
{

public:
	ConcreteProductB();
	virtual ~ConcreteProductB();
	
	// 虚函数,这样基类指针就可以来调用(这是没必要是虚函数, 如果后续没有其他类来继承)
	// void Use();
	virtual void Use();

};
#endif // !defined(EA_52558B6D_9609_4377_944C_C57B380F7229__INCLUDED_)
