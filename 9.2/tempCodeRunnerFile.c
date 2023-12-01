specialsymbol = 0;

    printf("Create your password: ");
    scanf("%s", &psw);

  for (i = 0; psw[i] != '\0'; i++)
  {
    len++;
  }
  for(i=0;i<len;i++)
  {

    if (upr == 1 && lwr == 1 && digit == 0 && specialsymbol == 1)
    {
    	len++;
    }
  }
  for ( i = 0; i < len; i++)
  {