import PropTypes from "prop-types";

/* Generated objectType propType definition for property name */
const Table_Column = {
    /**
     * Property: fieldName
     * Data Type: (string)
     * 
     * The fieldName for the rows used in this Table component column
     * definition.
     */
    fieldName:                          PropTypes.string,
    /**
     * Property: isMultiline
     * Data Type: (boolean)
     * 
     * Indicates this column is multilined in this Table component.
     */
    isMultiline:                        PropTypes.bool,
    /**
     * Property: isResizable
     * Data Type: (boolean)
     * 
     * Indicates this column is resizable in this Table component.
     */
    isResizable:                        PropTypes.bool,
    /**
     * Property: key
     * Data Type: (string)
     * 
     * The key for this column used in this Table component.
     */
    key:                                PropTypes.string.isRequired,
    /**
     * Property: maxWidth
     * Data Type: (integer)
     * 
     * The maximum width for this column used in this Table component.
     */
    maxWidth:                           PropTypes.number,
    /**
     * Property: minWidth
     * Data Type: (integer)
     * 
     * The minimum width for this column used in this Table component.
     */
    minWidth:                           PropTypes.number,
    /**
     * Property: name
     * Data Type: (string)
     * 
     * The name to display for this column used in this Table component.
     */
    name:                               PropTypes.string.isRequired,
};

/**
 * PropTypes generated by _AdaptiveLayoutComponentType_Table
 */
export const propTypes = {
    /**
     * columns
     * Data Type: (list, object _AdaptiveLayoutComponentType_Table_Column)
     * 
     * The columns that are defined for this Table component.
     */
    columns:                            PropTypes.arrayOf(PropTypes.shape(Table_Column)).isRequired,
    /**
     * compact
     * Data Type: (boolean)
     * 
     * Indicates whether this Table compact appears compact.
     */
    compact:                            PropTypes.bool,
    /**
     * isHeaderVisible
     * Data Type: (boolean)
     * 
     * Indicates whether this Table displays column headers.
     */
    isHeaderVisible:                    PropTypes.bool,
    /**
     * rows
     * Data Type: (list)
     * 
     * The rows that are defined for this Table component.
     */
    rows:                               PropTypes.array.isRequired,
    /**
     * selectionMode
     * Data Type: (string)
     * 
     * The selection mode for this table (none, single, multiple).
     */
    selectionMode:                      PropTypes.string,
};

export const defaultProps = {
};

export default propTypes;
