"""
Filter module decides which clang cursor needs to be processed and which one needs to be skipped.
"""


class CXXParserFilter(object):
    """
    Simple filter implementation to skip unnecessary records for AST of clang.
    """

    def __init__(self, include_files=None):

        self.include_files = include_files

    def include_files():
        """
        File list that should be included.
        If this list is not empty all cursors that not belonging
        this files are filtered.

        :returns: list of files
        """
        def fget(self):
            return self._include_files

        def fset(self, value):
            if value is None:
                value = []

            if not isinstance(value, list):
                value = [value]
            self._include_files = value

        return locals()

    include_files = property(**include_files(), doc=include_files.__doc__)

    def filter_cursor(self, node):
        """Function test whether or not node needs to be processed.

        args:
            node: Node that need to be tested

        Returns:
            True if cursor needs to be processed

        """
        if self.filter_by_file(node):
            return True

        return False

    def filter_cursor_children(self, node):
        """Function test whether or not nodes children needs to be processed.

        args:
            node: Node that need to be tested

        Returns:
            True if cursor needs to be processed

        """
        return False

    def filter_by_file(self, node):
        if node.extent.start.file is None:
            return True
        if self.include_files:
            return node.extent.start.file.name not in self.include_files
        return False


cxx_ieg_filter = CXXParserFilter()