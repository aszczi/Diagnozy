#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string plusiki;
    std::string data;
    std::string imie;
    std::string nazwisko;
    std::string data_ur;

    std::cout << "Podaj datę: ";
    std::cin >> data;
    std::cout << "Podaj imię dziecka: ";
    std::cin >> imie;
    std::cout << "Podaj nazwisko: ";
    std::cin >> nazwisko;
    std::cout << "Podaj datę urodzenia: ";
    std::cin >> data_ur;
    std::cout << "Wpisz plusy i minusy bez odstępów: ";
    std::cin >> plusiki;

    // Tworzenie pliku
    std::ofstream file("diagnoza.txt");
    if (!file) {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }

    file << "Zawiercie, dnia " << data << std::endl;
    file << "Diagnoza pedagogiczna" << std::endl;
    file << "Imię, nazwisko: " << imie << " " << nazwisko << std::endl;
    file << "Data urodzenia: " << data_ur << std::endl;
    file << "Mocne strony dziecka:";

if(plusiki[0] == '+' || plusiki[1] == '+' || plusiki[2] == '+' || plusiki[3] == '+'|| plusiki[4] == '+' || plusiki[5] == '+'){
    file << std::endl;
    file << "Rozwój ruchowy:" << std::endl;
}
    if (plusiki[0] == '+') {
        file << "Stoi na jednej nodze (co najmniej trzy sekundy). ";
    }
    if (plusiki[1] == '+') {
        file << "Przenosi bez rozlewania kubek wypełniony wodą do wysokości 1 cm poniżej brzegu (na dystansie 2 metrów). ";
    }
    if (plusiki[2] == '+') {
        file << "Rzuca piłkę do dorosłego i łapie w dłonie oraz odrzuca ją. ";
    }
    if (plusiki[3] == '+') {
        file << "Odtwarza sekwencje ruchową: klaszcze dwa razy, kuca, wstaje i podskakuje. ";
    }
    if (plusiki[4] == '+') {
        file << "Chodzi po schodach krokiem naprzemiennym w górę i w dół bez trzymania. ";
    }
    if (plusiki[5] == '+') {
        file << "Jeździ na dziecięcym rowerze trójkołowym lub dwukołowym posiadającym kółka boczne, skręca, omija przeszkody i zatrzymuje się. ";
    }
if (plusiki[6] == '+' || plusiki[7] == '+' || plusiki[8] == '+' || plusiki[9] == '+' || plusiki[10] == '+' || plusiki[11] == '+') {
    file << std::endl;
    file << "W zakresie rozwoju motoryki precyzyjnej i lateralizacji:" << std::endl;
}

    if (plusiki[6] == '+') {
        file << "Wycina, w większości nie przekraczając linii, wzory z wycinanki: kwadrat, prostokąt i trójkąt. ";
    }
    if (plusiki[7] == '+') {
        file << "Nawleka kolejno jeden duży i jeden mały koralik z zestawu koralików. ";
    }
    if (plusiki[8] == '+') {
        file << "Powtarza sekwencję kolejnych naciśnięć przycisków w zabawce z przyciskami palcem wskazującym, przy zachowaniu kierunku od lewej do prawej strony, a następnie od prawej do lewej (po demonstracji). ";
    }
    if (plusiki[9] == '+') {
        file << "Rysuje kredkami postać człowieka z zaznaczeniem części twarzy oraz rąk i nóg. ";
    }
    if (plusiki[10] == '+') {
        file << "Trzyma kredkę pomiędzy opuszkami trzech zgiętych palców (wskazującego, środkowego oraz przeciwstawnego kciuka) na odpowiedniej wysokości. ";
    }
    if (plusiki[11] == '+') {
        file << "W czynnościach precyzyjnych ma wyraźnie ukształtowaną przewagę prawej lub lewej ręki. ";
    }

