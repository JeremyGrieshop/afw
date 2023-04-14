// See the 'COPYING' file in the project root for licensing information.

import PropTypes from "prop-types";

/**
 * PropTypes generated by _AdaptiveLayoutComponentType_Dialog
 */
export const propTypes = {
    /**
     * contains
     * Data Type: (object, _AdaptiveLayoutComponent_)
     * 
     * Any contents that needs to be rendered inside the Dialog.
     */
    contains:                           PropTypes.object,
    /**
     * footer
     * Data Type: (object, _AdaptiveLayoutComponent_)
     * 
     * Any contents that needs to be rendered inside the Dialog's footer
     * area.
     */
    footer:                             PropTypes.object,
    /**
     * fullScreen
     * Data Type: (boolean)
     * 
     * Should the Dialog be full screen?
     */
    fullScreen:                         PropTypes.bool,
    /**
     * isBlocking
     * Data Type: (boolean)
     * 
     * Determines if the Dialog should block dismissing until the user clicks
     * a button.
     */
    isBlocking:                         PropTypes.bool,
    /**
     * maxWidth
     * Data Type: (string)
     * 
     * The maximum width of the Dialog.
     */
    maxWidth:                           PropTypes.string,
    /**
     * open
     * Data Type: (boolean)
     * 
     * Specifies whether this Dialog component is open.
     */
    open:                               PropTypes.bool,
    /**
     * showClose
     * Data Type: (boolean)
     * 
     * Should a close button be rendered, to allow the user to dismiss the
     * Dialog.
     */
    showClose:                          PropTypes.bool,
    /**
     * subText
     * Data Type: (string)
     * 
     * The content text to display inside the dialog box, directly under the
     * Title.
     */
    subText:                            PropTypes.string,
    /**
     * title
     * Data Type: (string)
     * 
     * The title text to display at the top of the dialog box.
     */
    title:                              PropTypes.any,
};

export const defaultProps = {
    fullScreen:                         false,
    showClose:                          false,
};

export default propTypes;
