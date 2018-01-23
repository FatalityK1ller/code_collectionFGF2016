(function($){
    
    var latitude, longitude, map, mapOptions, geocoder;
    
    latitude = 54.482;
    longitude = -3.087;
	
    // map options
    mapOptions = {
        center: new google.maps.LatLng(latitude, longitude),
        zoom: 6,
        mapTypeId: google.maps.MapTypeId.ROADMAP,
        disableDefaultUI: true,
        zoomControl: true
    };
    
    // map instance
    map = new google.maps.Map(document.getElementById("map"), mapOptions);
    
    /**
     * Update the display to show current coordinates.
     * 
     * @param {Number} latitude
     * @param {Number} longitude
     */
    function updateCoordinateDisplay(latitude, longitude) {
        $('#lat-display').text(latitude);
        $('#lon-display').text(longitude);
    }
    
    /**
     * Reverse geocode a coordinate. This will pass a single address back to
     * the callback function (fn).
     * 
     * @param {Object} point an instance of google.maps.LatLng
     * @param {Function} fn callback that will handle the address
     */
    function reverseGeocode(point, fn) {
        geocoder.geocode({latLng: point}, function(results, status){
            var address = '';
            if (status === google.maps.GeocoderStatus.OK) {
                if (results.length > 2) {
                    address = results[1].formatted_address;
                }
            }
            fn(address);
        });
    }
    
    // set the current display coordinates for first load
    updateCoordinateDisplay(latitude, longitude);
    
    // attached to geolocate button
    $('#geolocate').on('touchstart', function(e){
        e.preventDefault();
        navigator.geolocation.getCurrentPosition(function(position){
            var lat, lon;
            lat = position.coords.latitude;
            lon = position.coords.longitude;
            updateCoordinateDisplay(lat, lon);
            map.setCenter(new google.maps.LatLng(lat, lon));
        }, function(){
            alert("Sorry, we're unable to detect your location");
        });
    });

    // drop a marker on the map
    $('#drop-marker').on('touchstart', function(e){
        e.preventDefault();
        var marker = new google.maps.Marker({
            map: map,
            position: map.getCenter()
        });
        reverseGeocode(map.getCenter(), function(address){
            var infoWindow = new google.maps.InfoWindow();
            infoWindow.setContent(address);
            infoWindow.open(map, marker);
        });
    });
    
    geocoder = new google.maps.Geocoder();
    
    // placename search form
    $('form').on('submit', function(e){
        e.preventDefault();
        var placename = $('#placename').val();
        geocoder.geocode({ address: placename }, function(results, success){
            if (success === google.maps.GeocoderStatus.OK) {
                map.setCenter(results[0].geometry.location);
                updateCoordinateDisplay(
                    results[0].geometry.location.lat(),
                    results[0].geometry.location.lng()
                );
            } else {
                alert('Unable to find "' + placename + '"');
            }
        });
    });
            
}(jQuery));