# Problema-burse
Ați primit o listă cu studenții de la Electronică ce conține numele lor, mediile și numărul de restanțe. Să se determine câți din studenți vor lua bursă de merit și câți bursă de performanță. Pentru ca un student să ia bursă de performanță trebuie să fie integralist și sa aibă media mai mare sau egală de 9.80. Pentru bursă de merit, studentul trebuie să fie integralist și să aibă media între 8 și 9.80.

Date de intrare
Pe prima linie se află un număr n, reprezentând numărul de studenți. n este maxim 65535. Pe următoarele n linii se află un nume, un prenume, și 5 note ce se vor media, toate separate prin spații.

Date de ieșire
La ieșire se vor afișa două numere întregi: numărul de bursieri cu bursă de merit și numărul de bursieri cu bursă de performanță.

Observații
Pentru exercițiu, implementați o clasă Student cu un constructor ce va lua ca argumente doi vectori de caractere nume și prenume și cinci întregi ce reprezintă notele.  Adaugați două metode: int areBursaMerit() și int areBursaPerformanta() care să întoarcă 1 dacă studentul ia una din acele burse. Pentru ajutor, mai puteți realiza două metode private, double calcMedie() și int esteIntegralist(). Folosiți apoi această clasă pentru rezolvarea problemei.
