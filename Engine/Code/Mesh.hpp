#pragma once

#include "Handled.hpp"
#include "MeshResource.hpp"

namespace ft
{
	// A consid�rer comme une ressource GPU ?
	// Dans le sens o� il ne faudrait pas la charger sur le GPU plusieurs fois,
	// ni la d�charger tant qu'elle est utilis�e.
	// Faire la m�me distinction qu'entre Image et Texture.
	class Mesh : public Handled, public CountableSPtr
	{
	public:

				Mesh();
		virtual ~Mesh();

		virtual ErrorCode	Create(const SPtr<MeshResource>& xMeshResource);
		virtual ErrorCode	Destroy() override;

		virtual bool		IsValid() const;

		virtual void		Draw() const;

	protected:

		SPtr<MeshResource>	m_xMeshResource;

		uint32	m_iVbo;
		uint32	m_iEbo;

	private:

		Mesh(const Mesh&) FT_DELETED;
		Mesh& operator = (const Mesh&) FT_DELETED;
	};
}
