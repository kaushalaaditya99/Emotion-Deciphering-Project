#pragma once
#include "Tweet.h"

Tweet parse_entry()
{
    std::string tweet;//load values from csv in here
    int emotiontag;//this is the second integer from the csv file
    //parsing here

    //after you've loaded values from the file into tweet and emotion tag, then attach them to a tweet class object 
    Tweet obj(tweet, emotiontag);
    return obj;
}