#include <iostream>
#include "Factory.h"
#include "Product.h"

using namespace std;

int main(int argc, char *argv[])
{
	// 调用简单工厂类中工厂方法, 以初始化 产品 实例
	// 通过函数中的参数来实现
	// 工厂方法是静态方法(static), 通过类名直接调
	Product * prod = Factory::createProduct("A");
		
	prod->Use();
	
	delete prod;
	
	return 0;
}
