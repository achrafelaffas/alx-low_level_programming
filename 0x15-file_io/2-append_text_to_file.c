#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: file
* @text_content: content to append
*
* Return: 1 on OK and -1 on !OK
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, t, s = 0;
if (!filename)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f < 0)
return (-1);
if (text_content)
{
while (text_content[s])
s++;
t = write(f, text_content, s);
if (t != s)
return (-1);
}
close(f);
return (1);
}
