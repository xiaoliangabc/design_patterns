///////////////////////////////////////////////////////////
//  Factory.cpp
//  Implementation of the Class Factory
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"


Factory::Factory(){

}



Factory::~Factory(){

}


Product* Factory::createProduct(string proname){
	// 在工厂方法中, 通过一些条件, 判断实例化哪一个类
	// 返回的是基类指针, 基类指针指向派生类
	if ( "A" == proname )
	{
		return new ConcreteProductA();
	}
	else if("B" == proname)
	{
		return new ConcreteProductB();
	}
	return  NULL;
}