#include <iostream>
#include <boost/scoped_ptr.hpp>
int main( )
{
	boost::scoped_ptr< int > i( new int );
	*i = 1;
	std::cout << *i << std::endl;
	*( i.get( ) ) = 2;
	std::cout << *i << std::endl;
	i.reset( new int );
	std::cout << *i << std::endl;  // Random value
	return 0;
}
