int ft_rotone_main(int argc, char **argv)
{
    int i;
    int c;
    int n;

    i = 0;
    c = 'a';
    n = '\n';

    if (argc != 1)
    {
        write(1, &n, 1);
    }
    else
    { 
        while (argv[0][i] != '\0')
        {
            if ((argv[0][i] >= 'a' && argv[0][i] < 'z' )|| (argv[0][i] >= 'A' && argv[0][i] < 'Z'))
            {
                c = (argv[0][i] + 1);
                write(1, &c, 1);
            }
            else if (argv[0][i] == 'Z' || argv[0][i] == 'z')
            {
                c = (argv[0][i] - ('Z' - 'A'));
                write(1, &c, 1);
            }
            else
            {
                c = (argv[0][i]);
                write(1, &c, 1);
            }
            i++;
        }
        write(1, &n, 1);
    }
    return(0);
}

int    main()
{
    char *argv[] = {"a", "b"};
    ft_rotone_main(1, argv);
    ft_rotone_main(2, argv);
    char *argv2[] = {"asz Zljkhasd , kjh."};
    ft_rotone_main(1, argv2);

    return(0);
}