#include "item.h"

namespace AdamBorenstein
{

bool Item::SetMinStock( const size_t& newMin ){
	this->minStock = newMin;
	return amountInStock > minStock;
}

bool Item::SetAmountInStock( const size_t newStock ){
	this->amountInStock = newStock;
	return amountInStock > minStock;
}

} // end of namespace