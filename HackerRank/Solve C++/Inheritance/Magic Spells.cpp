
if (Fireball* f = dynamic_cast<Fireball*>(spell))  f -> revealFirepower();
    else if (Frostbite* fr = dynamic_cast<Frostbite*>(spell))  fr -> revealFrostpower();
    else if (Waterbolt* w = dynamic_cast<Waterbolt*>(spell))  w -> revealWaterpower();
    else if (Thunderstorm* t = dynamic_cast<Thunderstorm*>(spell))  t -> revealThunderpower();
    else {
        string x =  spell -> revealScrollName();
        int m = x.length();
        string y = SpellJournal::journal;
        int n = y.length();
        int array[m + 1][n + 1];
        for (int i = 0; i <= m; i++) array[i][0] = 0;
        for (int j = 0; j <= n; j++) array[0][j] = 0;
        for (int i = 1; i <= m; i++) 
            for (int j = 1; j <= n; j++) {
                if (x[i - 1] == y[j - 1])
                    array[i][j] = array[i - 1][j - 1] + 1;
                else
                    array[i][j] = array[i][j - 1] > array[i - 1][j] ? array[i][j - 1] : array[i - 1][j];
            }

        cout << array[m][n] << endl;
    }
  /* Enter your code here */

