/**
 * Project 1 Develop your own shell
 * @author Jules Baud / Valentin Pichavant / Antoine Regnier
 * @version 1.0
 */


#include "SignalHandler.h"

/**
 * SignalHandler implementation
 */


void SignalHandler::signalHandler(int signum) {
   std::cout << "Interrupt signal (" << signum << ") received." << std::endl;

   // TODO: Close all files / destroy all dynamics objects

   exit(signum); 
}

SignalHandler::SignalHandler(void){

}

SignalHandler::~SignalHandler(void){

}