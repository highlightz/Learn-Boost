#include <iostream>
#include <boost/scoped_array.hpp>
int main( )
{
	boost::scoped_array< int > i( new int[2] );
	*( i.get( ) ) = 1;
	i[1] = 2;
	for ( int j = 0; j < 3; j++ )
		std::cout << i[j] << std::endl;
	i.reset( new int[3] );
	return 0;
}
