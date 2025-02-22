/*
 *  (c) Copyright 2016-2021 Hewlett Packard Enterprise Development Company LP.
 *
 *  This software is available to you under a choice of one of two
 *  licenses. You may choose to be licensed under the terms of the 
 *  GNU Lesser General Public License Version 3, or (at your option)  
 *  later with exceptions included below, or under the terms of the  
 *  MIT license (Expat) available in COPYING file in the source tree.
 * 
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  As an exception, the copyright holders of this Library grant you permission
 *  to (i) compile an Application with the Library, and (ii) distribute the
 *  Application containing code generated by the Library and added to the
 *  Application during this compilation process under terms of your choice,
 *  provided you also meet the terms and conditions of the Application license.
 *
 */

#ifndef _NVMM_ERROR_CODE_H_
#define _NVMM_ERROR_CODE_H_

namespace nvmm {
enum ErrorCode {
  // general errors (0-)
  NO_ERROR = 0,
  NOT_YET_IMPLEMENTED,
  BUG,
  OUT_OF_MEMORY,
  INVALID_ARGUMENTS, // one or more of the argument to the function is invalid

  // shelf file (20-)
  SHELF_FILE_CREATE_FAILED = 20,
  SHELF_FILE_DESTROY_FAILED,
  SHELF_FILE_TRUNCATE_FAILED,
  SHELF_FILE_OPEN_FAILED,
  SHELF_FILE_CLOSE_FAILED,
  SHELF_FILE_MAP_FAILED,
  SHELF_FILE_FAM_ATOMIC_REGISTER_REGION_FAILED,
  SHELF_FILE_UNMAP_FAILED,
  SHELF_FILE_FOUND,
  SHELF_FILE_NOT_FOUND,
  SHELF_FILE_RENAME_FAILED = 30,

  SHELF_FILE_FORMAT_FAILED,
  SHELF_FILE_CLEAR_FAILED, // clear the formatting
  SHELF_FILE_VERIFY_FAILED,
  SHELF_FILE_INVALID_FORMAT,
  SHELF_FILE_RECOVER_FAILED,
  SHELF_FILE_GET_PERM_FAILED,
  SHELF_FILE_SET_PERM_FAILED,

  SHELF_FILE_OPENED,
  SHELF_FILE_CLOSED,

  // pool (60-)
  POOL_CREATE_FAILED = 60,
  POOL_DESTROY_FAILED,
  POOL_VERIFY_FAILED,
  POOL_OPEN_FAILED,
  POOL_CLOSE_FAILED,
  POOL_MEMBERSHIP_FULL,
  POOL_MEMBERSHIP_EMPTY,
  POOL_INVALID_META_FILE,
  POOL_INVALID_POOL_ID,
  POOL_FOUND,
  POOL_NOT_FOUND,
  POOL_SHELF_FOUND,
  POOL_SHELF_NOT_FOUND,
  POOL_ADD_SHELF_FAILED,
  POOL_REMOVE_SHELF_FAILED,
  POOL_INCONSISTENCY_FOUND,
  POOL_OPENED,
  POOL_CLOSED,

  // membership (80-)
  MEMBERSHIP_CREATE_FAILED = 80,
  MEMBERSHIP_DESTROY_FAILED,
  MEMBERSHIP_OPEN_FAILED,

  // Heap (100-)
  HEAP_CREATE_FAILED = 100,
  HEAP_DESTROY_FAILED,
  HEAP_OPEN_FAILED,
  HEAP_CLOSE_FAILED,
  HEAP_ALLOC_FAILED,
  HEAP_OPENED,
  HEAP_CLOSED,
  HEAP_RESIZE_FAILED,
  HEAP_SET_PERMISSION_FAILED,
  HEAP_GET_PERMISSION_FAILED,
  HEAP_BUSY, // Some other metadata operation in progress
  HEAP_NOT_OPEN,
  HEAP_IS_OPEN,

  // Region (120-)
  REGION_CREATE_FAILED = 120,
  REGION_DESTROY_FAILED,
  REGION_OPEN_FAILED,
  REGION_CLOSE_FAILED,
  REGION_MAP_FAILED,
  REGION_UNMAP_FAILED,
  REGION_OPENED,
  REGION_CLOSED,

  // FreeLists (140-)
  FREELISTS_CREATE_FAILED = 140,
  FREELISTS_DESTROY_FAILED,
  FREELISTS_OPEN_FAILED,
  FREELISTS_PUT_FAILED,
  FREELISTS_EMPTY,

  // Ownership (150-)
  OWNERSHIP_CREATE_FAILED = 150,
  OWNERSHIP_DESTROY_FAILED,
  OWNERSHIP_OPEN_FAILED,

  // memory manager (200-)
  ID_FOUND = 200, // this id is in use
  ID_NOT_FOUND,   // this id is available
  ID_NOT_VALID,   // This id is not valid
  INVALID_PTR,
  MAP_POINTER_FAILED,
  SHELF_BASE_DIR_CREATE_FAILED,
  SHELF_BASE_PATH_DOES_NOT_EXIST,

  // shelf manager (250-)
  SHELF_ID_NOT_FOUND = 250,

  // max return code
  MAX_RETURN_CODE
};

} // namespace nvmm

#endif
