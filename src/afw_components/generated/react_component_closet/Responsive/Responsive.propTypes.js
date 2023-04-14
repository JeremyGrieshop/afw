import PropTypes from "prop-types";

/* Generated objectType propType definition for property columns */
const ResponsiveRow = {
    /**
     * Property: columns
     * Data Type: (list, object _AdaptiveLayoutComponentType_ResponsiveCol)
     * 
     * The layout columns that are contained by this ResponsiveRow component.
     */
    columns:                            PropTypes.arrayOf(PropTypes.shape(ResponsiveCol)).isRequired,
};

/**
 * PropTypes generated by _AdaptiveLayoutComponentType_Responsive
 */
export const propTypes = {
    /**
     * alignContent
     * Data Type: (string)
     * 
     * Align content.
     */
    alignContent:                       PropTypes.oneOf(["stretch", "center", "flex-start", "flex-end", "space-between", "space-around"]),
    /**
     * alignItems
     * Data Type: (string)
     * 
     * Align items.
     */
    alignItems:                         PropTypes.oneOf(["flex-start", "center", "flex-end", "stretch", "baseline"]),
    /**
     * justify
     * Data Type: (string)
     * 
     * Justify content.
     */
    justify:                            PropTypes.oneOf(["flex-start", "center", "flex-end", "space-between", "space-around"]),
    /**
     * rows
     * Data Type: (list, object _AdaptiveLayoutComponentType_ResponsiveRow)
     * 
     * The layout row components that are contained by this Responsive.
     */
    rows:                               PropTypes.arrayOf(PropTypes.shape(ResponsiveRow)).isRequired,
    /**
     * spacing
     * Data Type: (integer)
     * 
     * Spacing between rows.
     */
    spacing:                            PropTypes.oneOf([8, 16, 24, 32, 40]),
};

export const defaultProps = {
};

export default propTypes;
