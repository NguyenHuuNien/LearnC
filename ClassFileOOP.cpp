#include<iostream>

using namespace std;

class File {
protected:
	string path;
	double size;
	string type;
public:
	File() {
	}

	File(string path, double size, string type) {
		this->path = path;
		this->size = size;
		this->type = type;
	}

	void getInfor() {
		cout << "FILE: " << this->path << " " << this->size << " " << this->type << endl;
	}
};

class Video : public File {
protected:
	string duration;
	string resolution;
public:
	Video(string path, double size, string type, string duration, string resolution) :File(path, size, "Video") {
		this->duration = duration;
		this->resolution = resolution;
	}
	void getInfor() {
		cout << "Video: " << this->path << " " << this->size << " " << this->type <<" " << this->duration
			<<" " << this->resolution << endl;
	}
};

class Document : public File {
protected:
	int numPages;
public:
	Document(string path, double size, string type, int numPages) :File(path, size, "Document") {
		this->numPages = numPages;
	}
	void getInfor() {
		cout << "DOCUMENT: " << this->path << " " << this->size << " " << this->type
			<< " " << this->numPages << endl;
	}
};

class Music : public File {
protected:
	string nameSong;
	string artist;
public:
	Music(string path, double size, string type, string nameSong, string artist) :File(path, size, "Music") {
		this->nameSong = nameSong;
		this->artist = artist;
	}
	void getInfor() {
		cout << "MUSIC: " << this->path << " " << this->size << " " << this->type
			<< " " << this->nameSong << " " << this->artist << endl;
	}
};

int main() {
	File a("D:/",30,"AA");
	a.getInfor();
	Music b("D:/Music", 18, "MP3", "Arsenal Thua", "MU");
	b.getInfor();
	return 0;
}