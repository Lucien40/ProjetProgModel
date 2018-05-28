# Reponse


1. Vecteurs:
  - **[1.1]** Comment représentez-vous ces vecteurs ? Comment sont-ils organisés : quels attributs ? quelles méthodes ? quels droits d'accès ?
  > La classe vecteurs possede une collection (vector) de doubles ainsi qu'un attribut de dimension. Les deux sont privés et l'on accède aux elements de la collection à travers un get, de meme pour la dimension. On surcharge les operateurs de la manière usuelle

  - **[1.2]** Quel choix avez vous fait pour les opérations entre vecteurs de dimensions différentes ?
  > J'ai préféré de lancer une execption, cela alerte l'utilisateur à une utilisation abusive et lui laisse le choix d'ajouter une dimension

4. Vecteur Revisités:
  - **[4.1]** Avez-vous ajouté un constructeur de copie ? Pourquoi (justifiez votre choix) ?
  > Je n'ai pas rajouté un constructeur de copie car celui par défault fait ce que l'on veut... Il faut juste copier les attributs ainsi c'est ce qu'il fait

  - **[4.2]** Si l'on souhaitait ajouter un constructeur par coordonnées sphériques (deux angles et une longueur) pour les vecteurs de dimension 3,
    - **(a)** que cela impliquerait-il au niveau des attributs de la classe ?
    >  Cela changerai la representation interne, ou il faudrait les convertir..

    - **(b)** quelle serait la difficulté majeure (voire l'impossibilité) de sa réalisation en C++ ?
    > Car on à déja un constructeur à 3 doubles, on pourrait pas les differencier (cartesien et polaire)

  - **[4.3]** Quels opérateurs avez vous introduits ?
  > J'ai introduit l'operateur == (pas d'autre comparaison possible mathématiquement) et << pour le cout usuel.

6. Integrateur:
  - **[6.1]** Comment avez vous conçu votre classe Integrateur ?
  > Une minuscule classe abstraite pour obliger la redefinition de la methode fonction

  - **[6.2]** Quelle est la relation entre les classes Integrateur et IntegrateurEulerCromer ?
  > Une relation d'heritage car IntegrateurEulerCromer *est un*  integrateur

7. Pendule et Ressort:
  - **[7.1]** Comment se situent ces classes par rapport à la classe Oscillateur définie la semaine passée ?
  > Les deux *sont* des Oscillateurs, et ainsi heritents de celle si.

8. Conception du systeme:
 - **[8.1]** En termes de POO, quelle est donc la nature de la méthode `dessine()` ?
 > Cest une methode purement virtuelle obligeant l'implementation aux sous classes mais donnant un objet dessinable une certaine structure

 - **[8.2]** Quelle est la bonne façon de le faire dans un cadre de programmation orientée-objet ?
 > Une collection heterogène, donc de pointeurs (j'utiles des smart pointeurs pour gerer les delete etc). Ainsi systeme possede les seules pointeurs vers des oscillateurs, que l'on à ajouter en les copiant

 - **[8.3]** A quoi faut-il faire attention pour les classes contenant des pointeurs ? Quelles solutions peut-on envisager ?
 > Aux fait que les pointeurs survivent la destruction des objets, il faud donc limiter/abolir la c0pie et s'assurer une bonne destruction

 - **[8.4]** Comment représentez vous la classe Systeme ?  
 > Une class possedant un vector de uniquePtr sur des Oscillateur, on peut en ajouter en invoquant une copie polymorphique. On fait evoluer en utilisant un integrateur de Newmark.

11. Oscillateurs Couples
 - **[11.1]** Comment représentez-vous ces nouveaux oscillateurs ? Où s'incrivent-ils dans votre conception ?
 > Comme leurs equations d'evolution indiquent ce *sont* des nouveaux oscillateurs, ils heritent donc aussi de `Oscillateur`

13. Integrateurs
 - **[13.1]** Où cela s'intègre-t-il dans votre projet/conception ? Quels changements cela engendre ?
 > De nouvelles sous-classes de integrateur. J'ai choisis directement d'utiliser l'Integrateur de Newmark dans system pour etre plus precis
