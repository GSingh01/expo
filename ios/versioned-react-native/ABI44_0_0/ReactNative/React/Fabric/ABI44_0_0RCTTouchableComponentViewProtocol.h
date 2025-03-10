/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>
#import <ABI44_0_0React/ABI44_0_0renderer/components/view/TouchEventEmitter.h>

@protocol ABI44_0_0RCTTouchableComponentViewProtocol <NSObject>
- (ABI44_0_0facebook::ABI44_0_0React::SharedTouchEventEmitter)touchEventEmitterAtPoint:(CGPoint)point;
@end
