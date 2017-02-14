waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["changelog","Changelog"];
player createDiarySubject ["serverrules","Server Regeln"];
player createDiarySubject ["policerules","Polizei Gesetze"];
player createDiarySubject ["safezones","SafeZones"];
//player createDiarySubject ["civrules","Zivilisten Regelen"];
player createDiarySubject ["illegalitems","Illegal"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terroristen Regeln"];
player createDiarySubject ["controls","Steuerung"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
				TEXT HERE<br/><br/>
				"
		]
	];
*/
	player createDiaryRecord["changelog",
		[
			"Erneuerungen",
				"
					Alle Änderungen stehen im Forum: www.Fienzer.com
				"
		]
	];
	
		player createDiaryRecord ["serverrules",
		[
			"Geiselnahmen", 
				"
				1. Bei Geiselnahmen muss mit dem Opfer kommuniziert werden.<br/>
				2. Für das Wohl der Geiseln ist zu sorgen.<br/>
				3. Sobald die Geisel genommen wurde müssen Forderungen gestellt werden.<br/>
				4. Sowohl von Cops als auch von den Geiselnehmern sollten Verhandlungen geführt werden. Hierfür sollten beide Parteien aufeinander zugehen!<br/><br/>

				"
		]
	];
	
	player createDiaryRecord["safezones",
		[
			"Safezones",
				"
				1. Alle Händler (ausgenommen Rohstoffhändler und Dealer), Geldautomaten, Lizenzämter und Garagen sind Safezones.<br/>
				2. Die Safezones betragen 100m um jeden in Punkt 1 genannten Ort.<br/>
				3. In Safezones ist das Begehen von Straftaten verboten.<br/>
				4. Copspawns zählen ebenfalls als Safezone.<br/>
				5. Das Fliehen in eine Safezone während einer Handlung führt nicht zur Beendigung der Handlung!<br/>
				6. Cops dürfen in Safezones handeln und schießen!<br/><br/>
				"
		]
	];
					
	
	player createDiaryRecord ["serverrules",
		[
			"Umgang mit Waffen", 
				"
				1. Die Hauptstädte sind waffenfrei und dürfen auch nicht mit der Waffe auf dem Rücken betreten werden.<br/>
				2. In Städten ist die Waffe generell geschultert zu tragen.<br/>
				3. Sollte eine Waffe in eurem Besitz sein wenn die Polizei euch wegen einer Straftat festnimmt, darf diese beschlagnahmt werden.<br/>
				4. Wer ohne Waffenlizenz angetroffen wird, dem darf die Waffe durch die Polizei abgenommen werden.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Verhalten bei polizeilichen Maßnahmen", 
				"
				1. Den Anweisungen der Polizei ist Folge zu leisten.<br/>
				2. Wer eine Waffe bei sich führt sollte dies dem Polizisten mitteilen, bevor er aus dem Fahrzeug steigt.<br/>
				3. Widerstand gegen polizeiliche Maßnahmen wird im schlimmsten Fall mit dem Gebrauch der Schusswaffe beantwortet.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Einmischung in Polizeiaktion", 
				"
				1. Das dauerhafte spionieren und / oder stalken von Polizisten ist verboten.<br/>
				2. Das dauerhafte Blocken von Polizisten um diese daran zu hindern ihre Pflicht zu tun ist verboten.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Verkehrsregeln Luftraum", 
				"
				1. Das absichtliche Behindern von Fahrzeugen ist verboten.<br/>
				2. Das Überfliegen von Hauptstädten ist verboten.<br/>
				3. Mindestflughöhe von 150 meter ist einzuhalten.<br/>
				5. Das Landen von Helikoptern in Städten ist verboten. Ausnahmeregelungen können durch den höchsten diensthabenden Polizisten erteilt werden.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Verkehrsregeln Fahrzeuge", 
				"
				1. Es gilt rechts vor Links.<br/>
				2. Es gilt Rechtsfahrgebot.<br/>
				3. Bei Nacht ist mit Licht zu fahren.<br/>
				4. Das Parken auf der Straße ist verboten.<br/>
				5. Jeder Fahrzeugführer hat Werkzeugkästen und Erste-Hilfe-Kästen mitzuführen.<br/>
				6. Das absichtliche Behindern von Fahrzeugen ist verboten.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Kommunikation", 
				"
				1. Der Side-Chat ist für normale, kurzweilige Kommunikation gedacht.(Unter Notärtzen/ADAC oder der Polizei) <br/>
				2. Das Sprechen im Side-Chat ist verboten.<br/>
				3. Das Posten von Links (Fremdwerbung etc.) ist verboten.<br/>
				4. Beleidigungen, Rassismus, Antisemitismus und pornografische Sprache ist verboten.<br/>
				5. Kommunikationsmöglichkeiten für Zivis/Rebellen sind der Direkt.-Gruppen.-Fahrzeug.-chat NICHT DER SIDE CHANNEL!<br/>
				6. Herum Trollen in den Channeln ist auch Verboten!<br/>
				7. Die verwendung eines Mikrofons ist Pflicht.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"RDM / VDM", 
				"
				1. Das wahllose Töten von Spielern ohne RP-Hintergrund ist verboten.<br/>
				2. Solltest du als Zivilist in ein Event geraten und sterben gilt dies nicht als RDM.<br/>
				3. Das Verteidigen von Freunden und / oder Gangmitgliedern ist erlaubt.<br/>
				4. Fahrzeuge dürfen nicht zum Überfahren von Leuten verwendet werden.<br/>
				5. Bei einem Verstoss, kann dieses zu einem Ban führen.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"New Life Regel", 
				"
				1. Jeder darf genau einmal an einem Event teilnehmen. Nach seinem Tod darf der Teilnehmer 15 minuten nicht an den Ort des Geschehens zurückkehren.<br/>
				2. Ein Event beginnt mit Eröffnung des RP und endet mit dem Ausgang dessen.<br/>
				3. Server restart oder Suizid ist kein new Life.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Allgemein", 
				"
				1. Das Nutzen von Bugs, Hacks, Cheats, Exploits etc. ist verboten.<br/>
				2. Wenn ein Bug bekannt wird ist dieser im Forum zu melden.<br/>
				3. Rollenspiel mit anderen ist ein muss!<br/>
				4. Die gute Umgangssprache gehört bei uns zum guten Ton.<br/>
				5. Straftaten werden geahndet. (Was die Polizei nicht weiss, macht sie nicht heiss!) :-)<br/>
				6. Das vorsätzliche Zerstören von Fahrzeugen ohne RP-Hintergrund ist verboten.<br/>
				7. Das absichtliche Rammen von Fahrzeugen ohne RP-Hintergrund ist verboten.<br/>
				8. Die verwendung eines Mikrofons ist Pflicht.<br/>
				9. Die Gesetze von Tanoa sind verpflichtend.<br/>
				10. Bei Verstoß gegen die Gesetze wird nach Bußgeldkatalog bestraft. Im Wiederholungsfall droht eine Gefängnisstrafe.<br/>
				11. Das betreten von Polizeigeländen ist strengsten verboten. Ausgenommen die Durchreise von Checkpoints.<br/>
				12. Rückerstattung von Fahrzeugen, Waffen, etc. nur mit Videobeweis.<br/>
				13. Häuser in denen Händler oder Verarbeiter stehen, dürfen nicht gekauft werden.<br/>
				14. Häuser in Polizei oder Arzt HQ's, dürfen nicht gekauft werden.<br/>
				15. Häuser die nicht rechtmässig erworben wurden, werden gelöscht und nicht erstattet.<br/>
				16. Blaulicht Einsatz der Polizei gillt nicht als eröffnung des RP's.<br/>
				17. Nach einem Bankraub gillt das gebiet für 60 minuten als Ruhezone.<br/>
				18. Der verkauf von Fahrzeugen über 10 Mio. ist verboten.<br/><br/>
				
				"
		]
	];
	