if (plusiki[12] == '+' || plusiki[13] == '+' || plusiki[14] == '+' || plusiki[15] == '+' || plusiki[16] == '+' || plusiki[17] == '+') {
     file << std::endl;
    file << "W zakresie rozwoju spostrzegania wzrokowego i koordynacji wzrokowo-ruchowej:" << std::endl;

}

    if (plusiki[12] == '+') {
        file << "Wskazuje brakujące elementy na obrazkach z brakami w książeczce. ";
    }
    if (plusiki[13] == '+') {
        file << "Łączy w całość obrazki przecięte na cztery części po skosie, gdy obrazki są podawane osobno. ";
    }
    if (plusiki[14] == '+') {
        file << "Składa kwadratową kartkę papieru na pół po przekątnej tak, by powstał trójkąt (po demonstracji i patrząc na wzór wykonywany przez badającego). ";
    }
    if (plusiki[15] == '+') {
        file << "Koloruje kredką kształty z kolorowanki (koło, kwadrat, trójkąt), mieszcząc się w konturze. ";
    }
    if (plusiki[16] == '+') {
        file << "Układa kształt litery T z pięciu klocków (po demonstracji i patrząc na wzór ułożony przez badającego). ";
    }
    if (plusiki[17] == '+') {
        file << "Układa kształt krzyża z pięciu klocków (po demonstracji i rozłożeniu wzoru przez badającego). ";
    }

if (plusiki[18] == '+' || plusiki[19] == '+' || plusiki[20] == '+' || plusiki[21] == '+' || plusiki[22] == '+' || plusiki[23] == '+') {
    file << std::endl;
    file << "W sferze rozwoju komunikowania się i mowy: " << std::endl;
}

    if (plusiki[18] == '+') {
        file << "Wskazuje odpowiedniej figury geometryczne (koło, krzyż, kwadrat, trójkąt, prostokąt, romb) z zestawu par kształtów. ";
    }
    if (plusiki[19] == '+') {
        file << "Rozpoznaje pojazdy w książeczce na podstawie pytań dotyczących ich cech i funkcji. ";
    }
    if (plusiki[20] == '+') {
        file << "Nazywa odpowiednie kolory na obrazku w książeczce. ";
    }
    if (plusiki[21] == '+') {
        file << "Opowiada treść obrazka do opisywania w książeczce tworząc kilkuwyrazowe zdania pojedyncze i złożone. ";
    }
    if (plusiki[22] == '+') {
        file << "Powtarza rymowankę. ";
    }
    if (plusiki[23] == '+') {
        file << "Wymowa jest zrozumiała, ale jeszcze nie wszystkie głoski są poprawnie wypowiadane, mowa dziecka jest w większości płynna. ";
    }

if (plusiki[24] == '+' || plusiki[25] == '+' || plusiki[26] == '+' || plusiki[27] == '+' || plusiki[28] == '+' || plusiki[29] == '+') {
    file << std::endl;
    file << "W sferze rozwoju emocjonalno-społecznego: " << std::endl;

}

    if (plusiki[24] == '+') {
        file << "Po zadaniu pytania odpowiada, jak ma na imię i na nazwisko oraz gdzie mieszka. ";
    }
    if (plusiki[25] == '+') {
        file << "Uczestniczy w zabawie tematycznej: wozi klocki autkiem, buduje dom z klocków lub  ''gotuje'' w kubku obiad, karmi lalkę łyżeczką i usypia ją, przyjmując rolę kierowcy, budowniczego, kucharza, opiekuna. ";
    }
    if (plusiki[26] == '+') {
        file << "Na polecenie pokazuje przed lustrem wyrazy mimiczne, przedstawiające podstawowe emocje: radość, smutek, strach, złość. ";
    }
    if (plusiki[27] == '+') {
        file << "Odróżnia zachowanie dobre od złego i ocenia je wprost jak kategoriach moralnych (grzeczny – niegrzeczny, dobry- zły) na podstawie opowiadanych historyjek. ";
    }
    if (plusiki[28] == '+') {
        file << "Uczestniczy w drobnych pracach porządkowych: pomaga układać zabawki, zamiatać, ścierać kurze, układać naczynia po zmywaniu, nakrywać do stołu. ";
    }
    if (plusiki[29] == '+') {
        file << "Chętnie i bez większych konfliktów współdziała z innymi dziećmi w zabawach grupowych. ";
    }

