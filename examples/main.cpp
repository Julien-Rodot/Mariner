#include <cstdio>
#include "Mariner.hpp"

using namespace Mariner;

int main(int, char**) {

    game->Load();

    MTable<int> MyTable = {};
    MyTable[0] = 1;
    MyTable.Add(2);

    for(auto& [i, v] : MIterate->ipairs(MyTable)) {

        printf("%d\n", v);

    }

    MDictionary<int, int> MyDictionary = {};
    MyDictionary[0] = 1;
    MyDictionary.Add(1, 2);

    for(auto& [i, v] : MIterate->pairs(MyDictionary)) {

        printf("%d\n", v);

    };

    printf("%s\n", game->Name.ToCString());

    auto BaseServ = game->GetService<BaseService>();
    printf("%s\n",BaseServ->Name.ToCString());
    
    auto LogSrv = game->GetService<LogService>();
    LogSrv->LogMethod = LogMethod::PUTC;
    LogSrv->PrintOut(LogType::MSG_PRINT, "sdfsdf");

    game->Close();

}