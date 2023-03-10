#include "../include/injectorUtils.h"

void injectorUtils::get_process_id(const char* windName, DWORD & proccId){
    GetWindowThreadProcessId(FindWindow(NULL, windName), &proccId);
}

void injectorUtils::error_msg(const char* title, const char* body){
    MessageBox(NULL, body, title, NULL);
    exit(-1);
}

bool injectorUtils::dll_exist(const char* filename){
    struct stat buffer;
    return(stat(filename, &buffer) == 0);
}