if (plusiki[30] == '+' || plusiki[31] == '+' || plusiki[32] == '+' || plusiki[33] == '+' || plusiki[34] == '+' || plusiki[35] == '+') {
    file<<std::endl;
    file<<"W zakresie rozwoju funkcji behawioralnych z wywiadu z rodzicem: ";
    file<<std::endl;
}

        if(plusiki[30] == '+'){
        file<<"Samodzielnie zjada w odpowiedni sposób podany posiłek, posługuje się rękami oraz łyżką i widelcem, nie brudzi się nadmiernie. Bez większych trudności akceptuje nowe potrawy. ";
    }
        if(plusiki[31] == '+'){
        file<<"Korzysta z ubikacji w odpowiednim czasie w ciągu dnia, udaje się do niej samodzielnie, choć na ogół powiadamia o tym wcześniej dorosłego. Nie moczy się w nocy. ";
    }
        if(plusiki[32] == '+'){
        file<<"Samodzielnie wykonuje podstawowe czynności higieniczne: myje i wyciera ręce, twarz, namydla ciało, czyści zęby. ";
    }
        if(plusiki[33] == '+'){
        file<<"Rozbiera się i samodzielnie lub z niewielką pomocą ubiera się w przygotowane przez dorosłego ubrania; odróżnia tył od przodu ubrania; próbuje zapinać guziki; nakłada buty, odróżniając lewy od prawego. ";
    }
        if(plusiki[34] == '+'){
        file<<"Chętnie uczestniczy w prostych obowiązkach domowych np. sprzątaniu, pomocy w kuchni, traktując to jako zabawę. ";
    }
        if(plusiki[35] == '+'){
        file<<"Zasypia samodzielnie i spokojnie przesypia całą noc, czasami może się budzić, ale szybko zasypia ponownie, nawet bez usypiania. ";
    }

    if (plusiki[36] == '+' || plusiki[37] == '+' || plusiki[38] == '+' || plusiki[39] == '+' || plusiki[40] == '+' || plusiki[41] == '+') {
    file<<std::endl;
    file<<"W zakresie wiedzy i umiejętności uczenia się: ";
    file<<std::endl;
    }


        if(plusiki[36] == '+'){
        file<<"Dzieli na sylaby z pomocą wyklaskiwania przeczytane przez badającego wyrazy z książeczki (po demonstracji przykładów). ";
    }
        if(plusiki[37] == '+'){
        file<<"Rysuje ołówkiem figury geometryczne (koło, krzyż, kwadrat, trójkąt) według wzoru znajdującego się w książeczce. ";
    }
        if(plusiki[38] == '+'){
        file<<"Odlicza i daje na polecenie: dwa, trzy, pięć, siedem klocków. ";
    }
        if(plusiki[39] == '+'){
        file<<"Umieszcza na polecenie klocek: na, przed, za, obok, pod autem. ";
    }
        if(plusiki[40] == '+'){
        file<<"Pojmuje analogie kończąc poprawnie zdania. ";
    }
        if(plusiki[41] == '+'){
        file<<"Skupia się na zajęciach zorganizowanych przez dorosłego przez cały czas trwania zabawy ; stosuje się do poleceń, stara się dokończyć zabawę. ";
    }

    //-------------------------------------------minusiki-------------------------------------

    file << std::endl;
    file << "Słabe strony dziecka:";
    if (plusiki[0] == '-' || plusiki[1] == '-' || plusiki[2] == '-' || plusiki[3] == '-' || plusiki[4] == '-' || plusiki[5] == '-') {
    file << std::endl;
    file << "Rozwój ruchowy:" << std::endl;
}


    if (plusiki[0] == '-') {
        file << "Nie stoi na jednej nodze. ";
    }
    if (plusiki[1] == '-') {
        file << "Nie przenosi bez rozlewania kubka wypełnionego wodą do wysokości 1 cm poniżej brzegu (na dystansie 2 metrów). ";
    }
    if (plusiki[2] == '-') {
        file << "Nie rzuca piłki do badającego ani nie łapie oraz nie odrzuca jej. ";
    }
    if (plusiki[3] == '-') {
        file << "Nie odtwarza sekwencji ruchowej. ";
    }
    if (plusiki[4] == '-') {
        file << "Nie chodzi po schodach w górę i w dół krokiem naprzemiennym bez trzymania. ";
    }
    if (plusiki[5] == '-') {
        file << "Nie jeździ na dziecięcym rowerze trójkołowym lub dwukołowym z kółkami bocznymi. ";
    }

