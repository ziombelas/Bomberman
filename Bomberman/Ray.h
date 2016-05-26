#pragma once
#include <SFML\Graphics.hpp>


class Ray :public sf::Drawable
{
private:
	void draw(sf::RenderWindow&, sf::RenderStates) const;

public:
	Ray();
	~Ray();

	/// Check is anything coliding with ray
	/// <param name="floatRect"> collider of an object</param>
	/// <returns>true when is collision</returns>
	/// <returns>false when isn't collision</returns>
	bool Contains(sf::FloatRect & floatRect);
	///Sets texture of the bomb
	/// <param name="texture"> texture pointer (NOTE: MUST BE ALIVE)</param>
	void SetTexture(sf::Texture & texture);

private:
	/// True - horizontal, false - vertical
	bool m_orientation;
	sf::Sprite m_sprite;
	sf::Texture * m_texture;
	std::vector<int> m_sections;

};