// Police Section
	player createDiaryRecord ["policerules",
		[
			"Geiselnahmen",
				"
				1. Der ranghöchste Polizist hat die Verhandlungen zu führen.<br/>
				2. Das Wohlergehen der Geisel hat oberste Priorität.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["policerules",
		[
			"Zentralbank",
				"
				1. Sind mindestens 7 Polizisten im Dienst muss eingeschritten werden.<br/>
				2. Patroullierende Polizisten begeben sich ebenfalls umgehend zum Bankraub.<br/>
				3. Jede Möglichkeit die Bankräuber zu verhaften sollte genutzt werden.<br/>
				4. Der Einsatz von tödlicher Munition ist erlaubt.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["policerules",
		[
			"Luftraum",
				"
				1. Das Überfliegen von Hauptstädten ist verboten.<br/>
				2. Das Landen von Helikoptern in Städten und auf Straßen ist verboten. Ausnahmeregelungen können durch den höchsten diensthabenden Polizisten erteilt werden.<br/><br/>
 
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Illegal Areas", 
				"
				1. Rebellen HQ<br/>
				2. Sölndner HQ<br/>
				3. Drogen Dealer<br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Patroullien", 
				"
				1. Jeder Polizist sollte im ihm zugeteilten Gebiet patroullieren.<br/>
				2. Bei Patrouillen dürfen Bürger ohne jeglichen Grund kontrolliert und durchsucht werden.<br/>
				3. Auf Patroulliengängen ist die Waffe stets gesenkt zu halten.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Checkpoints", 
				"
				1. Die Polizei darf sowohl feste als auch mobile Straßensperren errichten um Fahrzeugkontrollen durchzuführen.<br/>
				2. Bei einer Fahrzeugkontrolle ist für die Absicherung der Polizeikräfte zu sorgen.<br/>
				3. Ein Checkpoint muss aus mindestens drei Polizisten und zwei Fahrzeugen bestehen.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Beschlagnahmung", 
				"
				1. Fahrzeuge dürfen nach mehr als 5 Minuten stillstand abgeschleppt werden.<br/>
				2. Fahrzeuge welche Ordnungsgemäß auf Parkplätzen abgestellt und unbeschädigt sind dürfen nicht abgeschleppt werden.<br/>
				3. Fahrzeuge welche für schwere Straftaten eingesetzt werden dürfen von der Polizei dauerhaft beschlagnahmt und zerstört werden.<br/>
				4. Illegale Fahrzeuge dürfen sofort dauerhaft beschlagnahmt werden.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Geschwindigkeit", 
				"
				1. In Hauptstädten: Gemäss Signalistation/h<br/>
				2. Hauptstraßen: Gemäss Signalistation<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"New Life", 
				"
				1. Die One-Life-Regel für Cops gilt nur dann, wenn mehr als 4 Polizisten online sind.<br/>
				2. Sind 4 oder weniger Cops online, hat ein Polizist drei Leben.<br/>
				3. Das Wiederbeleben von Cops während einer Handlung ist verboten!<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Gefägnis und Tickets",
				"
				1. Jeder Polizist ist angehalten, Bußgelder statt Gefängnisstrafen zu verhängen.<br/>
				2. Der Bußgeldkatalog ist hierbei bindend.<br/>
				3. Wiederholungstäter sind zu inhaftieren.<br/>
				4. Jeder Bürger hat das Recht zu erfahren, wieso er festgenommen wird.<br/>
				5. Jeder Bürger hat das Recht darauf, seine Rechte vorgelesen zu bekommen.<br/>
				6. Sollte ein Bußgeld verhängt und bezahlt werden ist der Gefangene freizulassen, außer es handelt sich um ein Vergehen, welches ein Bußgeld und eine Haftstrafe zur Folge hat.<br/><br/>
				"
		]
	];
		
	player createDiaryRecord ["policerules",
		[
			"Legale Waffen", 
				"
				Legalle Civ Waffen (Mit Waffenschein):<br/>
				1. P07<br/>
				3. ACP-C2<br/>
				4. Sting<br/>
				5. PDW2000<br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Einsatz von Waffen",
				"
				1. Jeder Polizist ist angehalten auf nicht-tödliche Waffen zurückzugreifen.<br/>
				2. Die Polizei sollte versuchen, jeden Verdächtigen festzunehmen, nicht zu töten.<br/>
				3. Der Einsatz von tödlicher Munition ist Rekruten nur mit Anweisung eines ranghöheren Polizisten erlaubt.<br/>
				4. Waffen sind generell gesenkt zu tragen.<br/>
				5. Polizisten dürfen sich mit tödlicher Munition zur Wehr setzen falls sie angegriffen werden.<br/>
				6. In Ausnahmesituationen ( Stadtübernahme, etc.), kann das Militär angefordert werden, dieses darf nach eigenem ermessen handeln.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Razzien",
				"
				1. Bei einer Razzia müssen mindestens vier Beamte anwesend sein.<br/>
				2. Bei einer Razzia darf jede Person zunächst kontrolliert und festgehalten werden.<br/>
				3. Nach einer Razzia darf das entsprechende Gebiet für mindestens 30 Minuten nicht erneut betreten werden.<br/>
				4. Polizisten dürfen sich zur Observierung für maximal 15 Minuten im entsprechende Gebiet aufhalten.<br/>
				5. Das becampen von illegalen Gebieten ist untersagt.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Rangkette",
				"
				Rangkette:<br/>
				1. Anwärter<br/>
				2. Polizisten<br/>
				3. Kommissar<br/>
				4. Hauptkommissar<br/>
				5. SEK<br/>
				6. GSG-9<br/>
				7. Schweizer Armee<br/>
				8. Admins<br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Sonstiges",
				"
				1. Hochrangige Beamte dürfen Informanten, Spionagegruppierungen oder andere Leute kontaktieren und einstellen und für die Hilfe bei polizeilichen Einsätzen/Operationen oder für das dienen als Wachmann bezahlen.<br/>
				2. Verträge bleiben aufrecht, bis der zuständige Beamte den Vertrag beendet.<br/>
				3. Verträge bestehen nach dem Tod des Anbieters oder des Ausführenden weiter, außer der Vertrag wurde davor annulliert.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["policerules",
		[
			"Polizei Regeln",
				"
				1. Polizisten haben sich dauerhaft im TS aufzuhalten.<br/>
				2. Jeder Polizist hat sich an die geltenden Gesetze in Tanoa zu halten.<br/>
				3. Die Polizei ist Freund und Helfer und sollte sich auch entsprechend verhalten.<br/>
				4. Die Polizeigesetze sind bindend.<br/>
				5. Bei wiederholtem Verstoß gegen die Polizeigesetze wird der Polizist unehrenhaft aus dem Dienst entlassen.<br/><br/>
				"
		]
	];
	
	
	
// Illegal Items Section
	player createDiaryRecord ["illegalitems",
		[
			"Rebellen Regeln",
				"
				1. Halt Überfall, gilt nicht als Eventeröffnung!<br/>
				2. Eventeröffnungen dürfen nicht im Side-Chat gemacht werden. Ausgenommen hiervon sind Terrorwarnungen!<br/>
				3. Bedenke jeder Spieler brauch eine Reaktionszeit im Normalfall 5 sek wenn der Überfall im Direktchannel angekündigt wurde und 60 sek. wenn dieses per sms passiert!<br/>
				4. Haben die Spieler keine Zeit zureagieren und werden getötet gillt dies als RDM!<br/>
				5. Ein Banküberfall / Terroranschlag darf erst stattfinden wenn min. 5 Polizisten online sind.<br/>
				6. Terroranschläge müssen mindestens 15 Minuten vor dem Anschlag angekündigt werden.<br/>
				7. Terroranschläge müssen sowohl durch den Side-Chat als auch durch Polizei-SMS angekündigt werden.<br/>
				8. Die One-Life-Regel gilt auch bei Terroranschlägen.<br/>
				9. Nach einem Anschlag ist das Gebiet für 60 Minuten Ruhezone!<br/>
				10. Camping ist verboten. Der erste Überfall ist der Beginn des Campens.<br/>
				11. Das wahllose Töten von Personen während des Campens ist verboten.<br/>
				12. Mit bewaffneten Fahrzeugen darf nicht auf Zivilisten geschossen werden.<br/>
				13. Bewaffnete Fahrzeuge dürfen lediglich zur auschaltung von Gepanzeten Fahrzeugen dienen.<br/>
				14. Nach dem Überfall darf das Gebiet für 15 Minuten von den Banditen nicht wieder betreten werden.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Gang Regeln",
				"
				1. Kriege dürfen nur stattfinden wenn sie vorher im Forum angekündigt wurden (12 std vorher) und unter Rücksprache mit den Admins.<br/>
				2. Das Verteidigen von Gangmitgliedern ist erlaubt.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Illegale Fahrzeuge",
				"
				Fahrzuge mit + sind immer Illegal der Rest nur in Kavalla<br/><br/>

				1. Ifrit<br/>
				2. Hunter<br/>
				3. HunterHMG+<br/>
				4. Strider+<br/>
				5. Geländewagen Rebellen<br/>
				6. Geländewagen bewaffnet+<br/>
				7. Huron Bewaffnet+<br/>
				8. Hellcat Bewaffnet+<br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Illegale Waffen",
				"
				1. Rebellen Waffen<br/>
				2. Söldner Waffen<br/>
				3. Polizeiwaffen<br/><br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Illegale Rohstoffe",
				"
				Die Folgenden Rohstoffe sind Illegal:<br/><br/>
				1. Schildkröten<br/>
				2. Kokain<br/>
				3. Heroin<br/>
				4. Marihuana<br/>
				5. Meth<br/>
				6. LSD<br/>
				7. GoldBarren<br/><br/>
				"
		]
	];

	
// Controls Section

	player createDiaryRecord ["controls",
		[
			"Fienzer Steuerung",
				"
				F: Polizei Sirene<br/>
				K: EMP Generator<br/>
				M: Karte<br/>
				T: Fahrzeug Kofferraum<br/>
				U: Fahrzeuge auf/zuschließen<br/>
				U: Häuser Öffnen/Schließen<br/>
				Z: Spieler Menü<br/>
				Ö: Polizei Warnung<br/>
				Ä: Cop Schranken öffnen<br/>
				O: Cops Nagelbänder legen<br/>
				Space: Springen<br/>
				Tab: Begrüssung<br/>
				Left Shift + PgDn: Ohrstöpsel<br/>
				Left Shift + R: Festnehmen<br/>
				Left Shift + B: Ergeben<br/>
				Left Shift + G: Knockout<br/>
				Left Shift + C: Kabelbinder<br/>
				Left Shift + H: Waffe Holstern<br/>
				Left Shift + L: Blaulicht<br/>
				Left Windows: Housing option<br/>
				Left Windows: Farmen an Feldern<br/>
				Left Windows: Spieler Interaktionsmenü<br/>
				Left Windows: Fahrzeug Interaktionsmenü<br/>
				"
		]
	];