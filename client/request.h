#ifndef __REQUEST_H__
#define __REQUEST_H__

#include <sys/types.h>

#define REQ_CMD_SIZE 250                    //Taille de la châine représentant le programme de la requête
#define REQ_ARGS_SIZE 250                   //Taille de la châine représentant les arguments de la requête
#define REQ_PIPE_NAME_PATTERN "client_pipe" //Modèle par defaut utilisé dans le nom du tube de réponse
#define REQ_PIPE_NAME_SIZE 2000             //Taille maximale du chemin du tube de réponse


#define MAX_THREAD_NB 10      //Nombre de threads gérable par le serveur


//Structure de représentation d'une requête

typedef struct {
  char cmd[REQ_CMD_SIZE];
  char args[REQ_ARGS_SIZE];
  char pipeName[REQ_PIPE_NAME_SIZE];
  pid_t pid;
} request;


#define FIFO_SIZE MAX_THREAD_NB * sizeof(request) //Taille en octet de la file de mémoire


#endif /* __REQUEST_H__ */
