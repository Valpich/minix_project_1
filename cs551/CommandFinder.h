/**
 * Project 1 Develop your own shell
 * @author Jules Baud / Valentin Pichavant / Antoine Regnier
 * @version 1.0
 */


#ifndef _COMMANDFINDER_H
#define _COMMANDFINDER_H

#include <string>
#include <vector>

class CommandFinder {
public: 
    
    std::vector<std::string> getFolderPaths();
    
    /**
     * @param value
     */
    void setFolderPaths(std::vector<std::string> value);
    
    std::vector<Command> findAllCommands();
private: 
    std::vector<std::string> folderPaths;
};

#endif //_COMMANDFINDER_H
