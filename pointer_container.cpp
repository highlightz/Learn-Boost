Ref: http://theboostcpplibraries.com/boost.pointer_container

#include <boost/ptr_container/ptr_vector.hpp>
#include <iostream>
int main( )
{
	boost::ptr_vector< int > v;
	v.push_back( new int( 1 ) );
	v.push_back( new int( 2 ) );
	v.push_back( new int( 3 ) );
	std::cout << v.back( ) << '\n';
	return 0;
}
