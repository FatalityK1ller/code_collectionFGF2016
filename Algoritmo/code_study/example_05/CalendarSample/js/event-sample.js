
var event1 = new tizen.CalendarEvent({description: "Joan's Birthday", 
	summary: "Joan's Birthday", 
	startDate: new tizen.TZDate(1990, 2, 27), 
	isAllDay: true,	
	visibility: 'PRIVATE', 
	priority: 'HIGH', 
	categories: ['Anniversary']
});

var attendee1 = new tizen.CalendarAttendee("mailto: grace@domain.com",
		{name: 'Grace', role: 'CHAIR'}
);

var attendee2 = new tizen.CalendarAttendee("mailto: joy@domain.com",
		{name: 'Joy', role: 'REQ_PARTICIPANT'}
);

var attendee3 = new tizen.CalendarAttendee("mailto: tom@domain.com",
		{name: 'Tom',
		role: 'OPT_PARTICIPANT'}
);

var recurrenceRule2 = new tizen.CalendarRecurrenceRule("WEEKLY", {occurrenceCount: 5});

var alarm1 = new tizen.CalendarAlarm(new tizen.TimeDuration(15, "MINS"), "SOUND");

var event2 = new tizen.CalendarEvent({description:"Team meeting",
	summary:"Team meeting", 
	startDate: new tizen.TZDate(2014, 6, 2, 9, 0), 
	duration: new tizen.TimeDuration(1, 'HOURS'),
	visibility: 'CONFIDENTIAL',
	priority: 'HIGH',
	location:"Idea meeting room",
	categories: ['Work'],
	attendees: [attendee1, attendee2, attendee3],
	recurrenceRule: recurrenceRule2,
	alarms:[alarm1]
});

function calendarResultListCallback(calendarItems)
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	
	for(i = 0; i < calendarItems.length; i++)
	{
		console.log('Event[' + calendarItems[i].id.uid + ']: ' + calendarItems[i].summary);
		eventCalendar.remove(calendarItems[i].id);
	}
}

function errorCallback(error)
{
	console.log(error.name + ': ' + error.message);
}

function getEvents()
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	eventCalendar.find(calendarResultListCallback, errorCallback);
}

function findHighPriorityEvents()
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	var filter = new tizen.AttributeFilter('priority', 'CONTAINS', 'HIGH');
	var sortMode = new tizen.SortMode('summary', 'ASC');
	eventCalendar.find(calendarResultListCallback, errorCallback, filter, sortMode);
}

function addEvent()
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	try {
		eventCalendar.add(event1);
	} catch (error1){
		console.log(error1.name + ': ' + error1.message);
	}
	console.log('Added event ID: ' + event1.id.uid);
	try {
		eventCalendar.add(event2);
	} catch (error2){
		console.log(error2.name + ': ' + error2.message);
	}
	console.log('Added event ID: ' + event2.id.uid);
}

function calendarAddBatchListCallback(calendarItems)
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	
	for(i = 0; i < calendarItems.length; i++)
	{
		console.log('Event[' + calendarItems[i].id.uid + ']: ' + calendarItems[i].summary);
	}
}


function addBatch()
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	try {
		eventCalendar.addBatch([event1, event2], calendarAddBatchListCallback, errorCallback);
	} catch (error){
		console.log(error.name + ': ' + error.message);
	}
}

function meetingEventCallback(meetingEvents)
{
	for(i = 0; i < meetingEvents.length; i++)
	{
		console.log('Event[' + meetingEvents[i].id.uid + ']: ' + meetingEvents[i].summary);
	}

	meetingEvents[0].priority = 'LOW';

	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	eventCalendar.update(meetingEvents[0]);

	getEvents();
}

function updateEvent(event)
{
	addEvent();
	
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	var filter = new tizen.AttributeFilter('summary', 'CONTAINS', 'meeting');
	eventCalendar.find(meetingEventCallback, errorCallback, filter);
	
}

var recurrenceRule1 = new tizen.CalendarRecurrenceRule("YEARLY");

function birthdayEventCallback(birthdayEvents)
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');

	for(i = 0; i < birthdayEvents.length; i++)
	{
		console.log('Event[' + birthdayEvents[i].id.uid + ']: ' + birthdayEvents[i].summary);
	}

	birthdayEvents[0].recurrenceRule = recurrenceRule1;
	eventCalendar.update(birthdayEvents[0]);

	getEvents();
}

function addBirthdayRecurrence()
{
	addEvent();

	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	var filter = new tizen.AttributeFilter('summary', 'CONTAINS', 'birthday');
	eventCalendar.find(birthdayEventCallback, errorCallback, filter);
}

function someRecurrenceEventResult(events)
{
	console.log('Event count: ' + events.length);
	for(i = 0; i < events.length; i++)
	{
		console.log('Event[' + events[i].id.uid + ']: ' + events[i].summary);
	}
	// Update some instances of recurrence events
}

function meetingEventCallback(meetingEvents)
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');

	for(i = 0; i < meetingEvents.length; i++)
	{
		console.log('Event[' + meetingEvents[i].id.uid + ']: ' + meetingEvents[i].summary);
	}

	meetingEvents[0].expandRecurrence(new tizen.TZDate(2014, 6, 8), new tizen.TZDate(2014, 6, 17), someRecurrenceEventResult, errorCallback);
}

function updateThisMeeting()
{
	addEvent();

	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	var filter = new tizen.AttributeFilter('summary', 'CONTAINS', 'meeting');
	eventCalendar.find(meetingEventCallback, errorCallback, filter);
}

var iCal = new tizen.CalendarEvent(
	"BEGIN:VCALENDAR\r\n" +
	"BEGIN:VEVENT\r\n" +
	"DTSTAMP:20140901T1500Z\r\n" +
	"DTSTART:20140903T150000Z\r\n" +
	"DTEND:20140903T190000Z\r\n" +
	"SUMMARY:Task check\r\n" +
	"CATEGORIES:BUSINESS\r\n" +
	"END:VEVENT\r\n" +
	"END:VCALENDAR", "ICALENDAR_20"
);

function convertEventResult(events)
{
	for(i = 0; i < events.length; i++)
	{
		console.log('Event[' + events[i].id.uid + ']: ' + events[i].summary);
	}
	
	var iCalEvent = events[0].convertToString("ICALENDAR_20");
	console.log(iCalEvent);
	
}

function convertEvent()
{
	var eventCalendar = tizen.calendar.getDefaultCalendar('EVENT');
	eventCalendar.add(iCal);
	eventCalendar.find(convertEventResult, errorCallback);
}
