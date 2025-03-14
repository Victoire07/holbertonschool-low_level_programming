#include "dog.h"

/**
 * _strcpy - copie la chaine de car pointee par src dans buffer pointe par des
 * @destination: destination
 * @source: source
 * Return: Pointeur vers destination
 */

char *_strcpy(char *destination, char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		*(destination + i) = source[i];
		i++;
	}
	*(destination + i) = '\0';
	return (destination);
}
/**
  * _strlen - Fonction qui calcule la longueur d'une chaine de caractere
  * @str: string
  * Return: Longueur de la chaine de caracteres (string)
  */

int _strlen(char *str)
{
	int i = 0;

	while ((*(str + i) != '\0'))
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - creer un nouveau chien
 *
 * @name: nom du chien
 * @age: age du chien
 * @owner: proprietaire du chien
 * Return: new struct for new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;
	int len_name;
	int len_owner;
	dog_t *create_new_dog;

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
	return (NULL);

	if (name == NULL)
	name = "";
	len_name = _strlen(name) + 1;
	name_copy = malloc(len_name);
	if (name_copy == NULL)
	{
		free(create_new_dog);
		return (NULL);
	}
	if (owner == NULL)

	owner = "";
	len_owner = _strlen(owner) + 1;
	owner_copy = malloc(len_owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(create_new_dog);
		return (NULL);
	}

	name_copy = _strcpy(name_copy, name);
	owner_copy = _strcpy(owner_copy, owner);

	create_new_dog->name = name_copy;
	create_new_dog->age = age;
	create_new_dog->owner = owner_copy;

	return (create_new_dog);
}
