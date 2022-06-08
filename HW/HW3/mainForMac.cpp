#include "Card.h"
#include "Check.h"
#include "Computer.h"
#include "Game.h"
#include "Player.h"
#include "Table.h"
#include "Tool.h"
#include "PrintForMac.h"
#include "OutOfCard.h"
#include "Compare.h"

int main()
{
    // Print().welcome();
    // Print().rule();
    // Print().shuffleCard();

    Table play;
    play.start();
    int sequence = play.whoFirst();

    Print().printSequence(sequence);

    Game().setField(3.1, 0);
    Game().setField(3.3, 1);
    Game().setField(3.4, 2);
    Game().setField(0, 3);
    Game().setField(0, 4);
    Table().setCardsType(693);

    // test
    // play.getComputer1().setComputerArr(1.3, 0);
    // play.getComputer1().setComputerArr(2.4, 1);
    // play.getComputer1().setComputerArr(5.3, 2);
    // play.getComputer1().setComputerArr(6.1, 3);
    // play.getComputer1().setComputerArr(7.1, 4);
    // play.getComputer1().setComputerArr(4.1, 5);
    // play.getComputer1().setComputerArr(4.2, 6);
    // play.getComputer1().setComputerArr(5.1, 7);
    // play.getComputer1().setComputerArr(5.2, 8);
    // play.getComputer1().setComputerArr(6.1, 9);
    // play.getComputer1().setComputerArr(6.2, 10);
    // play.getComputer1().setComputerArr(7.1, 11);
    // play.getComputer1().setComputerArr(8.1, 12);

    // play.getComputer2().setComputerArr(1.1, 0);
    // play.getComputer2().setComputerArr(2.3, 1);
    // play.getComputer2().setComputerArr(2.1, 2);
    // play.getComputer2().setComputerArr(3.2, 3);
    // play.getComputer2().setComputerArr(3.3, 4);
    // play.getComputer2().setComputerArr(3.2, 5);
    // play.getComputer2().setComputerArr(3.1, 6);
    // play.getComputer2().setComputerArr(4.4, 7);
    // play.getComputer2().setComputerArr(5.1, 8);
    // play.getComputer2().setComputerArr(5.2, 9);
    // play.getComputer2().setComputerArr(6.2, 10);
    // play.getComputer2().setComputerArr(6.3, 11);
    // play.getComputer2().setComputerArr(3.1, 12);

    // play.getComputer3().setComputerArr(1.1, 0);
    // play.getComputer3().setComputerArr(2.3, 1);
    // play.getComputer3().setComputerArr(2.1, 2);
    // play.getComputer3().setComputerArr(3.2, 3);
    // play.getComputer3().setComputerArr(3.3, 4);
    // play.getComputer3().setComputerArr(3.2, 5);
    // play.getComputer3().setComputerArr(3.1, 6);
    // play.getComputer3().setComputerArr(4.4, 7);
    // play.getComputer3().setComputerArr(5.1, 8);
    // play.getComputer3().setComputerArr(5.2, 9);
    // play.getComputer3().setComputerArr(6.2, 10);
    // play.getComputer3().setComputerArr(3.2, 11);
    // play.getComputer3().setComputerArr(3.1, 12);

    play.getPlayer().setPlayerArr(1.1, 0);
    play.getPlayer().setPlayerArr(1.2, 1);
    play.getPlayer().setPlayerArr(1.3, 2);
    play.getPlayer().setPlayerArr(3.1, 3);
    play.getPlayer().setPlayerArr(3.2, 4);
    play.getPlayer().setPlayerArr(3.3, 5);

    // test
    play.getComputer1().print();
    play.getComputer2().print();
    play.getComputer3().print();
    play.getPlayer().printPlayer_arr();

    play.outCardSequence();

    // test
    play.getComputer1().print();
    play.getComputer2().print();
    play.getComputer3().print();
    play.getPlayer().printPlayer_arr();

    return 0;
}
