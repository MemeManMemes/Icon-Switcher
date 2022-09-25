#include <iostream>
#include <bits/stdc++.h>
#include <dirent.h>
using namespace std; // We don't talk about this
namespace fs = std::filesystem;

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
	uint8_t errors = 0;
	bool supdir[12];
	
	memset(supdir, true, sizeof(supdir));
	
	if (argc <= 1)
	{
		cout << "Please use this program correctly - Enter iconswitch -h for help\n";
		return 0;
	}
	
	if (direxists("/usr/share/icons/PiXflat"))
	{	
		if (!direxists("/usr/share/icons/PiXflat/16x16/places")) supdir[0] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/20x20/places")) supdir[1] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/24x24/places")) supdir[2] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/32x32/places")) supdir[3] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/40x40/places")) supdir[4] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/48x48/places")) supdir[5] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/64x64/places")) supdir[6] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/80x80/places")) supdir[7] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/96x96/places")) supdir[8] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/128x128/places")) supdir[9] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/160x160/places")) supdir[10] = false;
	
		if (!direxists("/usr/share/icons/PiXflat/192x192/places")) supdir[11] = false;

	}
	
	else 
	{
		cout << "File system is either deleted in incorrect\n";
		return -1;
	}

    if (!strcmp(argv[1],"-h") || !strcmp(argv[1], "--help"))
    {
		cout << "iconswitch - a program that lets you to switch system icon files\nExample usage: sudo iconswitch -d /home/user/image.txt\n\n";
		cout << "Possible commands:\n\n";
		cout << "Directory icons:\n";
		cout << "	-b or --bin        switch all trash bin icons\n";
		cout << "	-d or --dir        switch all basic directory iconss\n";
		cout << "	-dc or --documents switch all documents directory icons\n";
		cout << "	-de or --desktop   switch all desktop icons\n";
		cout << "	-dw or --downloads switch all downloads directory icons\n";
		cout << "	-ho or --home      switch all home directory icons\n";
		cout << "	-m or --music      switch all music directory icons\n";
		cout << "	-p or --pictures   switch all pictures directory icon\n";
		cout << "	-pu or --public    switch all public directory icons\n";
		cout << "	-t or --templates  switch all templates directory icons\n";
		cout << "	-v or --videos     switch all videos directory icons\n";
		cout << "\n";
		return 0;
    }
    
	fs::path f{argv[2]};
	if (!fs::exists(f))
	{
		cout << "File given does not exist\n" << argv[2];
		return -1;
	} 
	
	if (!strcmp(argv[1], "-d") || !strcmp(argv[1], "--dir"))
	{ 
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder.png");
	}
	
	else if (!strcmp(argv[1], "-ho") || !strcmp(argv[1], "--home"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/user-home.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/user-home.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/user-home.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/user-home.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/user-home.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/user-home.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/user-home.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/user-home.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/user-home.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/user-home.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/user-home.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/user-home.png");
	}
	
	else if (!strcmp(argv[1], "-b") || !strcmp(argv[1], "--bin"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/user-trash-full.png");
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/user-trash.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/user-trash-full.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/user-trash.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/user-trash-full.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/user-trash.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/user-trash-full.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/user-trash.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/user-trash-full.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/user-trash.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/user-trash-full.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/user-trash.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/user-trash-full.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/user-trash.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/user-trash-full.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/user-trash.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/user-trash-full.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/user-trash.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/user-trash-full.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/user-trash.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/user-trash-full.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/user-trash.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/user-trash-full.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/user-trash.png");
	}
	
	else if (!strcmp(argv[1], "-dw") || !strcmp(argv[1], "--downloads"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-download.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-download.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-download.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-download.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-download.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-download.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-download.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-download.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-download.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-download.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-download.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-download.png");
	}
	
	else if (!strcmp(argv[1], "-dc") || !strcmp(argv[1], "--documents"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-documents.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-documents.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-documents.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-documents.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-documents.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-documents.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-documents.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-documents.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-documents.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-documents.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-documents.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-documents.png");
	}
	
	else if (!strcmp(argv[1], "-m") || !strcmp(argv[1], "--music"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-music.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-music.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-music.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-music.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-music.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-music.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-music.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-music.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-music.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-music.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-music.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-music.png");
	}
	
	else if (!strcmp(argv[1], "-p") || !strcmp(argv[1], "--pictures"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-pictures.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-pictures.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-pictures.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-pictures.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-pictures.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-pictures.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-pictures.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-pictures.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-pictures.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-pictures.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-pictures.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-pictures.png");
	}
	
	else if (!strcmp(argv[1], "-v") || !strcmp(argv[1], "--videos"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-videos.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-videos.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-videos.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-videos.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-videos.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-videos.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-videos.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-videos.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-videos.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-videos.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-videos.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-videos.png");
	}
	
	else if (!strcmp(argv[1], "-pu") || !strcmp(argv[1], "--public"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-publicshare.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-publicshare.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-publicshare.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-publicshare.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-publicshare.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-publicshare.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-publicshare.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-publicshare.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-publicshare.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-publicshare.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-publicshare.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-publicshare.png");
	}
	
	else if (!strcmp(argv[1], "-de") || !strcmp(argv[1], "--desktop"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/user-desktop.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/user-desktop.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/user-desktop.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/user-desktop.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/user-desktop.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/user-desktop.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/user-desktop.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/user-desktop.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/user-desktop.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/user-desktop.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/user-desktop.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/user-desktop.png");
	}
	
	else if (!strcmp(argv[1], "-t") || !strcmp(argv[1], "--templates"))
	{
		if (supdir[0]) copyfile(argv[2], "/usr/share/icons/PiXflat/16x16/places/folder-templates.png");
		if (supdir[1]) copyfile(argv[2], "/usr/share/icons/PiXflat/20x20/places/folder-templates.png");
		if (supdir[2]) copyfile(argv[2], "/usr/share/icons/PiXflat/24x24/places/folder-templates.png");
		if (supdir[3]) copyfile(argv[2], "/usr/share/icons/PiXflat/32x32/places/folder-templates.png");
		if (supdir[4]) copyfile(argv[2], "/usr/share/icons/PiXflat/40x40/places/folder-templates.png");
		if (supdir[5]) copyfile(argv[2], "/usr/share/icons/PiXflat/48x48/places/folder-templates.png");
		if (supdir[6]) copyfile(argv[2], "/usr/share/icons/PiXflat/64x64/places/folder-templates.png");
		if (supdir[7]) copyfile(argv[2], "/usr/share/icons/PiXflat/80x80/places/folder-templates.png");
		if (supdir[8]) copyfile(argv[2], "/usr/share/icons/PiXflat/96x96/places/folder-templates.png");
		if (supdir[9]) copyfile(argv[2], "/usr/share/icons/PiXflat/128x128/places/folder-templates.png");
		if (supdir[10]) copyfile(argv[2], "/usr/share/icons/PiXflat/160x160/places/folder-templates.png");
		if (supdir[11]) copyfile(argv[2], "/usr/share/icons/PiXflat/192x192/places/folder-templates.png");
	}
	
	else
	{
		cout << "Command does not exist - see iconswitch -h for help\n";
		return -1;
	}
	if (errors == 0) cout << "\x1b[32mNo errors with switching\x1b[1m\n";
	else if (errors == 12) cout << "\x1b[31mFATAL ERRORS:\x1b[0m no files were switched because filesystem does not exist";
	else if (errors == 1) cout << "Switch finished with 1 error";
	else cout << "Switch finished with " << int(errors) << " errors\n";
	
	return 0;
}

