  Student(string fN, string lN, int iN, vector<int> ts)
            :Person(fN, lN, iN)
            {testScores=ts;}
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int score = 0;
            for(auto i : testScores)
                score+=i;
            score /= testScores.size();
            if(score <= 100 && score >= 90)
                return 'O';
            else if(score < 90 && score >= 80)
                return 'E';
            else if(score < 80 && score >= 70)
                return 'A';
            else if(score < 70 && score >= 55)
                return 'P';
            else if(score < 55 && score >= 40)
                return 'D';
            else
                return 'T';
        }
