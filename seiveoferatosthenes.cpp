 #include<bits/stdc++.h>
 using namespace std;
 int countPrimes(int n)
        {

            bool primes[n + 1];

            memset(primes, true, sizeof(primes));

            for (int p = 2; p * p < n; p++)
            {

                if (primes[p])
                {

                    for (int i = p * p; i < n; i += p)
                    {
                        primes[i] = false;
                    }
                }
            }

            int count = 0;

            for (int i = 2; i < n; i++)
            {
                if (primes[i])
                    count++;
            }

            return count;
        }