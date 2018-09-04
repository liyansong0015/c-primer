#include<iostream>
#include<string>
#include"Quote.h"
#include"Bulk_quote.h"

double print_total(std::ostream & os ,const Quote & item,size_t n)
{	
	double ret = item.net_price(n);

	os << "ISBN:" << item.isbn()
				<< "# sold: " << n << " total due: " << ret << std::endl;

	return ret;

}
int main(){
	
	Quote q("textbook",1.1);
	Bulk_quote bq("textbook",1.1,10,0.3);

	print_total(std::cout,q,12);
//	print_total(std::cout,bq,12);
	return 0;
}


