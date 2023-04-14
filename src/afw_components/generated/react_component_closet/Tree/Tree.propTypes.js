import PropTypes from "prop-types";

/* Generated objectType propType definition for property label */
let Tree_Node;
Tree_Node = {
    /**
     * Property: children
     * Data Type: (list, object _AdaptiveLayoutComponentType_Tree_Node)
     * 
     * The children of this Tree Node.
     */
    children:                           PropTypes.arrayOf(PropTypes.shape(Tree_Node)),
    /**
     * Property: contains
     * Data Type: (object, _AdaptiveLayoutComponentType_)
     * 
     * Optional component under this tree node.
     */
    contains:                           PropTypes.oneOfType([ PropTypes.element, PropTypes.object ]),
    /**
     * Property: icon
     * Data Type: (string)
     * 
     * The icon for this tree node.
     */
    icon:                               PropTypes.string,
    /**
     * Property: key
     * Data Type: (string)
     * 
     * The unique identifying key for this tree node.
     */
    key:                                PropTypes.string.isRequired,
    /**
     * Property: label
     * Data Type: (string)
     * 
     * The label for this tree node.
     */
    label:                              PropTypes.string,
};

/**
 * PropTypes generated by _AdaptiveLayoutComponentType_Tree
 */
export const propTypes = {
    /**
     * children
     * Data Type: (list, object _AdaptiveLayoutComponentType_Tree_Node)
     * 
     * The children of this Tree.
     */
    children:                           PropTypes.arrayOf(PropTypes.shape(Tree_Node)).isRequired,
    /**
     * dense
     * Data Type: (boolean)
     * 
     * The tree nodes should be condensed in space.
     */
    dense:                              PropTypes.bool,
    /**
     * expandedKeys
     * Data Type: (list, string)
     * 
     * The keys of nodes in this tree that are expanded.
     */
    expandedKeys:                       PropTypes.arrayOf(PropTypes.string),
    /**
     * selectedKeys
     * Data Type: (list, string)
     * 
     * The keys of nodes in this tree that are selected.
     */
    selectedKeys:                       PropTypes.arrayOf(PropTypes.string),
};

export const defaultProps = {
};

export default propTypes;
