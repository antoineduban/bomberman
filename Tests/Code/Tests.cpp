
#include "Tests.hpp"

#include <Output.hpp>

namespace ft
{
	namespace Tests
	{
		void	TestFailLog(const char* csFilePath, const int iLine, const char* csFunction)
		{
			FT_CERR << "Test: Echec: " << csFilePath << ", " << iLine << ", " << csFunction << std::endl;
		}

		void	TestEndLog(const char* csFunction, const uint32 iTestCount, const uint32 iSuccessful)
		{
			if (iTestCount == iSuccessful)
				FT_COUT << "Test: Succ�s: " << csFunction << " (" << iSuccessful << '/' << iTestCount << ')' << std::endl;
			else
				FT_CERR << "Test: ECHEC: " << csFunction << " | " << iTestCount - iSuccessful << " tests �chou�s (" << iSuccessful << '/' << iTestCount << ')' << std::endl;
		}
	}
}
