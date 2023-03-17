//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <fstream>
//using namespace std;
//
//void writeFile(){
//	//r w a
//	FILE *fp;
//	fp = fopen("sample.txt","w");
////	char msg[30] = "Hello world";
////	if(fp){
////		for(int i=0; i<strlen(msg); i++){
////			putc(msg[i],fp);
////		}
////	}
//	if(fp){
//		for(int i=65; i<91; i++){
//			char ch = i;
//			putc(ch,fp);
//		}
//		fclose(fp);
//	}
//
//	
//}
//
//
//void appendFile(){
//	//r w a
//	FILE *fp;
//	fp = fopen("sample.txt","a");
//
//	if(fp){
//		for(int i=97; i<123; i++){
//			char ch = i;
//			putc(ch,fp);
//		}
//		fclose(fp);
//	}
//
//	
//}
//
//void readFile(){
//	int ch; 
//	FILE *fp;
//	fp = fopen("sample.cpp","r");
//	if(fp){
//		while((ch = getc(fp)) != EOF){
//			putchar(ch);
//		}
//		fclose(fp);
//	}
//}
//
//void writeStringFile(){
//	FILE *fp;
//	fp = fopen("sample.txt","w");
//	fprintf(fp,"%s","The quick brown fox\n");
//	fprintf(fp,"%s","Welcome to c++\n");
//	fclose(fp);
//}
//
//
//void writeMT(){
//	FILE *fp;
//	fp = fopen("sample.txt","w");
//	for(int i=1; i<=10; i++){
//		for(int j=1; j<=10; j++){
//			fprintf(fp,"%5d",i*j);
//		}
//			fprintf(fp,"\n");
//	}
//
//	fclose(fp);
//}
//
//void ofStreamFile(){
//	ofstream filestream("sample.txt");
////	myFile.open("sample.txt");
//	if(filestream.is_open()){
//		
//		filestream << "Sample fstream using ofstream abcd";
//		filestream.close();
//	} else {
//		cout << "unsuccessful";
//	}
//	
//	
//}
//
//int main(){
////	writeFile();
////	writeStringFile();
////	writeMT();
//	ofStreamFile();
//	return 0;
//}