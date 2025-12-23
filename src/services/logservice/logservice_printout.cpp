#include "logservice.hpp"

#include <print>
#include <cstdio>
#include <exception>

void Mariner::LogService::PrintOut(LogType LogType, MString Message) {

    Message = Message.Concatenate("\n");

    this->LogOutput.Add(Message);

    switch (this->LogMethod) {

        case STD_PRINT: {

            std::printf("%s", Message.ToCString());
            break;

        }

        case PRINTF: { 

            printf("%s", Message.ToCString());
            break;

        }

        case PUTS: {

            puts(Message.ToCString());
            break;

        }

        case PUTC: {

            char Buff[1024];
            strcpy(Buff, Message.ToCString());
            Buff[sizeof(Buff) - 1] = '\0';


            for (int i = 0; Buff[i] != '\0'; i++) {

                putc(Buff[i], stdout);

            }

            break;

        }

        default:

            // ok what the fuck how the hell did we get here

            throw std::runtime_error("This instance wasnt instanisated correctly. Check if Mariner was built properly.");

    }

};