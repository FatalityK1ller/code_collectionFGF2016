
var addressBook;
var contact;

function allAddressBooksCallback(addressBooks) 
{
	if (addressBooks.length > 0)
	{
		for(i = 0; i < addressBooks.length; i++)
		{
			addressBook = addressBooks[i];
			console.log(addressBook.id);
			console.log(addressBook.name);
			console.log(addressBook.readOnly);
		}
	}
}

function errorCallback(error)
{
	console.log(error.name + ": " + error.message);
}

function getAllAddressbooks()
{
	tizen.contact.getAddressBooks(allAddressBooksCallback, errorCallback);
}

function getUnifiedAddressbook()
{
	addressBook = tizen.contact.getUnifiedAddressBook();
}

function getDefaultAddressbooks()
{
	addressBook = tizen.contact.getDefaultAddressBook();
}

