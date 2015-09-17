// Ref: 'http://theboostcpplibraries.com/boost.pointer_container'

#include <boost/ptr_container/ptr_vector.hpp>
#include <iostream>
void ex1( )
{
	boost::ptr_vector< int > v;
	
	v.push_back( new int( 1 ) );
	v.push_back( new int( 2 ) );
	v.push_back( new int( 3 ) );
	
	std::cout << v.back( ) << '\n';
}

void ex2( )
{
	boost::ptr_vector< int > v;
	int* p1 = new int;
	*p1 = 1;
	int* p2 = new int;
	*p2 = 3;
	int* p3= new int;
	*p3 = 5;
	v.push_back( p1 );
	v.push_back( p2 );
	v.push_back( p3 );
	std::cout << v.front( ) << '\n';
}

int main( )
{
	ex1( );
	std::cout << std::endl;
	ex2( );
	
	return 0;
}
