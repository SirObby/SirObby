#include <string>
#include <variant>
#include <vector>

class Developer
{
private:
    std::string n;
    std::string l;
    std::vector<std::string> ls;
    std::vector<std::vector<std::string>> ps;
public:
    Developer();
    void setName(std::string name);
    void setPrimaryLang(std::string l);
    void setLanguages(std::vector<std::string> languages);
    void setProjects(std::vector<std::vector<std::string>> ps);
    std::string name();
    std::string primaryLang();
    std::vector<std::string> languages();
    std::vector<std::vector<std::string>> projects();
    std::vector<std::string> print();

};

Developer::Developer() {};
void Developer::setName(std::string name) {
    Developer::n = name;
};
void Developer::setPrimaryLang(std::string l) {
    Developer::l = l;
};
void Developer::setLanguages(std::vector<std::string> languages) {
    Developer::ls = languages;
};
std::string Developer::name() {
    return Developer::n;
};
std::string Developer::primaryLang() {
    return Developer::l;
};
std::vector<std::string> Developer::languages() {
    return Developer::ls; 
};
void Developer::setProjects(std::vector<std::vector<std::string>> ps) {
    Developer::ps = ps;
}
std::vector<std::vector<std::string>> Developer::projects() {
    return Developer::ps;
}
std::vector<std::string> Developer::print() {

    std::vector<std::string> lines = {};
    
    std::string l1 = "Developer: " + Developer::n;
    std::string l2 = "Primary Language: " + Developer::l;
    lines.push_back(l1);
    lines.push_back(l2);
    for (size_t i = 0; i < ls.size(); i++)
    {
        std::string lN = "Languages: " + ls[i];
        lines.push_back(lN);
    }
    lines.push_back("Projects:");
    for (size_t i2 = 0; i2 < Developer::ps.size(); i2++)
    {
        std::vector<std::string> p = Developer::ps[i2];
        std::string lN = p[0] + ":\n| Made in: " + p[1] + "\n| Main maintainer: " + p[2];
        lines.push_back(lN);
    }
    
    return lines;

}