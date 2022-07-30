#ifndef ITEM_H
#define ITEM_H

#include <string>

namespace AdamBorenstein
{

using namespace std;
class Item{
	public:
		Item( const size_t& sn, const string& name, const size_t& minStock, const size_t& amountInStock ) : sn( sn ), name( name ){
			this->amountInStock = amountInStock; 
			this->minStock = minStock;
		}
		
		size_t GetMinStock() const { return this->minStock; }
		bool SetMinStock( const size_t& newMin ); // returns true if stock is larger from new min stock

		size_t GetAmountInStock() const { return this->amountInStock; }
		bool SetAmountInStock( const size_t newStock ); // returns true if new stock is larger from min stock

	private:
		const size_t sn;
		const string name;
		size_t amountInStock;
		size_t minStock;
};

}

#endif
