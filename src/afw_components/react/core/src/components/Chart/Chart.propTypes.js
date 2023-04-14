// See the 'COPYING' file in the project root for licensing information.

import PropTypes from "prop-types";

/* Generated objectType propType definition for property y */
const Chart_Data = {
    /**
     * Property: x
     * Data Type: (string)
     * 
     * X-Axis Data point.
     */
    x:                                  PropTypes.string,
    /**
     * Property: y
     * Data Type: (integer)
     * 
     * Y-Axis Data point.
     */
    y:                                  PropTypes.number,
};

/**
 * PropTypes generated by _AdaptiveLayoutComponentType_Chart
 */
export const propTypes = {
    /**
     * animateDuration
     * Data Type: (integer)
     * 
     * Duration in milliseconds to animate the chart data.
     */
    animateDuration:                    PropTypes.number,
    /**
     * data
     * Data Type: (list, object _AdaptiveLayoutComponentType_Chart_Data)
     * 
     * The data for the Chart.
     */
    data:                               PropTypes.arrayOf(PropTypes.shape(Chart_Data)),
    /**
     * tooltip
     * Data Type: (boolean)
     * 
     * Specifies whether or not the Chart contains tooltips.
     */
    tooltip:                            PropTypes.bool,
    /**
     * type
     * Data Type: (string)
     * 
     * The type of Chart to display (bar, area, line, pie).
     */
    type:                               PropTypes.string,
};

export const defaultProps = {
};

export default propTypes;
