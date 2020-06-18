#include <boost/program_options.hpp>
#include <iostream>

int main( int argc, char ** argv ) {
	boost::program_options::options_description programOptions;
    programOptions.add_options()
            ( "a", "check a" )
			( "b", "check b" );
    const boost::program_options::parsed_options parsed =
            boost::program_options::command_line_parser( argc, argv ).options( programOptions ).run();
    boost::program_options::variables_map vm;
    store( parsed, vm );
    notify( vm );
    if( vm.count( "a" ) ) {
        std::cout << "FOUND A";
    }
	if( vm.count( "b" ) ) {
        std::cout << "FOUND B";
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}
