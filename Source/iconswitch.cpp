#include <iostream>
#include <bits/stdc++.h>
#include <dirent.h>
using namespace std;

void copyfile (const char l[], const char r[])
{
	fstream f1;
    fstream f2;
    string ch;
    f1.open(l, ios::in);
    f2.open(r, ios::out);
    while (!f1.eof()) 
    {
        getline(f1, ch);
        f2 << ch << endl;
    }
    f1.close();
    f2.close();
}

bool direxists(const char* pzPath)
{
    if ( pzPath == NULL) return false;

    DIR *pDir;
    bool bExists = false;

    pDir = opendir(pzPath);

    if (pDir != NULL)
    {
        bExists = true;    
        (void) closedir (pDir);
    }

    return bExists;
}

int main(int argc, char** argv)
{
	uint8_t OS;
	if (argc < 1)
	{
		cout << "Please enter the command correctly - Enter iconswitch -h for help\n";
		return 0;
	}
	if (direxists("/usr/share/icons/Adwaita")) OS = 0; // Debian - based
	if (direxists("/usr/share/icons/PiXflat")) OS = 1; // Raspbian - based
	else cout << "Operating system not supported\n";

    if (!strcmp(argv[1],"-h") || !strcmp(argv[1], "--help"))
    {
		cout << "\niconswitch - a program that lets you to switch system icon files\nExample usage: sudo iconswitch -f /home/user/image.txt\n\n";
		cout << "Possible commands:\n\n";
		cout << "Directory icons:\n";
		cout << "	-d or --dir        switch all basic directory icons\n";
		cout << "	-b or --bin        switch the trash bin icon\n";
		cout << "	-ho or --home      switch the home directory icon\n";
		cout << "	-dw or --downloads switch the downloads icon\n";
		cout << "	-r or --root       switch the root directory icon\n";
		cout << "	-dc or --documents switch the documents directory icon\n";
		cout << "	-m or --music      switch the music directory icon\n";
		cout << "	-pic or --pictures switch the pictures directory icon\n";
		cout << "	-v or --videos     switch the videos directory icon\n";
		cout << "	-pub or --public   switch the public directory icon\n";
		cout << "\nFile icons:\n";
		cout << "	-u or --unknown                     switch the unknown file icon\n";
		cout << "	-t or --txt                         switch the text file icon";
		cout << "	-png or --portable-network-graphics switch the png icon";
		cout << "\n";
		return 0;
    }

	if (!direxists(argv[2]))
	{
		cout << "Given file does not exist or you did not run with sudo";
	}

	else if (!strcmp(argv[1], "-d") || !strcmp(argv[1], "--dir"))
	{
		if (OS == 0)
		{
			copyfile(argv[3], "/usr/share/icons/Adwaita/8x8/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/16x16/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/22x22/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/24x24/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/32x32/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/48x48/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/64x64/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/256x256/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/512x512/places/folder.png");
		}
		
		if (OS == 1)
		{	
			copyfile(argv[3], "/usr/share/icons/PiXflat/16x16/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/20x20/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/24x24/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/32x32/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/40x40/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/48x48/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/64x64/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/80x80/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/96x96/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/128x128/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/160x160/places/folder.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/192x192/places/folder.png");
		}
	}
	
	else if (!strcmp(argv[2], "-ho") || !strcmp(argv[2], "--home"))
	{
		if (OS == 0)
		{
			copyfile(argv[3], "/usr/share/icons/Adwaita/8x8/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/16x16/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/22x22/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/24x24/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/32x32/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/48x48/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/64x64/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/256x256/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/Adwaita/512x512/places/user-home.png");
		}
		
		if (OS == 1)
		{	
			copyfile(argv[3], "/usr/share/icons/PiXflat/16x16/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/20x20/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/24x24/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/32x32/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/40x40/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/48x48/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/64x64/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/80x80/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/96x96/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/128x128/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/160x160/places/user-home.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/192x192/places/user-home.png");
		}
	}
	
	else if (!strcmp(argv[2], "-b") || !strcmp(argv[2], "--bin"))
	{
		if (OS == 0)
		{
			
		}

		if (OS == 1)
		
		{	
			copyfile(argv[3], "/usr/share/icons/PiXflat/16x16/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/16x16/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/20x20/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/20x20/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/24x24/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/24x24/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/32x32/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/32x32/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/40x40/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/40x40/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/48x48/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/48x48/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/80x80/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/80x80/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/96x96/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/96x96/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/128x128/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/128x128/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/160x160/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/160x160/places/user-trash.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/192x192/places/user-trash-full.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/192x192/places/user-trash.png");
		}
	}
	
	else if (!strcmp(argv[2], "-dw") || !strcmp(argv[2], "--downloads"))
	{
		if (OS == 0)
		{
			
		}
		
		if (OS == 1)
		{
			copyfile(argv[3], "/usr/share/icons/PiXflat/16x16/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/20x20/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/24x24/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/32x32/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/40x40/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/48x48/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/64x64/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/80x80/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/96x96/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/128x128/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/160x160/places/folder-download.png");
			copyfile(argv[3], "/usr/share/icons/PiXflat/192x192/places/folder-download.png");
		}
	}
	
	cout << "Switch finished\n";
	return 0;
}

