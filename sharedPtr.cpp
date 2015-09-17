#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>
int main( )
{
	std::vector< boost::shared_ptr< int > > v;
	v.push_back( boost::shared_ptr< int >( new int( 10 ) ) );
	v.push_back( boost::shared_ptr< int >( new int( 2 ) ) );
	std::cout << *v[0] << ", " << *v[1] << std::endl;
	return 0;
}
