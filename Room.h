




class Interactable {
private:
	std::string name;
public:
	Interactable() {}
	void setName(std::string);
	std::string getName();
};






template <class T>
class Room {
private:
	T roomItems[5];
public:
	std::string name = "Room #1";
};
