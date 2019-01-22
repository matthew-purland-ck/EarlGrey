//
// Copyright 2018 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "AppFramework/EarlGreyApp/EarlGreyApp.h"
#import "CommonLib/DistantObject/GREYHostApplicationDistantObject.h"

/** GREYHostApplicationDistantObject extension for the basic interaction test. */
@interface GREYHostApplicationDistantObject (BasicInteractionTest)

/**
 *  Adds a value to a mutable array after one second.
 *
 *  param array The NSMutableArray to add the value to.
 *  param array The NSTimeInterval after which we add to the array.
 */
- (void)addToMutableArray:(NSMutableArray *)array afterTime:(NSTimeInterval)seconds;

/**
 *  Returns a label's text that has been grabbed by an action.
 */
- (NSString *)labelText;

/**
 *  Returns an NSString with the element UI hierarchy asked for from the main thread.
 */
- (NSString *)elementHierarchyString;

/**
 *  Returns an action that grabs a label and returns its text.
 */
- (id<GREYAction>)actionToGetLabelText;

/**
 *  Sets up a gesture recognizer to check if a window was tapped.
 *
 *  @return a UIWindow with the gesture recognizer attached.
 */
- (UIWindow *)setupGestureRecognizer;

/**
 *  Set a new View Controller as the root and return the original.
 */
- (UIViewController *)originalVCAfterSettingNewVCAsRoot;

/**
 *  Set a new View Controller as the root on multiple windows and return the original.
 *
 *  @param otherWindow Another UIWindow to set a view controller as root in.
 */
- (UIViewController *)originalVCAfterSettingRootVCInAnotherWindow:(UIWindow *)otherWindow;

/**
 *  Set the root view controller for the main window.
 *
 *  @param viewController The View Controller to set as the root for the app's main window.
 */
- (void)setRootViewController:(UIViewController *)viewController;

/**
 *  Set the root view controller for the provided @c window.
 *
 *  @param viewController The View Controller to set as the root for the app's main window.
 *  @param window         The window to set the view controllee as root in.
 */
- (void)setRootViewController:(UIViewController *)viewController inWindow:(UIWindow *)window;

/**
 *  Returns an action that checks if an element is hidden.
 */
- (id<GREYAction>)actionForCheckingIfElementHidden;

/**
 *  Returns an assertion that checks if an element is present.
 */
- (id<GREYAssertion>)assertionForCheckingIfElementPresent;

/**
 *  Returns an action to hide or unhide Tab 2 in the Basic View Controller.
 *
 *  @param hide Denotes if to hide or unhide the tab.
 */
- (id<GREYAction>)actionToHideOrUnhideBlock:(BOOL)hide;

/**
 *  Returns an action to make an element opaque or transparent.
 *
 *  @param makeOpaque Denotes if the element should be opaque or not.
 */
- (id<GREYAction>)actionToMakeOpaque:(BOOL)makeOpaque;

/**
 *  Returns an action to make a UIWindow opaque or transparent.
 *
 *  @param makeOpaque Denotes if the UIWindow should be opaque or not.
 */
- (id<GREYAction>)actionToMakeWindowOpaque:(BOOL)makeOpaque;

/**
 *  Returns a sample shorthand action.
 */
- (id<GREYAction>)sampleShorthandAction;

/**
 *  Returns a sample shorthand matcher.
 */
- (id<GREYMatcher>)sampleShorthandMatcher;

@end
