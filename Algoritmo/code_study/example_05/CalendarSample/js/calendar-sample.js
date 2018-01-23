function getDefaultCalendar()
{
	var eventCalendar = tizen.calendar.getDefaultCalendar("EVENT");
	console.log('Calendar ID: ' + eventCalendar.id);
	console.log('Calendar name: ' + eventCalendar.name);
}

function getUnifiedCalendar()
{
	var eventCalendar = tizen.calendar.getUnifiedCalendar("EVENT");
	console.log('Calendar ID: ' + eventCalendar.id);
	console.log('Calendar name: ' + eventCalendar.name);
}

