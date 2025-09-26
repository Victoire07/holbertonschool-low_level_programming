#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>


char **ligne_texte(char *ligne);
extern char **environ;
char *_getenv(const char *nom_variable);
void afficher_dossiers_du_path(void);


#endif
