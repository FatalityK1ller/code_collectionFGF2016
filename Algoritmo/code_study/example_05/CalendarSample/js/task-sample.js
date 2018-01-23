var task1 = new tizen.CalendarTask({description: 'Prepare for guests', 
	summary: 'Home Party', 
	startDate: new tizen.TZDate(2014, 5, 1, 17, 0), 
	visibility: 'PUBIC', 
	priority: 'HIGH', 
	categories: ['Home'],
	dueDate: new tizen.TZDate(2014, 5, 5, 9, 0)
});

var task2 = new tizen.CalendarTask({description: 'Check the laundary', 
	summary: 'Lundary', 
	startDate: new tizen.TZDate(2014, 5, 2, 9, 0), 
	visibility: 'PUBIC', 
	priority: 'LOW', 
	categories: ['Home'],
	dueDate: new tizen.TZDate(2014, 5, 5, 11, 0)
});

function taskResultListCallback(tasks)
{
	console.log('taskResultListCallback() is called.');
	var taskCalendar = tizen.calendar.getDefaultCalendar('TASK');
	
	for(i = 0; i < tasks.length; i++)
	{
		console.log('Task[' + tasks[i].id + ']: ' + tasks[i].description);
		taskCalendar.remove(tasks[i].id);
	}
}

function getTasks()
{
	var taskCalendar = tizen.calendar.getDefaultCalendar('TASK');
	taskCalendar.find(taskResultListCallback, errorCallback);
}

function addTask()
{
	var taskCalendar = tizen.calendar.getDefaultCalendar('TASK');
	try {
		taskCalendar.add(task1);
	} catch (error1){
		console.log(error1.name + ': ' + error1.message);
	}
	console.log('Added task ID: ' + task1.id);
	try {
		taskCalendar.add(task2);
	} catch (error2){
		console.log(error2.name + ': ' + error2.message);
	}
	console.log('Added task ID: ' + task2.id);
	
	getTasks();
}