/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_EditorHelperForwards_h
#define mozilla_EditorHelperForwards_h

#include "mozilla/EnumSet.h"

#include <cstdint>

/******************************************************************************
 * Forward declarations of other modules'
 ******************************************************************************/
class nsIContent;
class nsINode;

template <typename T>
class nsCOMPtr;

template <typename T>
class RefPtr;

namespace mozilla {

template <typename V, typename E>
class Result;

template <typename T>
class OwningNonNull;

namespace dom {
class Element;
class Text;
}  // namespace dom

/******************************************************************************
 * enum classes
 ******************************************************************************/

enum class BlockInlineCheck : uint8_t;         // HTMLEditHelpers.h
enum class CollectChildrenOption;              // HTMLEditUtils.h
enum class EditAction;                         // mozilla/EditAction.h
enum class EditorCommandParamType : uint16_t;  // mozilla/EditorCommands.h
enum class EditSubAction : int32_t;            // mozilla/EditAction.h
enum class ParagraphSeparator;                 // mozilla/HTMLEditor.h
enum class SpecifiedStyle : uint8_t;           // mozilla/PendingStyles.h
enum class SuggestCaret;                       // EditorUtils.h
enum class WithTransaction;                    // HTMLEditHelpers.h

/******************************************************************************
 * enum sets
 ******************************************************************************/

using CollectChildrenOptions = EnumSet<CollectChildrenOption>;
using SuggestCaretOptions = EnumSet<SuggestCaret>;

/******************************************************************************
 * classes or structs which are required for template classes/structs
 ******************************************************************************/

template <typename PT, typename CT>
class EditorDOMPointBase;  // mozilla/EditorDOMPoint.h

using EditorDOMPoint =
    EditorDOMPointBase<nsCOMPtr<nsINode>, nsCOMPtr<nsIContent>>;
using EditorRawDOMPoint = EditorDOMPointBase<nsINode*, nsIContent*>;
using EditorDOMPointInText = EditorDOMPointBase<RefPtr<dom::Text>, nsIContent*>;
using EditorRawDOMPointInText = EditorDOMPointBase<dom::Text*, nsIContent*>;

template <typename CT>
class EditorLineBreakBase;  // EditorLineBreak.h

using EditorLineBreak = EditorLineBreakBase<nsCOMPtr<nsIContent>>;
using EditorRawLineBreak = EditorLineBreakBase<nsIContent*>;

/******************************************************************************
 * classes
 ******************************************************************************/

class AutoPendingStyleCacheArray;  // mozilla/PendingStyles.h
class EditTransactionBase;         // mozilla/EditTransactionBase.h
class EditorBase;                  // mozilla/EditorBase.h
class HTMLEditor;                  // mozilla/HTMLEditor.h
class ManualNACPtr;                // mozilla/ManualNAC.h
class PendingStyle;                // mozilla/PendingStyles.h
class PendingStyleCache;           // mozilla/PendingStyles.h
class PendingStyles;               // mozilla/PendingStyles.h
class RangeUpdater;                // mozilla/SelectionState.h
class SelectionState;              // mozilla/SelectionState.h
class TextEditor;                  // mozilla/TextEditor.h

class AutoClonedRangeArray;               // AutoClonedRangeArray.h
class AutoClonedSelectionRangeArray;      // AutoClonedRangeArray.h
class AutoSelectionRestorer;              // AutoSelectionRestorer.h
class AutoSelectionRangeArray;            // EditorUtils.h
class CaretPoint;                         // EditorUtils.h
class ChangeAttributeTransaction;         // ChangeAttributeTransaction.h
class ChangeStyleTransaction;             // ChangeStyleTransaction.h
class CompositionInTextNodeTransaction;   // CompositionTransaction.h
class CompositionTransaction;             // CompositionTransaction.h
class CreateLineBreakResult;              // EditorLineBreak.h
class CSSEditUtils;                       // CSSEditUtils.h
class DeleteContentTransactionBase;       // DeleteContentTransactionBase.h
class DeleteMultipleRangesTransaction;    // DeleteMultipleRangesTransaction.h
class DeleteNodeTransaction;              // DeleteNodeTransaction.h
class DeleteRangeResult;                  // HTMLEditHelpers.h
class DeleteRangeTransaction;             // DeleteRangeTransaction.h
class DeleteTextFromTextNodeTransaction;  // DeleteTextTransaction.h
class DeleteTextTransaction;              // DeleteTextTransaction.h
class EditActionResult;                   // EditorUtils.h
class EditAggregateTransaction;           // EditAggregateTransaction.h
class EditorEventListener;                // EditorEventListener.h
class EditResult;                         // HTMLEditHelpers.h
class HTMLEditorEventListener;            // HTMLEditorEventListener.h
class InsertNodeTransaction;              // InsertNodeTransaction.h
class InsertTextIntoTextNodeTransaction;  // InsertTextTransaction.h
class InsertTextResult;                   // EditorUtils.h
class InsertTextTransaction;              // InsertTextTransaction.h
class InterCiter;                         // InterCiter.h
class JoinNodesResult;                    // HTMLEditHelpers.h
class JoinNodesTransaction;               // JoinNodesTransaction.h
class MoveNodeResult;                     // HTMLEditHelpers.h
class MoveNodeTransaction;                // MoveNodeTransaction.h
class PlaceholderTransaction;             // PlaceholderTransaction.h
class ReplaceTextInTextNodeTransaction;   // ReplaceTextTransaction.h
class ReplaceTextTransaction;             // ReplaceTextTransaction.h
class SplitNodeResult;                    // HTMLEditHelpers.h
class SplitNodeTransaction;               // SplitNodeTransaction.h
class SplitRangeOffFromNodeResult;        // HTMLEditHelpers.h
class SplitRangeOffResult;                // HTMLEditHelpers.h
class WhiteSpaceVisibilityKeeper;         // WhiteSpaceVisibilityKeeper.h
class WSRunScanner;                       // WSRunScanner.h
class WSScanResult;                       // WSRunScanner.h

/******************************************************************************
 * structs
 ******************************************************************************/

class EditorElementStyle;          // HTMLEditHelpers.h
struct EditorInlineStyle;          // HTMLEditHelpers.h
struct EditorInlineStyleAndValue;  // HTMLEditHelpers.h
struct RangeItem;                  // mozilla/SelectionState.h

/******************************************************************************
 * template classes
 ******************************************************************************/

template <typename EditorDOMPointType>
class EditorDOMRangeBase;  // mozilla/EditorDOMPoint.h

template <typename NodeType>
class CreateNodeResultBase;  // EditorUtils.h

template <typename EditorDOMPointType>
class ReplaceRangeDataBase;  // EditorUtils.h

/******************************************************************************
 * aliases
 ******************************************************************************/

using CreateContentResult = CreateNodeResultBase<nsIContent>;
using CreateElementResult = CreateNodeResultBase<dom::Element>;
using CreateTextResult = CreateNodeResultBase<dom::Text>;

// InsertParagraphResult is an alias of CreateElementResult because it returns
// new paragraph from point of view of users (i.e., right paragraph if split)
// instead of newly created paragraph element.
using InsertParagraphResult = CreateElementResult;

using EditorDOMRange = EditorDOMRangeBase<EditorDOMPoint>;
using EditorRawDOMRange = EditorDOMRangeBase<EditorRawDOMPoint>;
using EditorDOMRangeInTexts = EditorDOMRangeBase<EditorDOMPointInText>;
using EditorRawDOMRangeInTexts = EditorDOMRangeBase<EditorRawDOMPointInText>;

using ReplaceRangeData = ReplaceRangeDataBase<EditorDOMPoint>;
using ReplaceRangeInTextsData = ReplaceRangeDataBase<EditorDOMPointInText>;

}  // namespace mozilla

#endif  // #ifndef mozilla_EditorHelperForwards_h
