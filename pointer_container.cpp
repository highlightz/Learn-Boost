// Ref: 'http://theboostcpplibraries.com/boost.pointer_container'

#include <boost/ptr_container/ptr_vector.hpp>
#include <iostream>

void ex1( )
{
	boost::ptr_vector< int > v;
	
	v.push_back( new int( 1 ) );  // Allocate memory, meanwhile assigning a value.
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

#include <boost/ptr_container/ptr_set.hpp>
#include <boost/ptr_container/indirect_fun.hpp>
#include <set>
#include <memory>
#include <functional>

// Stored with intuitively correct order.
void ex3( )
{
	boost::ptr_set< int > s;
	s.insert( new int( 2 ) );
	s.insert( new int( 1 ) );
	s.insert( new int( 3 ) );
	s.insert( new int( -1 ) );
	std::cout << *( s.begin( ) ) << '\n';
	
	std::cout << std::endl;

	std::set< std::unique_ptr< int >, boost::indirect_fun< std::less< int > > > v;
	v.insert( std::unique_ptr< int >( new int( 29 ) ) );
	v.insert( std::unique_ptr< int >( new int( 13 ) ) );
	std::cout << **v.begin( ) << '\n';
}

int main( )
{
	ex1( );
	std::cout << std::endl;
	ex2( );
	std::cout << std::endl;
	ex3( );
	
	return 0;
}
/*
Output:
3
1
-1
13
*/
