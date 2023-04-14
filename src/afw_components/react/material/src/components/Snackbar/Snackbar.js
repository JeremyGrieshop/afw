// See the 'COPYING' file in the project root for licensing information.
/*
 * React Component definition for Snackbar
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */

import {memo} from "react";
import PropTypes from "prop-types";

import IconButton from "@mui/material/IconButton";
import Icon from "@mui/material/Icon";
import MuiSnackbar from "@mui/material/Snackbar";

/**
 * Implementation Id : Snackbar
 * Category          : utilities
 * 
 * A component that renders a Snackbar to be displayed.
 * 
 * This component pops up a small bar at the bottom of the screen to alert
 * the user of a recent activity, such as a success or error status,
 * typically following an action that was taken by the user.
 * 
 */
export const Snackbar = (props) => {
    
    return (
        <MuiSnackbar 
            className={props.className}
            style={props.style}
            open={props.open}
            onClose={props.onClose}
            message={props.message}
            autoHideDuration={props.duration}
            anchorOrigin={{ vertical: "bottom", horizontal: "center" }}
            action={props.showClose && 
                <IconButton
                    key="close"
                    aria-label="close"
                    color="inherit"
                    onClick={props.onClose}
                >
                    <Icon>close</Icon>
                </IconButton>
            }
        >                
        </MuiSnackbar>
    );
};

/**
 * PropTypes generated by _AdaptiveLayoutComponentType_Snackbar
 */
Snackbar.propTypes = {
    /**
     * duration
     * Data Type: (integer)
     * 
     * The amount of time, in milliseconds to display the Snackbar.
     */
    duration:                           PropTypes.number,
    /**
     * message
     * Data Type: (string)
     * 
     * The message to be displayed in the Snackbar component.
     */
    message:                            PropTypes.string,
    /**
     * open
     * Data Type: (boolean)
     * 
     * Specifies whether the Snackbar is open or not.
     */
    open:                               PropTypes.bool,
    /**
     * type
     * Data Type: (string)
     * 
     * The type of message for the Snackbar component (error, warning, info,
     * success).
     */
    type:                               PropTypes.string,
};

Snackbar.defaultProps = {
};

export default memo(Snackbar);
