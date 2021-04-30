#include "Logger.hpp"

int main()
{
	Logger log("file.log");

	log.log("file", "Questo messaggio è salvato in file.log");
	log.log("stdout", "Questo messaggio è stampato sullo standard output");
	log.log("file", "Secondo messaggio da appendere a file.log");
	log.log("file", "Ultimo messaggio di log in file.log");
	log.log("Standard", "Ultimo messaggio in console");
}
