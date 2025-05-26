#include <iostream>
#include<string>

int main()
{
    std::string plusiki;
    std::string data;
    std::string imie;
    std::string nazwisko;
    std::string data_ur;
    std::cout<<"podaj datę: ";
    std::cin>>data;
    std::cout<<"Podaj imię dziecka: ";
    std::cin>>imie;
    std::cout<<"Podaj nazwisko: ";
    std::cin>> nazwisko;
    std::cout<<"Podaj date urodzenia: ";
    std::cin >>data_ur;
    std::cout<<"wpisz plusy i minusy bez odstepow"<<std::endl;
    std::cin>> plusiki;
    
    std::cout<<"Zawiercie, "<<data<<std::endl;
    std::cout<<"Diagnoza pedagogiczna"<<std::endl;
    std::cout<<"Imię, nazwisko: "<<imie<<" "<<nazwisko<<std::endl;
    std::cout<<"Data urodzenia: "<<data_ur<<std::endl;
    std::cout<<"Mocne strony dziecka:"<<std::endl;
    std::cout<<"Rozwój ruchowy:"<<std::endl;

    if(plusiki[0] == '+'){
        std::cout<<"Stoi na palcach i utrzymuje się co najmniej 1 sekundę, nie opadając na całe stopy. ";
    }
    if(plusiki[1] == '+'){
        std::cout<<"Stoi na palcach i robi co najmniej trzy kroki, nie opadając na całe stopy. ";
    }
    if(plusiki[2] == '+'){
        std::cout<<"Rzuca piłkę do badającego i łapie oraz odrzuca ją. ";
    }
    if(plusiki[3] == '+'){
        std::cout<<"Naśladuje proste układy ruchowe w zabawach. ";
    }
    if(plusiki[4] == '+'){
        std::cout<<"Chodzi po schodach w górę krokiem naprzemiennym oraz krokiem odstawno-dostawnym lub na przemiennym. ";
    }
    if(plusiki[5] == '+'){
        std::cout<<"Jeździ na dziecięcym rowerze trójkołowym lub dwukołowym posiadającą kółka boczne, naciskając naprzemiennie na pedały. ";
    }
    
    std::cout<<std::endl;
    std::cout<<"W zakresie rozwoju motoryki precyzyjnej i lateralizacji:";
    std::cout<<std::endl;
    
        if(plusiki[6] == '+'){
        std::cout<<"Przedziera kartkę papieru na pół ruchem rąk w przeciwnych kierunkach od i do siebie po demonstracji. ";
    }
        if(plusiki[7] == '+'){
        std::cout<<"Nawleka w dowolnej kolejności duże oraz małe koraliki z zestawu koralików. ";
    }
        if(plusiki[8] == '+'){
        std::cout<<"Powtarza sekwencję kolejnych naciśnięć przycisków w zabawce z przyciskami palcem wskazującym przy zachowaniu kierunku od lewej do prawej strony (po demonstracji). ";
    }
        if(plusiki[9] == '+'){
        std::cout<<"Rysuje kredkami postać człowieka w formie głowonoga z zaznaczeniem części twarzy oraz kończyn w formie kresek lub kółek. ";
    }
        if(plusiki[10] == '+'){
        std::cout<<"Trzyma kredkę w lekko zgiętych palcach przeciwstawiając kciuk pozostałym palcom. ";
    }
        if(plusiki[11] == '+'){
        std::cout<<"W czynnościach precyzyjnych posługuje się przeważnie prawą lub lewą ręką. ";
    }
    
    
    std::cout<<std::endl;
    std::cout<<" W zakresie rozwoju spostrzegania wzrokowego i koordynacji wzrokowo-ruchowej:";
    std::cout<<std::endl;
        if(plusiki[12] == '+'){
        std::cout<<"Wskazuje krótszą kreskę spośród dwóch narysowanych przez badającego, a następnie dłuższą po odwróceniu kartki. ";
    }
        if(plusiki[13] == '+'){
        std::cout<<"Łączy w całość obrazki przeciętne na cztery części w pionie i poziomie, gdy obrazki podawane są osobno. ";
    }
        if(plusiki[14] == '+'){
        std::cout<<"Składa kwadratową kartkę papieru na pół i jeszcze raz na pół tak, by powstał mały kwadrat (po demonstracji i patrząc na wzór wykonywany przez badającego).  ";
    }
        if(plusiki[15] == '+'){
        std::cout<<"Dopasowuje klocki w kształcie koła, kwadratu, trójkąta i prostokąta do odpowiedniego otworu w układance i po odwróceniu deski o 180 stopni znajduje właściwe miejsca ułożenia elementów. ";
    }
        if(plusiki[16] == '+'){
        std::cout<<"Buduje most z pięciu klocków (po demonstracji i patrząc na wzór ułożony przez badającego). ";
    }
        if(plusiki[17] == '+'){
        std::cout<<"Układa kwadrat czterech klocków (po demonstracji i rozłożeniu wzoru przez badającego). ";
    }
    
    
    std::cout<<std::endl;
    std::cout<<"W sferze rozwoju komunikowania się i mowy: ";
    std::cout<<std::endl;
    
        if(plusiki[18] == '+'){
        std::cout<<"Wskazuje odpowiednie kolory na obrazkach w książeczce. ";
    }
        if(plusiki[19] == '+'){
        std::cout<<"Rozpoznaje zwierzęta oraz meble w książeczce na podstawie pytań dotyczących ich cech i funkcji. ";
    }
        if(plusiki[20] == '+'){
        std::cout<<"Nazywa czynności przedstawione na obrazkach w książeczce. ";
    }
        if(plusiki[21] == '+'){
        std::cout<<"Opowiada treść obrazka do opisywania tworząc proste zdania. ";
    }
        if(plusiki[22] == '+'){
        std::cout<<"Powtarzaj rymowankę (po wyuczeniu i demonstracji). ";
    }
        if(plusiki[23] == '+'){
        std::cout<<"Wymowa jest jeszcze ”dziecięca”, lecz zrozumiała dla osób z najbliższego otoczenia; okresowo może pojawiać się powtarzanie sylab i słów. ";
    }
    
    
    
    std::cout<<std::endl;
    std::cout<<"W sferze rozwoju emocjonalno-społecznego: ";
    std::cout<<std::endl;
    
        if(plusiki[24] == '+'){
        std::cout<<"Po zadaniu pytania odpowiada, jak ma na imię i na nazwisko. ";
    }
        if(plusiki[25] == '+'){
        std::cout<<"Naśladuje i kontynuuje zabawę tematyczne - ”gotuje” mieszając łyżeczką w kubku; karmi łyżeczką lalkę; usypia lalkę (po demonstracji). ";
    }
        if(plusiki[26] == '+'){
        std::cout<<"Wyraża własne potrzeby w jasny dla innych sposób - zachowaniem, gestem, mową. ";
    }
        if(plusiki[27] == '+'){
        std::cout<<"W większości częściowo kontroluje swoje emocje i dostosowuje ich siłę do sytuacji; gdy złości się lub płacze, to uspokaja się po chwili; na ogół nie reaguje histerycznie czy agresywnie. ";
    }
        if(plusiki[28] == '+'){
        std::cout<<"Komunikuje się oraz współdziała z innymi osobami podczas zadań i  zabawy, stosuje się do reguł prostych zabaw: czeka na swoją kolej, wykonuje polecenia, naśladuje innych. ";
    }
        if(plusiki[29] == '+'){
        std::cout<<"Rozstaje się z bliską osobą pozostając z innymi dorosłymi lub w grupie przedszkolnej (może wymagać okresu oswojenia się z nową sytuacją). ";
    }
    
    
    std::cout<<std::endl;
    std::cout<<"W zakresie rozwoju funkcji behawioralnych z wywiadu z rodzicem: ";
    std::cout<<std::endl;
    
        if(plusiki[30] == '+'){
        std::cout<<"Samodzielnie zjada podany posiłek, siedząc przy stole: pije z kubka; zjada pieczywo, kanapkę, herbatnik lub owoc; potrafi jeść łyżką i nie wylewa z niej; umie nabijać kawałki jedzenia na widelec. ";
    }
        if(plusiki[31] == '+'){
        std::cout<<"Zgłasza w odpowiednim czasie potrzebę skorzystania z ubikacji w ciągu dnia, czasami jeszcze wymaga przypominania.Tylko sporadycznie moczy się w nocy. ";
    }
        if(plusiki[32] == '+'){
        std::cout<<"Wykonuje podstawowe czynności higieniczne. ";
    }
        if(plusiki[33] == '+'){
        std::cout<<"Rozbiera się i samodzielnie zakłada większość części garderoby, gdy osoba dorosła przygotowuje mu je i udziela pomocy w trudniejszych czynnościach. ";
    }
        if(plusiki[34] == '+'){
        std::cout<<"Sprząta zabawki po zabawie: wkłada do pudełka, odkłada na półkę. ";
    }
        if(plusiki[35] == '+'){
        std::cout<<"Samodzielnie zasypia i spokojnie przesypia całą noc, czasami może się przebudzć i wołać rodziców, ale szybko potrafi się uspokoić. ";
    }
    
    
    std::cout<<std::endl;
    std::cout<<"W zakresie wiedzy i umiejętności uczenia się: ";
    std::cout<<std::endl;
    
        if(plusiki[36] == '+'){
        std::cout<<"Klaszcze w rytm piosenki (po demonstracji). ";
    }
        if(plusiki[37] == '+'){
        std::cout<<"Rysuje ołówkiem figury geometryczne (koło, krzyż, kwadrat) według wzoru znajdującego się w książeczce. ";
    }
        if(plusiki[38] == '+'){
        std::cout<<"Liczy co najmniej pięć klocków. ";
    }
        if(plusiki[39] == '+'){
        std::cout<<"Umieszcza na polecenie klocek: na, przed, za i obok auta. ";
    }
        if(plusiki[40] == '+'){
        std::cout<<"Dobiera identyczne kształty w pary z zestawu par kształtów. ";
    }
        if(plusiki[41] == '+'){
        std::cout<<"Skupia się przez co najmniej 15 minut na ulubionych zabawach i doprowadza je do końca. ";
    }
    
    //-------------------------------------------minusiki-------------------------------------
    
    std::cout << "Słabe strony dziecka:" << std::endl;
    std::cout << "Rozwój ruchowy:" << std::endl;

    if (plusiki[0] == '-') {
        std::cout << "Nie stoi na palcach i nie utrzymuje się co najmniej 1 sekundę, opadając na całe stopy. ";
    }
    if (plusiki[1] == '-') {
        std::cout << "Nie stoi na palcach i nie robi co najmniej trzech kroków, opadając na całe stopy. ";
    }
    if (plusiki[2] == '-') {
        std::cout << "Nie rzuca piłki do badającego ani nie łapie oraz nie odrzuca jej. ";
    }
    if (plusiki[3] == '-') {
        std::cout << "Nie naśladuje prostych układów ruchowych w zabawach. ";
    }
    if (plusiki[4] == '-') {
        std::cout << "Nie chodzi po schodach w górę krokiem naprzemiennym oraz krokiem odstawno-dostawnym ani na przemiennym. ";
    }
    if (plusiki[5] == '-') {
        std::cout << "Nie jeździ na dziecięcym rowerze trójkołowym lub dwukołowym z kółkami bocznymi, nie naciskając naprzemiennie na pedały. ";
    }

    std::cout << std::endl;
    std::cout << "W zakresie rozwoju motoryki precyzyjnej i lateralizacji:" << std::endl;

    if (plusiki[6] == '-') {
        std::cout << "Nie przedziera kartki papieru na pół ruchem rąk w przeciwnych kierunkach po demonstracji. ";
    }
    if (plusiki[7] == '-') {
        std::cout << "Nie nawleka w dowolnej kolejności dużych ani małych koralików z zestawu koralików. ";
    }
    if (plusiki[8] == '-') {
        std::cout << "Nie powtarza sekwencji kolejnych naciśnięć przycisków w zabawce palcem wskazującym, nie zachowując kierunku od lewej do prawej strony (po demonstracji). ";
    }
    if (plusiki[9] == '-') {
        std::cout << "Nie rysuje kredkami postaci człowieka w formie głowonoga z zaznaczeniem części twarzy ani kończyn w formie kresek lub kółek. ";
    }
    if (plusiki[10] == '-') {
        std::cout << "Nie trzyma kredki w lekko zgiętych palcach, przeciwstawiając kciuk pozostałym palcom. ";
    }
    if (plusiki[11] == '-') {
        std::cout << "W czynnościach precyzyjnych nie posługuje się przeważnie prawą lub lewą ręką. ";

    std::cout << std::endl;
    std::cout << "W zakresie rozwoju spostrzegania wzrokowego i koordynacji wzrokowo-ruchowej:" << std::endl;

    if (plusiki[12] == '-') {
        std::cout << "Nie wskazuje krótszej kreski spośród dwóch narysowanych przez badającego, a następnie dłuższej po odwróceniu kartki. ";
    }
    if (plusiki[13] == '-') {
        std::cout << "Nie łączy w całość obrazków przeciętnych na cztery części w pionie i poziomie, gdy obrazki podawane są osobno. ";
    }
    if (plusiki[14] == '-') {
        std::cout << "Nie składa kwadratowej kartki papieru na pół i jeszcze raz na pół, tak by powstał mały kwadrat (po demonstracji i patrząc na wzór wykonywany przez badającego). ";
    }
    if (plusiki[15] == '-') {
        std::cout << "Nie dopasowuje klocków w kształcie koła, kwadratu, trójkąta i prostokąta do odpowiedniego otworu w układance, a po odwróceniu deski o 180 stopni nie znajduje właściwych miejsc ułożenia elementów. ";
    }
    if (plusiki[16] == '-') {
        std::cout << "Nie buduje mostu z pięciu klocków (po demonstracji i patrząc na wzór ułożony przez badającego). ";
    }
    if (plusiki[17] == '-') {
        std::cout << "Nie układa kwadratu z czterech klocków (po demonstracji i rozłożeniu wzoru przez badającego). ";
    }

    std::cout << std::endl;
    std::cout << "W sferze rozwoju komunikowania się i mowy: " << std::endl;

    if (plusiki[18] == '-') {
        std::cout << "Nie wskazuje odpowiednich kolorów na obrazkach w książeczce. ";
    }
    if (plusiki[19] == '-') {
        std::cout << "Nie rozpoznaje zwierząt ani mebli w książeczce na podstawie pytań dotyczących ich cech i funkcji. ";
    }
    if (plusiki[20] == '-') {
        std::cout << "Nie nazywa czynności przedstawionych na obrazkach w książeczce. ";
    }
    if (plusiki[21] == '-') {
        std::cout << "Nie opowiada treści obrazka do opisywania, tworząc proste zdania. ";
    }
    if (plusiki[22] == '-') {
        std::cout << "Nie powtarza rymowanki (po wyuczeniu i demonstracji). ";
    }
    if (plusiki[23] == '-') {
        std::cout << "Wymowa nie jest 'dziecięca', ani nie jest zrozumiała dla osób z najbliższego otoczenia; nie pojawia się okresowo powtarzanie sylab i słów. ";
    }

    std::cout << std::endl;
    std::cout << "W sferze rozwoju emocjonalno-społecznego: " << std::endl;

    if (plusiki[24] == '-') {
        std::cout << "Nie odpowiada na zadane pytanie, jak ma na imię i nazwisko. ";
    }
    if (plusiki[25] == '-') {
        std::cout << "Nie naśladuje ani nie kontynuuje zabawy tematycznej - 'nie gotuje' mieszając łyżeczką w kubku; nie karmi łyżeczką lalki; nie usypia lalki (po demonstracji). ";
    }
    if (plusiki[26] == '-') {
        std::cout << "Nie wyraża własnych potrzeb w jasny dla innych sposób - zachowaniem, gestem, mową. ";
    }
    if (plusiki[27] == '-') {
        std::cout << "W większości nie kontroluje swoich emocji ani nie dostosowuje ich siły do sytuacji; gdy się złości lub płacze, nie uspokaja się po chwili; na ogół reaguje histerycznie lub agresywnie. ";
    }
    if (plusiki[28] == '-') {
        std::cout << "Nie komunikuje się ani nie współdziała z innymi osobami podczas zadań i zabawy, nie stosuje się do reguł prostych zabaw: nie czeka na swoją kolej, nie wykonuje poleceń, nie naśladuje innych. ";
    }
    if (plusiki[29] == '-') {
        std::cout << "Nie rozstaje się z bliską osobą, pozostając z innymi dorosłymi lub w grupie przedszkolnej (może wymagać długiego okresu oswojenia się z nową sytuacją). ";
    }

    std::cout << std::endl;
    std::cout << "W zakresie rozwoju funkcji behawioralnych z wywiadu z rodzicem: " << std::endl;

    if (plusiki[30] == '-') {
        std::cout << "Nie samodzielnie zjada podany posiłek, siedząc przy stole: nie pije z kubka; nie zjada pieczywa, kanapki, herbatnika ani owocu; nie potrafi jeść łyżką ani nie wylewa z niej; nie umie nabijać kawałków jedzenia na widelec. ";
    }
    if (plusiki[31] == '-') {
        std::cout << "Nie zgłasza w odpowiednim czasie potrzeby skorzystania z ubikacji w ciągu dnia, czasami jeszcze wymaga przypominania; często moczy się w nocy. ";
    }
    if (plusiki[32] == '-') {
        std::cout << "Nie wykonuje podstawowych czynności higienicznych. ";
    }
    if (plusiki[33] == '-') {
        std::cout << "Nie rozbiera się ani nie zakłada samodzielnie większości części garderoby, gdy osoba dorosła przygotowuje mu je i udziela pomocy w trudniejszych czynnościach. ";
    }
    if (plusiki[34] == '-') {
        std::cout << "Nie sprząta zabawek po zabawie: nie wkłada do pudełka, nie odkłada na półkę. ";
    }
    if (plusiki[35] == '-') {
        std::cout << "Nie zasypia samodzielnie i nie przesypia spokojnie całej nocy. ";
    }

    std::cout << std::endl;
    std::cout << "W zakresie wiedzy i umiejętności uczenia się: " << std::endl;

    if (plusiki[36] == '-') {
        std::cout << "Nie klaszcze w rytm piosenki (po demonstracji). ";
    }
    if (plusiki[37] == '-') {
        std::cout << "Nie rysuje ołówkiem figur geometrycznych (koło, krzyż, kwadrat) według wzoru znajdującego się w książeczce. ";
    }
    if (plusiki[38] == '-') {
        std::cout << "Nie liczy co najmniej pięciu klocków. ";
    }
    if (plusiki[39] == '-') {
        std::cout << "Nie umieszcza na polecenie klocka: na, przed, za i obok auta. ";
    }
    if (plusiki[40] == '-') {
        std::cout << "Nie dobiera identycznych kształtów w pary z zestawu par kształtów. ";
    }
    if (plusiki[41] == '-') {
        std::cout << "Nie skupia się przez co najmniej 15 minut na ulubionych zabawach ani nie doprowadza ich do końca. ";
    }


    

    return 0;
}
}
