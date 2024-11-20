#include "gtest/gtest.h"
#include "../lib/Player.h"
#include "../lib/Map.h"
#include "../lib/tiles/EmptyTile.h"
#include "../lib/tiles/SpawnTile.h"
#include <iostream>
using namespace std;

TEST(MapMovement, MapMovementUpRightRight) {
    Player player;
    Map map;

    istringstream input("w\nd\nd\n");
    cin.rdbuf(input.rdbuf());

    player.move(map); // Reads 'w'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'

    EXPECT_EQ(player.getPositionX(), 2); // Check X-coordinate
    EXPECT_EQ(player.getPositionY(), 6); // Check Y-coordinate
}

TEST(MapMovement, MapMovementRightRightRightUpUpUpLeftDown) {
    Player player;
    Map map;

    istringstream input("d\nd\nd\nw\nw\nw\na\ns\n");
    cin.rdbuf(input.rdbuf());

    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'a'
    player.move(map); // Reads 's'

    EXPECT_EQ(player.getPositionX(), 2); // Check X-coordinate
    EXPECT_EQ(player.getPositionY(), 5); // Check Y-coordinate
}

TEST(MapMovement, MapMovementRightRightRightRightRightRightRightUpUpUpUpUpUpUp) {
    Player player;
    Map map;

    istringstream input("d\nd\nd\nd\nd\nd\nd\nw\nw\nw\nw\nw\nw\nw\n");
    cin.rdbuf(input.rdbuf());

    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'd'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'
    player.move(map); // Reads 'w'

    EXPECT_EQ(player.getPositionX(), 7); // Check X-coordinate
    EXPECT_EQ(player.getPositionY(), 0); // Check Y-coordinate
}

TEST(MapMovement, MapDownRight) {
    Player player;
    Map map;

    istringstream input("s\nd\n");
    cin.rdbuf(input.rdbuf());

    player.move(map); // Reads 's'
    player.move(map); // Reads 'd'

    EXPECT_EQ(player.getPositionX(), 1); // Check X-coordinate
    EXPECT_EQ(player.getPositionY(), 7); // Check Y-coordinate
}