var contactResult;

var groups = ['Family',
              'Work',
              'Friend'];

var groupIds = [];

var contact1 = new tizen.Contact({
					name: new tizen.ContactName ({firstName: 'John', lastName: 'Smith'}), 
					phoneNumbers: [new tizen.ContactPhoneNumber('0123456789')]
				});

var contact2= new tizen.Contact({
					name: new tizen.ContactName ({firstName: 'Joan', lastName: 'Snow'}), 
					phoneNumbers: [new tizen.ContactPhoneNumber('1234567890')]
				});

function updateContact(contact)
{
	contact.name.firstName = "Johnson";
	addressBook.update(contact);
	console.log('updated contact [' + contact.id + ']: ' 
			+ contact.name.firstName + ' ' + contact.name.lastName);
}


function exportingVcard(tempContacts)
{
	var vcards = [];
	for(i = 0; i < tempContacts.length; i++)
	{
		try {
			vcards[i] = tempContacts[i].convertToString("VCARD_30");
		} catch (error)	{
			console.log(error.name + ": " + error.message);
		}
	}
	
}

function updatePerson(person)
{
	person.displayName = 'Johnson';
	try
	{
		tizen.contact.update(person);
	} catch (error)
	{
		console.log(error.name + ": " + error.message);
	}
}

function personListSuccessCallback(persons)
{
	console.log('Number of persons: ' + persons.length);
	for (i = 0; i < persons.length; i++)
	{
		console.log('Person id: ' + persons[i].id);
	}
}

function getPersons()
{
	tizen.contact.find(personListSuccessCallback, errorCallback);
}

function mergePerson(contacts)
{
	originPerson = tizen.contact.get(contacts[0].personId);
	originPerson.link(contacts[1].personId);
}

function contactListSuccessCallback(contacts)
{
	console.log('Number of searched contacts: ' + contacts.length);
	if (contacts.length > 0)
	{
		for(i = 0; i < contacts.length; i++)
		{
			console.log('contact [' + contacts[i].id + ']: ' 
					+ contacts[i].name.firstName + ' ' + contacts[i].name.lastName);

			updateContact(contacts[i]);
		}
		removeContact(contacts);
		getPersons();
	}
}

function searchContactList()
{
	var filter = new tizen.AttributeFilter('name.firstName', 'CONTAINS', 'Jo');
	var sortMode = new tizen.SortMode('name.firstName', 'ASC');
	addressBook.find(contactListSuccessCallback, errorCallback, filter, sortMode);
}

function addContact()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	addressBook.add(contact1);
	addressBook.add(contact2);

	searchContactList();
}

function contactBatchAddedCallback(contacts)
{
	console.log('addBatch() is successful! ' + contacts.length + 'contacts are added.');

	searchContactList();
}

function addBatchContact()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	try	{
		addressBook.addBatch([contact1, contact2], contactBatchAddedCallback, errorCallback);
	} catch (error) {
		console.log('The error is occured while adding batch contacts. ' + error.name + ": " + error.message);
	}
}

function removeContact(contacts)
{
	addressBook = tizen.contact.getDefaultAddressBook();
	for(i = 0; i < contacts.length; i++)
	{
		addressBook.remove(contacts[i].id);
	}
}

function addGroups()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	
	for (i = 0, j = 0; i < groups.length; i++, j++)
	{
		try {
			var group = new tizen.ContactGroup(groups[i]);
			addressBook.addGroup(group);
			console.log("Group[" + group.id + ']: ' + group.name);
			groupIds[j] = group.id;
			console.log("Group Id[" + j + ']: ' + groupIds[j]);
		} catch (error) {
			console.log(error.name + ": " + error.message);
		}
	}
	
	var currentGroups = addressBook.getGroups();
	console.log('Number of the current group: ' + currentGroups.length);
}

function updateGroup()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	var currentGroups = addressBook.getGroups();
	
	currentGroups[0].name = 'My Family';
	addressBook.updatedGroup(currentGroups[0]);
		
	currentGroups = addressBook.getGroups();
	console.log('Changed group name: ' + currentGroups[2].name);
}

function removeGroups()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	var currentGroups = addressBook.getGroups();

	for (i = 0; i < currentGroups.length; i++)
	{
		try {
			addressBook.removeGroup(currentGroups[i].id);
			console.log("Removed group[" + currentGroups[i].id + ']: ' + currentGroups[i].name);
		} catch (error) {
			console.log(error.name + ": " + error.message);
		}
	}
	
	var currentGroups = addressBook.getGroups();
	console.log('Number of the current group: ' + currentGroups.length);
}

function importingVcard()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	var currentGroups = addressBook.getGroups();
	var vcardContact = null;
	  
	try 
	{
		vcardFormatContact = new tizen.Contact("BEGIN:VCARD\n"+
										"VERSION:3.0\n"+
										"N:Rollence;Julia\n"+
										"FN:Julia Rollence\n"+
										"ORG:ABCD Co.\n"+
										"TITLE:Writer\n"+
										"TEL;WORK:(111) 234-5678\n"+
										"TEL;HOME:(111) 876-5432\n"+
										"EMAIL;WORK;PREF:julia.rollence@abcd.com\n"+
										"END:VCARD");

		addressBook.add(vcardFormatContact);
	   console.log("Contact was added with ID " + vcardFormatContact.id);
	} catch (error) {
		console.log(error.name + ": " + error.message);
	}
	addressBook.remove(vcardFormatContact.id);
}

var listenerId = 0;

var listener = {
	// If contacts are added
	oncontactsadded: function (contacts) 
	{
		console.log('Added contacts: ' + contacts.length);
	},

	// If contacts are updated
	oncontactsupdated: function (contacts) 
	{
	   console.log('Updated contacts: ' +contacts.length);
	},

	// If contacts are deleted
	oncontactsremoved: function (ids) 
	{
		console.log('Removed contacts:' + ids.length);
	}
};

function addListener()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	listenerId = addressBook.addChangeListener(listener, errorCallback);
	console.log('Listener ID: ' + listenerId);
}

function removeListener()
{
	addressBook = tizen.contact.getDefaultAddressBook();
	try {
		addressBook.removeChangeListener(listenerId);
	} catch (error) {
		console.log(error.name + ": " + error.message);
	}
}