if (plusiki[6] == '-' || plusiki[7] == '-' || plusiki[8] == '-' || plusiki[9] == '-' || plusiki[10] == '-' || plusiki[11] == '-') {
    file << std::endl;
    file << "W zakresie rozwoju motoryki precyzyjnej i lateralizacji:" << std::endl;

}

    if (plusiki[6] == '-') {
        file << "Nie wycina wzorów z wycinanki. ";
    }
    if (plusiki[7] == '-') {
        file << "Nie nawleka w kolejno jednego dużego a następnie małego koralika z zestawu koralików. ";
    }
    if (plusiki[8] == '-') {
        file << "Nie powtarza sekwencji kolejnych naciśnięć przycisków w zabawce przy zachowaniu kierunku od lewej do prawej, a następnie od pawej do lewej strony (po demonstacji). ";
    }
    if (plusiki[9] == '-') {
        file << "Nie rysuje kredkami postaci człowieka z zaznaczeniem części twarzy oraz rąk i nóg. ";
    }
    if (plusiki[10] == '-') {
        file << "Nie trzyma kredki pomiędzy opuszkami trzech zgiętych palców (wskazującego, środkowego oraz przeciwstawnego kciuka) na odpowiedniej wysokości. ";
    }
    if (plusiki[11] == '-') {
        file << "W czynnościach precyzyjnych nie ma wyrażnie ukształtowanej przewagi prawej ani lewej ręki. ";
    }
    if (plusiki[12] == '-' || plusiki[13] == '-' || plusiki[14] == '-' || plusiki[15] == '-' || plusiki[16] == '-' || plusiki[17] == '-') {
    file << std::endl;
    file << "W zakresie rozwoju spostrzegania wzrokowego i koordynacji wzrokowo-ruchowej:" << std::endl;

    }

    if (plusiki[12] == '-') {
        file << "Nie wskazuje brakujących elementów na obrazkach z brakami w książeczce. ";
    }
    if (plusiki[13] == '-') {
        file << "Nie łączy w całość obrazków przeciętnych na cztery części po skosie, gdy obrazki podawane są osobno. ";
    }
    if (plusiki[14] == '-') {
        file << "Nie składa kwadratowej kartki papieru na pół po przekątnej, tak by powstał trójkąt (po demonstracji i patrząc na wzór wykonywany przez badającego). ";
    }
    if (plusiki[15] == '-') {
        file << "Nie koloruje kredką kształtów z kolorowanki. ";
    }
    if (plusiki[16] == '-') {
        file << "Nie układa kształtu litery T z pięciu klocków (po demonstracji i patrząc na wzór ułożony przez badającego). ";
    }
    if (plusiki[17] == '-') {
        file << "Nie układa kształtu krzyża z pięciu klocków (po demonstracji i rozłożeniu wzoru przez badającego). ";
    }

if (plusiki[18] == '-' || plusiki[19] == '-' || plusiki[20] == '-' || plusiki[21] == '-' || plusiki[22] == '-' || plusiki[23] == '-') {
    file << std::endl;
    file << "W sferze rozwoju komunikowania się i mowy: " << std::endl;

}

    if (plusiki[18] == '-') {
        file << "Nie wskazuje odpowiednich figur geometrycznych (koło, krzyż, kwadrat, trójkąt, prostokąt, romb) z zestawu par kształtów. ";
    }
    if (plusiki[19] == '-') {
        file << "Nie rozpoznaje pojazdów w książeczce na podstawie pytań dotyczących ich cech i funkcji. ";
    }
    if (plusiki[20] == '-') {
        file << "Nie nazywa odpowiednich kolorów przedstawionych na obrazkach w książeczce. ";
    }
    if (plusiki[21] == '-') {
        file << "Nie opowiada treści obrazka do opisywania, tworząc kilkuwyrazowe zdania pojedyncze i złożone. ";
    }
    if (plusiki[22] == '-') {
        file << "Nie powtarza rymowanki. ";
    }
    if (plusiki[23] == '-') {
        file << "Wymowa dziecka nie jest zrozumiała. ";
    }

