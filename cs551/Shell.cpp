/**
 * Project 1 Develop your own shell
 * @author Jules Baud / Valentin Pichavant / Antoine Regnier
 * @version 1.0
 */


#include "Shell.h"

/**
 * Shell implementation
 */


/**
 * @return std::string
 */
std::string Shell::getName() {
    return name;
}

/**
 * @param value
 */
void Shell::setName(std::string value) {
    name = value;
}

/**
 * @return Profile
 */
Profile Shell::getProfile() {
    return profile;
}

/**
 * @param value
 */
void Shell::setProfile(Profile value) {
    profile = value;
}

/**
 * @return History
 */
History Shell::getHistory() {
    return history;
}

/**
 * @param value
 */
void Shell::setHistory(History value) {
    history = value;
}

/**
 * @return std::vector<Command>
 */
std::vector<Command> Shell::getCommandList() {
	return commandList;
}

/**
 * @param value
 */
void Shell::setCommandList(std::vector<Command> value) {
    commandList = value;
}

/**
 * @return CommandFinder
 */
CommandFinder Shell::getCommandFinder() {
    return commandFinder;
}

/**
 * @param value
 */
void Shell::setCommandFinder(CommandFinder value) {
    commandFinder = value;
}

Shell::Shell(void){

}

Shell::~Shell(void){

}

/**
 * @return int
 */
int main () {
    std::cout << "Hello !" << std::endl;
}
