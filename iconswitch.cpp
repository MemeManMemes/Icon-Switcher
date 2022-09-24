#include <iostream>
#include <bits/stdc++.h>
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

int main(int argc, char** argv)
{
	uint8_t OS = 0;
	
	if (argc < 2)
	{
		cout << "Please enter the command correctly - Enter iconswitch -h for help\n";
		return 0;
	}
	
	if (!strcmp(argv[1], "deb")) {OS = 0;}
	
	else if (!strcmp(argv[1], "pi")) {OS = 1;}
	
	else
	{
		cout << "Please enter a correct operating system - options: | deb | pi |\n";
		cout << "Example usage: sudo iconswitch deb -d\nExample usage: sudo iconswitch pi -d\nEnter iconswitch -h for help\n";
		return -1;
	}

    if (!strcmp(argv[1],"-h") || !strcmp(argv[1], "--help"))
    {
		cout << "\niconswitch - a program that lets you to switch system icon files\nExample usage: sudo iconswitch deb -f /home/user/image.txt\nYou must specify which operating system you are using before entering a command\n\n";
		cout << "Possible commands:\n\nSupported operating systems:\n";	
		cout << "	usage: sudo iconswitch deb -d\n (for debian users)";
		cout << "	usage: sudo iconswitch pi -m\n\n (for raspbian users)";
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

	ifstream file(argv[3]);
	if (!file.is_open())
	{
        std::cout << "File not found or not correct priviledge";
        return -1;
    }

	else if (!strcmp(argv[2], "-d") || !strcmp(argv[2], "--dir"))
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

