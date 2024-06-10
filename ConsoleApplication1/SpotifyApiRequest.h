#pragma once
#include <iostream>
class SpotifyApiRequestArtist
{
public:
	SpotifyApiRequestArtist();

	void startRequest(std::string name);
	

private:
	void setEnvironment();
	std::string getEnvironmentVariable(const std::string& varName);
	std::string clientID;
	std::string clientSecret;
};