if (plusiki[24] == '-' || plusiki[25] == '-' || plusiki[26] == '-' || plusiki[27] == '-' || plusiki[28] == '-' || plusiki[29] == '-') {
    file << std::endl;
    file << "W sferze rozwoju emocjonalno-społecznego: " << std::endl;
}


    if (plusiki[24] == '-') {
        file << "Nie odpowiada na zadane pytanie, jak ma na imię i nazwisko oraz gdzie mieszka. ";
    }
    if (plusiki[25] == '-') {
        file << "Nie uczestniczy w zabawie tematycznej. ";
    }
    if (plusiki[26] == '-') {
        file << "Nie pokazuje na polecenie przed lustrem wyrazów mimicznych, przedstawiających podstawowe emocje: radość, smutek, strach, złość. ";
    }
    if (plusiki[27] == '-') {
        file << "Nie odróżnia zachowania dobrego od złego (grzeczny – niegrzeczny, dobry- zły) na podstawie opowiadanych historyjek. ";
    }
    if (plusiki[28] == '-') {
        file << "Nie uczestniczy w drobnych pracach porządkowych. ";
    }
    if (plusiki[29] == '-') {
        file << "Niechętnie współdziała z innymi dziećmi w zabawach grupowych. ";
    }

if (plusiki[30] == '-' || plusiki[31] == '-' || plusiki[32] == '-' || plusiki[33] == '-' || plusiki[34] == '-' || plusiki[35] == '-') {

    file << std::endl;
    file << "W zakresie rozwoju funkcji behawioralnych z wywiadu z rodzicem: " << std::endl;
}
    if (plusiki[30] == '-') {
        file << "Nie zjada samodzielnie podanego posiłku, nie posługuje się rękami oraz łyżką i widelcem, brudzi się nadmiernie. Ma trudności z akceptacją nowych potraw. ";
    }
    if (plusiki[31] == '-') {
        file << "Ma trudności z korzystaniem z toalety w odpowiednim czasie i samodzielnie. Często moczy się w nocy. ";
    }
    if (plusiki[32] == '-') {
        file << "Nie wykonuje samodzielnie podstawowych czynności higienicznych. ";
    }
    if (plusiki[33] == '-') {
        file << "Nie rozbiera się ani nie ubiera samodzielnie lub z niewielką pomocą w przygotowane przez dorosłego ubrania; nie odróżnia tyłu od przodu ubrania; nie zapina guzików, nie nakłada butów. ";
    }
    if (plusiki[34] == '-') {
        file << "Niechętnie uczestniczy w prostych obowiązkach domowych. ";
    }
    if (plusiki[35] == '-') {
        file << "Nie zasypia samodzielnie i nie przesypia spokojnie całej nocy. ";
    }

if (plusiki[36] == '-' || plusiki[37] == '-' || plusiki[38] == '-' || plusiki[39] == '-' || plusiki[40] == '-' || plusiki[41] == '-') {
    file << std::endl;
    file << "W zakresie wiedzy i umiejętności uczenia się: " << std::endl;

}

    if (plusiki[36] == '-') {
        file << "Nie dzieli na sylaby z pomocą wyklaskiwania przeczytanych przez badającego wyrazów z książeczki (po demonstracji przykładów). ";
    }
    if (plusiki[37] == '-') {
        file << "Nie rysuje ołówkiem figur geometrycznych (koło, krzyż, kwadrat, trójkąt) według wzoru znajdującego się w książeczce. ";
    }
    if (plusiki[38] == '-') {
        file << "Nie odlicza i nie daje na plecenie: dwóch, trzech, pięciu, siedmiu klocków. ";
    }
    if (plusiki[39] == '-') {
        file << "Nie umieszcza na polecenie klocka: na, przed, za, obok, pod autem. ";
    }
    if (plusiki[40] == '-') {
        file << "Nie pojmuje analogii przy kończeniu zdań. ";
    }
    if (plusiki[41] == '-') {
        file << "Nie skupia się na zajęciach zorganizowanych przez dorosłego przez cały czas trwania zabawy, nie stosuje się do poleceń ani nie stara się dokończyć zabawy. ";
    }


    file.close(); // Zamknięcie pliku

    file << "Wyniki zostały zapisane w pliku diagnoza.txt." << std::endl;

    return 0;
}