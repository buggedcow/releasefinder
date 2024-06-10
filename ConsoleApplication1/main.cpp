#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>
#include <cstdlib>
#include "SpotifyApiRequest.h"

using namespace std;

void load_env()
{
    std::ifstream envFile("..\\keys.env");
    if (!envFile)
    {
        cerr << "Failed to open .env File!" << endl;
        cout << "Current Path: " << filesystem::current_path() << endl;
    }
    else
    {
        string line;
        while (getline(envFile, line))
        {
            auto delimiterPos = line.find('=');
            if (delimiterPos != string::npos)
            {
                auto name = line.substr(0, delimiterPos);
                auto value = line.substr(delimiterPos + 1);
                _putenv_s(name.c_str(), value.c_str());
            }
        }
    }
}


int main()
{
    load_env();
    string artist;

    SpotifyApiRequestArtist instance;
    cout << "specify an artist:";
    cin >> artist;
}
