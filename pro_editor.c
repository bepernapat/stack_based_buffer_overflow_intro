#include <stdio.h>

void banner() {
	puts(" _____           ______    _ _ _");
	puts("|  __ \\         |  ____|  | (_) |");
	puts("| |__) | __ ___ | |__   __| |_| |_ ___  _ __");
	puts("|  ___/ '__/ _ \\|  __| / _` | | __/ _ \\| '__|");
	puts("| |   | | | (_) | |___| (_| | | || (_) | |");
	puts("|_|   |_|  \\___/|______\\__,_|_|\\__\\___/|_|");
	puts("                     Welcome to ProEditor v12.3");
	puts("\n\n\n");
}

void license_accepted() {
	puts("[+] Your license key has been accepted.");
	puts("===================================");
	puts("===================================");
	puts("====      CONGRATULATIONS      ====");
	puts("===================================");
	puts("====        YOU MANAGED        ====");
	puts("====   TO EXPLOIT THE BINARY   ====");
	puts("===================================");
	puts("===================================");
	puts("==  STACK BASED BUFFER OVERFLOW  ==");
	puts("===================================");
	puts("===================================");
}

void get_license() {
	
	char license_buffer[256];

	puts("[+] Thanks for downloading ProEditor.");
	puts("[+] To proceed with the installation, please submit your license key:");

	gets(license_buffer);

	printf("[+] Submitted license key: %s\n", license_buffer);

	return;	
}

int main() {

	banner();
	
	get_license();
	
	puts("[!] Invalid license, no ProEditor for you :v");
}
