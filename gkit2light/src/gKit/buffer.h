
#ifndef _BUFFER_H
#define _BUFFER_H

#include <cstddef>

#include "glcore.h"


//! \addtogroup openGL
///@{

//! \file
//! buffers et vertex array openGL.

//! cree un buffer. a detruire avec glDeleteBuffers( ).
GLuint make_buffer( const GLenum target, const size_t data_size, const void *data );

//! cree un vertex array. a detruire avec release_vertex_format( ).
GLuint create_vertex_format( );

//! cree un vertex buffer et configure le vertex array vao. detruit par release_vertex_format( ).
GLuint make_vertex_buffer( const GLuint vao, const GLint attribute, const int size, const GLenum type, const size_t data_size, const void *data );
//! cree un index buffer et configure le vertex array vao. detruit par release_vertex_format( ).
GLuint make_index_buffer( const GLuint vao, const size_t data_size, const void *data );

//! detruit le vertex array vao et les buffers associes, crees par make_vertex_buffer() et make_index_buffer().
void release_vertex_format( const GLuint vao );

///@}
#endif
