#include "Config.h"
#include "GameBoy.h"
#include "GameSettings.h"

extern "C" { FILE __iob_func[3] = { *stdin,*stdout,*fprintf }; }

int main(int argc, char *argv[])
{
	LogMessage* log = LogMessage::CreateInstance() ;
	GameSettings* settings = GameSettings::CreateInstance();

	GameBoy* gb = GameBoy::CreateInstance( ) ;

	gb->StartEmulation( ) ;

	delete gb ;
	delete settings ;
	delete log ;

	return 0;
}
