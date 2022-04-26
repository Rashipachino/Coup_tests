#include <iostream>
#include <stdexcept>
#include "doctest.h"

#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;

TEST_CASE("Duke"){
    Game game_1;
    Assassin assassin{game_1, "Maia"};
    Duke duke1{game_1, "Ally"};
    Contessa contessa{game_1, "Star"};
    Duke duke2{game_1, "Cece"};
    Captain captain{game_1, "Tiggy"};
    Ambassador ambassador{game_1, "Electra"};   

    assassin.foreign_aid();
    CHECK_THROWS(duke2.coup(contessa));
    CHECK_NOTHROW(duke1.block(assassin));
    CHECK_NOTHROW(duke1.foreign_aid());
    CHECK(duke1.coins() == 2);
    contessa.income();
    CHECK_NOTHROW(duke2.tax());
    CHECK(duke2.coins() == 3);
    CHECK_THROWS(contessa.block(duke1));
    CHECK(duke1.role() == "Duke");
}

TEST_CASE("Assassin"){
    Game game_2;
    Assassin assassin{game_2, "Dan"};
    Captain captain{game_2, "Lucifer"};
    Ambassador ambassador{game_2, "Detective"};
    Contessa contessa{game_2, "Maze"};
    
    CHECK_THROWS(assassin.coup(captain));
    CHECK_NOTHROW(assassin.foreign_aid());
    captain.income();
    ambassador.foreign_aid();
    contessa.income();
    CHECK_NOTHROW(assassin.income());
    CHECK(assassin.coins() == 3);
    captain.income();
    ambassador.foreign_aid();
    contessa.income();  
    CHECK_NOTHROW(assassin.coup(captain));
    CHECK(assassin.role() == "Assassin");
}

TEST_CASE("Ambassador"){
    Game game_3;
    Captain captain{game_3, "Ariel"};
    Duke duke{game_3, "Nitzan"};
    Ambassador ambassador{game_3, "Jerusalem"};

    captain.foreign_aid();
    duke.tax();
    CHECK_NOTHROW(ambassador.transfer(duke, captain));
    CHECK(captain.coins() == 5);
    captain.income();
    duke.income();
    CHECK_NOTHROW(ambassador.income());
    captain.steal(ambassador);
    CHECK_NOTHROW(ambassador.block(captain));
    CHECK(ambassador.role() == "Ambassador");
}

TEST_CASE("Captain"){ //cap, cap, ambassador
    Game game_4;
    Captain captain1{game_4, "Rashi"};
    Captain captain2{game_4, "Keren"};
    Captain captain3{game_4, "Skrown"};

    CHECK_NOTHROW(captain1.foreign_aid());
    CHECK_NOTHROW(captain2.steal(captain1));
    CHECK(captain1.coins() == 0);
    CHECK(captain2.coins() == 2);
    CHECK_NOTHROW(captain3.block(captain2));
    CHECK(captain2.coins() == 0);
    CHECK(captain1.coins() == 2);   
    CHECK(captain1.role() == "Captain");
}

TEST_CASE("Contessa"){ // assassin
    Game game_5;
    Assassin assassin{game_5, "mother"};
    Contessa contessa{game_5, "father"};
    Duke duke{game_5, "child"};

    assassin.foreign_aid();
    contessa.income();
    duke.tax();
    assassin.income();
    contessa.foreign_aid();
    duke.income();
    assassin.coup(duke);
    CHECK_NOTHROW(contessa.block(assassin));
    CHECK(contessa.role() == "Contessa");
}


