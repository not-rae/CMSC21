/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */

/* reads a line of input into the specified string */
int read_line(char str[], int n);

int main(void)
{
	/* array to store the reminders */
	char reminders[MAX_REMIND] [MSG_LEN + 3];

	/* strings to store the day and reminder message */
	char day_str[3], msg_str[MSG_LEN + 1];
	int day, i, j, num_remind = 0;

	/* loop until the user enters 0 for the day */
	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}

		/* prompt the user to input a day and reminder message */
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if (day == 0)
			break;
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;

		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);

		/* insert the reminder at the specified index */
		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);

		/* increment the number of reminders */
		num_remind++;
	}

	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	return 0;
}

/* reads a line of input into specified string */
int read_line(char str[], int n)
{
	int ch, i = 0;

	/* loop until reach the end of the line */
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
		str[i] = '\0';
		return i;
}