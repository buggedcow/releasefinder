#include "SpotifyApiRequest.h"
#include <cpprest/http_listener.h>
#include <cpprest/json.h>

SpotifyApiRequestArtist::SpotifyApiRequestArtist()
{
	setEnvironment();
}

std::string SpotifyApiRequestArtist::getEnvironmentVariable(const std::string& varName)
{
    char* buf = nullptr;
    size_t sz = 0;
    _dupenv_s(&buf, &sz, varName.c_str());
    std::string value;
    if (buf != nullptr) {
        value = buf;
        free(buf);
    }
    return value;
}

void SpotifyApiRequestArtist::startRequest(std::string name)
{

}

void SpotifyApiRequestArtist::setEnvironment()
{
	clientID = getEnvironmentVariable("SPOTIFY_CLIENT_ID");
	clientSecret = getEnvironmentVariable("SPOTIFY_CLIENT_SECRET");
}
