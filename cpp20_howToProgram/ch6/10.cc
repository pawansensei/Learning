#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <format>

int main() {
    std::vector<std::string> articles{"The", "A", "An"};
    std::vector<std::string> nouns{"cat", "dog", "bird", "man", "woman", "robot", "car"};
    std::vector<std::string> verbs{"jumps", "runs", "flies", "sits", "sings", "drives"};
    std::vector<std::string> prepositions{"on", "under", "over", "beside", "in", "near"};

    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> article_dist(0, articles.size() - 1);
    std::uniform_int_distribution<int> noun_dist(0, nouns.size() - 1);
    std::uniform_int_distribution<int> verb_dist(0, verbs.size() - 1);
    std::uniform_int_distribution<int> prepositions_dist(0, prepositions.size() - 1);

    std::string article_1{articles[article_dist(generator)]};
    std::string noun_1{nouns[noun_dist(generator)]};
    std::string verb{verbs[verb_dist(generator)]};
    std::string preposition{prepositions[prepositions_dist(generator)]};
    std::string article_2{articles[article_dist(generator)]};
    std::string noun_2{nouns[noun_dist(generator)]};

    std::cout << std::format("{} {} {} {} {} {}.\n", article_1, noun_1, verb, preposition, article_2, noun_2);
    return 0;
}