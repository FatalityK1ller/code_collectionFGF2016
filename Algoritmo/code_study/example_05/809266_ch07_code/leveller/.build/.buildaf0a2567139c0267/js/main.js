/*global window, document */
(function () {

    var ball, hole, startX, startY, holeX, holeY;

    ball = document.getElementById('ball');
    hole = document.getElementById('hole');
    holeX = parseInt(hole.attributes.cx.value, 10);
    holeY = parseInt(hole.attributes.cy.value, 10);

    /**
     * Listener for the deviceorientation event
     * 
     * @param {Event} event
     */
    function orientationChanged(event) {

        var x, y;
        
        startX = startX || event.gamma;
        startY = startY || event.beta;

        x = 160 + (startX - event.gamma) * 5;
        y = 90 + (startY - event.beta) * 5;

        ball.attributes.cx.value = x;
        ball.attributes.cy.value = y;

        if ((holeX === x) && (holeY === y)) {
            document.getElementById('initial-message').style.display = 'none';
            document.getElementById('success-message').style.display = 'block';
            window.navigator.vibrate(1000); // vibrate for one second
        }
    }

    window.addEventListener('deviceorientation', orientationChanged);
}());
