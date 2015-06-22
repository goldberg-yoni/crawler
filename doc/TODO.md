# TODO

Recuperer les informations suivantes dans un liens:

Obligatoire:

- Url
- Title
- Image

Facultatif:

- Description
- Mots cles
- tout ce qui est pertinent


Mais souvent les balises ont des prefixs

Par exemple pour google:
```
<meta property="og:title" content="MinuteBuzz.com | Actualité et news qui buzz - Faites passer l&#39;info !">
```
ou pour twitter:
```
<meta name="twitter:title" content="MinuteBuzz.com | Actualité et news qui buzz - Faites passer l'info !">
```
et il y a d'autres prefixs

le but est de recuperer 1 fois les informations , mais de penser a tout les cas possible

Prochain Update :

- Liste des prefixs possible
- Nom de la bdd qu'on va utiliser (elastic search pour le moment)